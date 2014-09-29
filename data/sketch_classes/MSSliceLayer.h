@interface MSSliceLayer : _MSSliceLayer <MSLayerWithBackgroundColour>
{
id <MSSliceLayerWatcher> _sliceWatcher;	// 56 = 0x38
}
@property(nonatomic) __weak id <MSSliceLayerWatcher> sliceWatcher; // @synthesize sliceWatcher=_sliceWatcher;
- (void).cxx_destruct;
- (BOOL)canRotate;
- (BOOL)isLayerExportable;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (id)inspectorViewControllerNames;
- (BOOL)canBeSelectedOnCanvas;
- (BOOL)canBeTransformed;
- (void)setName:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (void)initEmptyObject;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (id)defaultName;
- (BOOL)shouldConvertArrayPropertyWithName:(id)arg1;
- (void)migratePropertiesFromV22OrEarlierWithCoder:(id)arg1;
// Remaining properties
@property(nonatomic) BOOL hasBackgroundColor;
@end
