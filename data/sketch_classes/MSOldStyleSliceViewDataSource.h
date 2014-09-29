@interface MSOldStyleSliceViewDataSource : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
MSSliceLayer *_slice;	// 8 = 0x8
NSTableView *_sliceTableView;	// 16 = 0x10
NSMutableArray *_possiblyIncludedLayers;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableArray *possiblyIncludedLayers; // @synthesize possiblyIncludedLayers=_possiblyIncludedLayers;
@property(retain, nonatomic) NSTableView *sliceTableView; // @synthesize sliceTableView=_sliceTableView;
@property(retain, nonatomic) MSSliceLayer *slice; // @synthesize slice=_slice;
- (void).cxx_destruct;
- (id)prefixForLayer:(id)arg1;
- (id)layerAtIndex:(long long)arg1;
- (id)includedLayersForSlice:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)calculatePossiblyIncludedLayers:(id)arg1;
- (void)prepare;
@end
