@interface MSBackgroundBlurRendererDelegate : NSObject <DKContextDelegate>
{
BOOL _stopDrawing;	// 8 = 0x8
double _zoomValue;	// 16 = 0x10
MSLayer *_untilLayer;	// 24 = 0x18
}
+ (id)rendererWithZoomValue:(double)arg1 untilLayer:(id)arg2;
@property(nonatomic) BOOL stopDrawing; // @synthesize stopDrawing=_stopDrawing;
@property(retain, nonatomic) MSLayer *untilLayer; // @synthesize untilLayer=_untilLayer;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (void).cxx_destruct;
- (BOOL)rendererNeedsToDrawRect:(struct CGRect)arg1;
- (BOOL)rendererShouldInterruptRendering;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)rendererShouldForceDrawingLayer:(id)arg1;
@end
