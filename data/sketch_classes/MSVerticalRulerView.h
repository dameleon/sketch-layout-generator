@interface MSVerticalRulerView : MSRulerView
{
}
- (id)rulerAxis;
- (id)snapLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (id)occupiedRegionForRect:(struct CGRect)arg1 withOffset:(long long)arg2 zoom:(double)arg3;
- (id)bezierPathForLineAtPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (void)refreshGuideInDrawViewAtIndex:(long long)arg1;
- (void)setResizeCursor;
- (double)relevantAxisForPoint:(struct CGPoint)arg1;
- (long long)rulerHeight;
- (long long)rulerLength;
- (BOOL)isFlipped;
- (void)drawBackground;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2 drawBackground:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayOverlayHelp:(id)arg1;
@end
