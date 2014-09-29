@interface MSSVGImporter : NSObject <MSImporter>
{
SVGImporter *_importer;	// 8 = 0x8
id _graph;	// 16 = 0x10
}
+ (id)svgImporter;
@property(retain, nonatomic) id graph; // @synthesize graph=_graph;
@property(retain, nonatomic) SVGImporter *importer; // @synthesize importer=_importer;
- (void).cxx_destruct;
- (BOOL)shouldCollapseSinglePage;
- (BOOL)shouldExpandPages;
- (id)secondPhaseSubtitleForValue:(long long)arg1 maximum:(long long)arg2;
- (id)firstPhaseSubtitle;
- (void)finishImporting;
- (void)importIntoGroup:(id)arg1 name:(id)arg2 images:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (unsigned long long)prepareToImportFromData:(id)arg1;
- (unsigned long long)prepareToImportFromURL:(id)arg1;
@end
