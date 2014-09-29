@interface MSStyledLayer : _MSStyledLayer <MSStyleDelegate>
{
BOOL ignoreStyleDidChangeNotifications;	// 56 = 0x38
}
- (void)setStyle:(id)arg1;
- (id)usedStyle;
- (id)layersSharingStyle:(id)arg1;
- (id)renderBitmapEffects:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (BOOL)calculateHasBlendedLayer;
- (void)multiplyBy:(double)arg1;
- (void)layerStyleDidChange;
- (BOOL)shouldDrawArtisticStrokeForPath:(id)arg1;
- (id)outlineStrokePath:(id)arg1;
- (void)changeColor:(id)arg1;
- (struct CGRect)dirtyRectForRect:(struct CGRect)arg1;
- (struct CGRect)calculateRectByAccountingForStyleSize:(struct CGRect)arg1;
- (struct CGRect)baseRectByAccountingForStyleSize:(struct CGRect)arg1;
- (void)objectDidInit;
- (id)appendShadowAttributesToString:(id)arg1;
- (id)CSSAttributes;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (void)addGradientsToDocument:(id)arg1;
@end
