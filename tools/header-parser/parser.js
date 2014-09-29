var path = require('path');
var fs = require('fs');
var readline = require('readline');
var stream = fs.ReadStream('./sketch_classes.h');
var readlineInterface = readline.createInterface({ input: stream, output: {} });

function KlassHeader(firstLine) {
    var matches = firstLine.match(/@interface\s(\S*)\s/);

    if (!matches || matches.length < 2) {
        throw new Error('firstLine syntax error');
    }
    this.name = matches[1];
    this.texts = '';
    this.addLine(firstLine);
}

KlassHeader.prototype = {
    constructor: KlassHeader,
    addLine: function(line) {
        this.texts += line + '\n';
    },
    output: function(basepath) {
        if (!fs.existsSync(basepath)) {
            fs.mkdirSync(basepath);
        }
        fs.writeFileSync(
            path.join(basepath, this.name + '.h'),
            new Buffer(this.texts, 'utf8'),
            'utf8'
        );
    }
};

var currentKlassHeader = null;

readlineInterface.on('line', function(line) {
    line = line.trim();
    switch (true) {
        case '' === line:
            break;
        case /@interface/.test(line):
            currentKlassHeader = new KlassHeader(line);
            break;
        case /@end/.test(line):
            if (!currentKlassHeader) {
                break;
            }
            currentKlassHeader.addLine(line);
            currentKlassHeader.output('./output');
            break;
        default:
            if (!currentKlassHeader) {
                break;
            }
            currentKlassHeader.addLine(line);
            break;
    }
});

