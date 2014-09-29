@interface MSArtboardGroup : _MSArtboardGroup <MSRootLayer, MSLayerWithBackgroundColour>
{
id <MSSliceLayerWatcher> _sliceWatcher;	// 56 = 0x38
}
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (BOOL)canRotate;
- (id)otherArtboardUnderArtboard;
- (void)moveToEmptyLocation;
- (void)removeFromParent;
- (void)resizeRoot;
- (id)parentRoot;
- (id)parentArtboard;
- (id)slice;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (struct CGRect)rectByAccountingForStyleSize:(struct CGRect)arg1;
@property(nonatomic) struct CGPoint rulerBase; // @dynamic rulerBase;
- (BOOL)isLocked;
- (void)setIsLocked:(BOOL)arg1;
- (double)rotation;
- (BOOL)isOpen;
- (BOOL)canBeTransformed;
- (BOOL)enableAutomaticScaling;
- (id)inspectorViewControllerNames;
- (BOOL)hasClickThrough;
- (id)layersBelowPoint:(struct CGPoint)arg1 forceClickThrough:(BOOL)arg2 keepLockedLayers:(BOOL)arg3;
- (void)setName:(id)arg1;
- (id)defaultName;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (id)defaultArtboardStyle;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (void)initEmptyObject;
- (void)migratePropertiesFromV24OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV36OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV28OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV21OrEarlierWithCoder:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (Class)rendererClass;
// Remaining properties
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(copy, nonatomic) MSRulerData *verticalRulerData;
@end
