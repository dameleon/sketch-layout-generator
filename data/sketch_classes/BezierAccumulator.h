@interface BezierAccumulator : CHSingletonObject
{
NSBezierPath *accumulatedPath;	// 8 = 0x8
}
@property(retain, nonatomic) NSBezierPath *accumulatedPath; // @synthesize accumulatedPath;
- (void).cxx_destruct;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)setFirstPoint:(struct CGPoint)arg1;
- (void)reset;
- (id)init;
@end
