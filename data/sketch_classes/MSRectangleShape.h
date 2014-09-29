@interface MSRectangleShape : _MSRectangleShape
{
}
+ (double)lastUsedFixedRadius;
- (void)multiplyBy:(double)arg1;
- (BOOL)shouldDrawLayerSelection;
- (void)resetPointsBasedOnUserInteraction;
- (void)resetPointsIfNecessary;
- (void)removePathsAndReset;
- (BOOL)shouldResetPointsOnResize;
- (void)resetPathsToRoundedRect;
- (void)resetPathsToRect;
- (void)resetPoints;
- (void)rectSizeDidChange:(id)arg1;
- (id)defaultName;
- (id)bezierPathForCursorPreview;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
@end
