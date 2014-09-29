@interface MSShapePathLayer : _MSShapePathLayer <NSCoding>
{
id decodedPaths;	// 56 = 0x38
BOOL isEditing;	// 64 = 0x40
}
+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithShapePath:(id)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) BOOL isEditing; // @synthesize isEditing;
- (void).cxx_destruct;
- (BOOL)calculateHasBlendedLayer;
- (void)prepareObjectCopy:(id)arg1;
- (BOOL)shouldForceRendering;
- (id)pathStyle;
- (void)setEndDecorationType:(unsigned long long)arg1;
- (void)setStartDecorationType:(unsigned long long)arg1;
- (BOOL)shouldOwnStyle;
- (id)allCurvePoints;
- (id)bezierPathWithTransforms;
- (void)multiplyBy:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)removeFromParent;
- (void)invalidateCache;
- (void)rectSizeDidChange:(id)arg1;
- (void)layerSizeDidChangeFromCorner:(long long)arg1;
- (BOOL)isPartOfClippingMask;
- (void)hideSelectionTemporarily;
@property(nonatomic) BOOL isClosed; // @dynamic isClosed;
- (void)upgradeShapes;
- (void)layerDidChange;
- (id)embedInShapeGroup;
- (void)setBooleanOperation:(long long)arg1;
- (BOOL)isNearlyEmpty;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1;
- (struct CGPoint)absolutePoint:(struct CGPoint)arg1;
- (void)simplify;
- (struct CGPoint)pointCenteredAfterPointIndex:(long long)arg1;
@property(retain, nonatomic) BCBezierPath *bezierPath; // @dynamic bezierPath;
- (BOOL)handleDoubleClick;
- (id)bezierPathInRect:(struct CGRect)arg1;
- (void)adjustFrameAfterEditIntegral:(BOOL)arg1;
- (void)adjustFrameAfterEdit;
- (void)reversePath;
- (BOOL)shouldDrawSelection;
- (void)applyTransformation:(id)arg1;
- (void)flipHorizontal;
- (void)flipVertical;
- (BOOL)editable;
- (void)resetPoints;
- (void)removePathsAndReset;
- (void)closeLastPath:(BOOL)arg1;
- (id)handlerName;
- (id)defaultName;
- (void)initEmptyObject;
- (id)usedStyle;
- (id)bezierPathForHover;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (struct CGRect)boundsForCursorPreview;
- (id)bezierPathForCursorPreview;
- (id)insertionCursor;
- (BOOL)isLayerExportable;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (id)relativeRectWithExporter:(id)arg1;
- (id)addPolygonContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addShapeContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
@end
