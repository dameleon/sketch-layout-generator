@interface MSStyleBorder : _MSStyleBorder
{
}
+ (id)defaultFillColor;
- (void)setThickness:(double)arg1;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (long long)patternFillType;
- (double)noiseIntensity;
- (id)defaultName;
- (void)initEmptyObject;
- (id)CSSAttributeString;
- (void)drawGradientBorder:(id)arg1 originalPath:(id)arg2 isArtistic:(BOOL)arg3 frame:(struct CGRect)arg4 context:(id)arg5;
- (BOOL)canDrawInnerStrokeForInnerPath:(id)arg1;
- (BOOL)canDrawInnerStrokeForPath:(id)arg1;
- (void)drawBorder:(id)arg1 advancedOptions:(id)arg2 context:(id)arg3;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
@end
