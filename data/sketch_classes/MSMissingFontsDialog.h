@interface MSMissingFontsDialog : NSWindowController <NSTableViewDataSource>
{
NSWindow *panel;	// 80 = 0x50
NSTableView *tableView;	// 88 = 0x58
BOOL openDocumentAnyway;	// 96 = 0x60
NSArray *_missingFonts;	// 104 = 0x68
}
@property(copy, nonatomic) NSArray *missingFonts; // @synthesize missingFonts=_missingFonts;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close:(id)arg1;
- (void)openAnyway:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)runPanelWithMissingFonts:(id)arg1;
@end
