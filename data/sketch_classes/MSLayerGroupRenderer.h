@interface MSLayerGroupRenderer : MSBaseLayerRenderer
{
}
+ (void)drawGroupOutline:(id)arg1;
+ (id)drawableShadowForStyle:(id)arg1 atZoomValue:(double)arg2;
+ (void)beginTransparencyLayerForGroup:(id)arg1 context:(id)arg2;
+ (void)endMaskWithContext:(id)arg1;
+ (id)maskImageForShape:(id)arg1 context:(id)arg2 scale:(double)arg3;
+ (void)beginAlphaMask:(id)arg1 context:(id)arg2;
+ (void)beginMask:(id)arg1 context:(id)arg2;
+ (void)drawLayer:(id)arg1 context:(id)arg2 skipFills:(BOOL)arg3;
+ (void)renderSubLayersOfGroup:(id)arg1 context:(id)arg2;
+ (void)applyShadow:(id)arg1 toContext:(id)arg2;
+ (void)transformContext:(id)arg1 forLayer:(id)arg2;
+ (BOOL)shouldDrawLayer:(id)arg1 context:(id)arg2;
+ (void)doDrawLayer:(id)arg1 context:(id)arg2;
@end
