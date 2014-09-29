@interface MSStylePathRenderer : MSStyleRenderer
{
}
+ (void)drawPath:(id)arg1 forStyle:(id)arg2 inRect:(struct CGRect)arg3 fallbackColor:(id)arg4 context:(id)arg5;
- (long long)shadowStrokeType;
- (unsigned long long)shadowDrawingType;
- (void)drawInnerShadow;
- (BOOL)shadowFillShouldClip;
- (void)drawShadows;
- (void)clipFillsInBlock:(CDUnknownBlockType)arg1;
- (void)drawFillWithFallbackColor:(id)arg1;
- (void)renderWithFallbackColor:(id)arg1;
@end
