@interface MSStandardRendererDelegate : NSObject <MSRenderingContextDelegate>
{
}
+ (id)sharedController;
- (BOOL)rendererShouldInterruptRendering;
- (BOOL)rendererNeedsToDrawRect:(struct CGRect)arg1;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)rendererShouldForceDrawingLayer:(id)arg1;
@end
