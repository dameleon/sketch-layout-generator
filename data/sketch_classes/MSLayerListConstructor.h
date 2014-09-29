@interface MSLayerListConstructor : NSObject
{
BOOL _includeLayers;	// 8 = 0x8
BOOL _includeSlices;	// 9 = 0x9
MSSourceListView *_listView;	// 16 = 0x10
NSString *_searchTerm;	// 24 = 0x18
NSSet *_selectedLayersAndParents;	// 32 = 0x20
NSString *_containerKey;	// 40 = 0x28
MSPage *_page;	// 48 = 0x30
}
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *containerKey; // @synthesize containerKey=_containerKey;
@property(retain, nonatomic) NSSet *selectedLayersAndParents; // @synthesize selectedLayersAndParents=_selectedLayersAndParents;
@property(nonatomic) BOOL includeSlices; // @synthesize includeSlices=_includeSlices;
@property(nonatomic) BOOL includeLayers; // @synthesize includeLayers=_includeLayers;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) MSSourceListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)findSelectedLayersAndParents;
- (id)findSelectedLayersAndParentsOnPage:(id)arg1;
- (BOOL)itemIsExpanded:(id)arg1;
- (BOOL)layersIsGroupAndContainsSlice:(id)arg1;
- (BOOL)isNormalLayer:(id)arg1;
- (BOOL)shouldIncludeLayerAccordingToSearch:(id)arg1;
- (BOOL)shouldIncludeLayerInPreliminarySweep:(id)arg1;
- (id)layerItemsInGroup:(id)arg1 level:(long long)arg2;
- (id)layersListForPage:(id)arg1;
- (id)init;
@end
