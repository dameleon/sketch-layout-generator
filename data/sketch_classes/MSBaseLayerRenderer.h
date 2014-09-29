@interface MSBaseLayerRenderer : NSObject
{
}
+ (void)drawCachedImage:(id)arg1 layer:(id)arg2 context:(id)arg3;
+ (void)doDrawLayer:(id)arg1 context:(id)arg2;
+ (void)didDrawLayer:(id)arg1 context:(id)arg2;
+ (void)willDrawLayer:(id)arg1 context:(id)arg2;
+ (BOOL)shouldDrawLayer:(id)arg1 context:(id)arg2;
+ (void)_drawLayer:(id)arg1 context:(id)arg2;
+ (Class)rendererForLayer:(id)arg1;
+ (void)drawLayer:(id)arg1 context:(id)arg2;
+ (void)forceRendering:(CDUnknownBlockType)arg1;
@end
