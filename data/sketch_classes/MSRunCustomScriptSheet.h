@interface MSRunCustomScriptSheet : CHSheetController
{
NSTextView *inputField;	// 80 = 0x50
NSButton *saveButton;	// 88 = 0x58
NSTextField *scriptNameField;	// 96 = 0x60
NSButton *runButton;	// 104 = 0x68
NSPopUpButton *actionButton;	// 112 = 0x70
NSTextView *_logField;	// 120 = 0x78
}
@property(retain, nonatomic) NSTextView *logField; // @synthesize logField=_logField;
- (void).cxx_destruct;
- (void)saveAction:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)runScript:(id)arg1;
- (void)awakeFromNib;
@end
