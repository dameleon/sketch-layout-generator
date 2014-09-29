@interface MSSliceLayerSection : MSLayerSection <NSTableViewDelegate, NSTableViewDataSource, NSTextFieldDelegate, NSSharingServicePickerDelegate, NSSharingServiceDelegate>
{
NSMatrix *_includeOptions;	// 112 = 0x70
NSTableView *_tableView;	// 120 = 0x78
NSButton *_exportSingleSliceButton;	// 128 = 0x80
NSButton *_trimCheckbox;	// 136 = 0x88
NSButton *_shareButton;	// 144 = 0x90
MSSliceDragView *_sliceDragView;	// 152 = 0x98
NSMutableArray *_possiblyIncludedLayers;	// 160 = 0xa0
}
@property(retain, nonatomic) NSMutableArray *possiblyIncludedLayers; // @synthesize possiblyIncludedLayers=_possiblyIncludedLayers;
@property(retain, nonatomic) MSSliceDragView *sliceDragView; // @synthesize sliceDragView=_sliceDragView;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSButton *trimCheckbox; // @synthesize trimCheckbox=_trimCheckbox;
@property(retain, nonatomic) NSButton *exportSingleSliceButton; // @synthesize exportSingleSliceButton=_exportSingleSliceButton;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMatrix *includeOptions; // @synthesize includeOptions=_includeOptions;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)currentView;
- (id)imagesFromSlice:(id)arg1;
- (void)shareAction:(id)arg1;
- (void)prepareShareButton;
- (void)trimBoxChecked:(id)arg1;
- (id)prefixForLayer:(id)arg1;
- (id)layerAtIndex:(long long)arg1;
- (id)includedLayersForSlice:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)firstSlice;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)calculatePossiblyIncludedLayers:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
@end
