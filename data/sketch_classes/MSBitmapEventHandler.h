@interface MSBitmapEventHandler : MSPointsEventHandler
{
MSPointArray *points;	// 160 = 0xa0
}
@property(retain, nonatomic) MSPointArray *points; // @synthesize points;
- (void).cxx_destruct;
- (BOOL)shouldDrawLayerSelection;
- (id)imageName;
- (void)drawDotAtPoint:(struct CGPoint)arg1 index:(long long)arg2 selected:(BOOL)arg3;
- (void)drawHandleLines;
- (BOOL)useSnaps;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (struct CGRect)clippingMask;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
@end
