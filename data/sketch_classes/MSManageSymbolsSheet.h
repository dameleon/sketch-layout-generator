@interface MSManageSymbolsSheet : CHSheetController <NSTableViewDataSource, NSTableViewDelegate>
{
NSTableView *_symbolsTableView;	// 80 = 0x50
NSTableView *_layerStylesTableView;	// 88 = 0x58
NSTableView *_textStylesTableView;	// 96 = 0x60
NSImage *_blankImage;	// 104 = 0x68
NSMutableDictionary *_symbolPreviews;	// 112 = 0x70
NSMutableDictionary *_layerStylePreviews;	// 120 = 0x78
}
@property(retain, nonatomic) NSMutableDictionary *layerStylePreviews; // @synthesize layerStylePreviews=_layerStylePreviews;
@property(retain, nonatomic) NSMutableDictionary *symbolPreviews; // @synthesize symbolPreviews=_symbolPreviews;
@property(retain, nonatomic) NSImage *blankImage; // @synthesize blankImage=_blankImage;
@property(retain, nonatomic) NSTableView *textStylesTableView; // @synthesize textStylesTableView=_textStylesTableView;
@property(retain, nonatomic) NSTableView *layerStylesTableView; // @synthesize layerStylesTableView=_layerStylesTableView;
@property(retain, nonatomic) NSTableView *symbolsTableView; // @synthesize symbolsTableView=_symbolsTableView;
- (void).cxx_destruct;
- (id)doc;
- (id)containerForTableView:(id)arg1;
- (id)previewForSharedObjectInTableView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)generatePreviewSharedObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)deleteSelectedObjectInTableView:(id)arg1;
- (void)deleteTextStyle:(id)arg1;
- (void)deleteLayerStyle:(id)arg1;
- (void)deleteSymbol:(id)arg1;
- (id)sharedObjectForTableView:(id)arg1 atIndex:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)generateSymbolsForTableView:(id)arg1 imageArray:(id)arg2;
- (void)awakeFromNib;
@end
