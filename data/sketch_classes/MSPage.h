@interface MSPage : _MSPage <MSRootLayer>
{
long long ignoreLayerSelectionDidChangeNotificationsCounter;	// 56 = 0x38
BOOL _hasBlendedLayer;	// 64 = 0x40
BOOL _shouldSkipCalculatingLayerBlending;	// 65 = 0x41
id <MSBasicDelegate> _delegate;	// 72 = 0x48
id <MSPageDelegate> _pageDelegate;	// 80 = 0x50
MSArtboardGroup *_currentArtboard;	// 88 = 0x58
NSArray *_cachedArtboards;	// 96 = 0x60
NSArray *_cachedExportableLayers;	// 104 = 0x68
}
+ (id)page;
@property(retain, nonatomic) NSArray *cachedExportableLayers; // @synthesize cachedExportableLayers=_cachedExportableLayers;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
@property(nonatomic) BOOL shouldSkipCalculatingLayerBlending; // @synthesize shouldSkipCalculatingLayerBlending=_shouldSkipCalculatingLayerBlending;
@property(nonatomic) BOOL hasBlendedLayer; // @synthesize hasBlendedLayer=_hasBlendedLayer;
@property(retain, nonatomic) MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(nonatomic) __weak id <MSPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)parentOrSelfIsSymbol;
- (void)moveLayersToArtboards;
- (double)defaultZoomValue;
- (void)scheduleCalculateHasBlendedLayer;
- (BOOL)isValidChild:(id)arg1;
- (id)ancestorsOfLayer:(id)arg1 inGroup:(id)arg2;
- (id)ancestorsOfLayer:(id)arg1;
- (void)ignoreLayerSelectionDidChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (void)layerSelectionDidChange;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
@property(readonly, nonatomic) NSArray *artboards; // @dynamic artboards;
- (void)setCurrentLayout:(id)arg1;
- (id)currentLayout;
- (void)setCurrentGrid:(id)arg1;
- (id)currentGrid;
- (id)parentRoot;
- (id)currentRoot;
- (id)ancestorTransforms;
- (id)ancestors;
- (id)parentPage;
- (id)contentBoundsForLayer:(id)arg1;
- (id)contentBounds;
- (void)resizeRoot;
- (id)destinationArtboardForLayer:(id)arg1 artboards:(id)arg2;
- (void)addOrRemoveLayerFromArtboardIfNecessary:(id)arg1;
- (void)tryToMoveLayer:(id)arg1 toArtboards:(id)arg2;
- (void)tryToMoveLayerToArtboard:(id)arg1;
- (id)exportableLayers;
- (id)symbolLayersInGroup:(id)arg1;
- (id)artboardForSlice:(id)arg1 inArtboards:(id)arg2;
- (id)sliceLayerFromSlice:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (void)childDidChangeNotification:(id)arg1;
@property(nonatomic) struct CGPoint rulerBase; // @dynamic rulerBase;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (id)transform;
- (void)sendMessageToRootObject:(unsigned long long)arg1;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (void)setName:(id)arg1;
- (void)refreshForPropertyChanged:(id)arg1;
- (void)dealloc;
- (id)defaultName;
- (id)parentGroup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (void)migratePropertiesFromV36OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV21OrEarlierWithCoder:(id)arg1;
- (id)artboardGroupFromArtboard:(id)arg1;
- (void)migrateArtboardsToArtboardGroups:(id)arg1;
- (id)moveSlicesToArtboards:(id)arg1;
- (id)migrateLegacySlicesToSliceLayers:(id)arg1;
- (void)decodeLegacyArtboards:(id)arg1;
- (void)decodeLegacySlices:(id)arg1;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (Class)rendererClass;
- (BOOL)intersectsSlice:(id)arg1;
- (BOOL)shouldIncludeLayerInSlice:(id)arg1;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
// Remaining properties
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@end
