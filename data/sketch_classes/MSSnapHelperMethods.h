@interface MSSnapHelperMethods : NSObject
{
}
+ (void)_drawBorderBarsForHeightOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawArrowsForHeightOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawLabelWithAmount:(long long)arg1 forHeightOfRect:(struct CGRect)arg2 zoom:(double)arg3;
+ (void)drawHeightOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 borderbars:(BOOL)arg3 zoom:(double)arg4;
+ (void)_drawBorderBarsForWidthOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawArrowsForWidthOfRect:(struct CGRect)arg1 zoom:(double)arg2;
+ (void)_drawLabelWithAmount:(long long)arg1 forWidthOfRect:(struct CGRect)arg2 zoom:(double)arg3;
+ (void)drawWidthOfRectInRect:(struct CGRect)arg1 amount:(long long)arg2 borderbars:(BOOL)arg3 zoom:(double)arg4;
+ (void)drawHeightOfFrameBesidesFrame:(struct CGRect)arg1 zoom:(double)arg2 borderBars:(BOOL)arg3;
+ (void)drawWidthOfFrameAboveFrame:(struct CGRect)arg1 zoom:(double)arg2 borderBars:(BOOL)arg3;
+ (id)snapColor;
@end
