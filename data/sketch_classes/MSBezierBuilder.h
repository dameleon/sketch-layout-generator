@interface MSBezierBuilder : NSObject
{
struct CGRect rect;	// 8 = 0x8
NSArray *points;	// 40 = 0x28
BOOL pathShouldClose;	// 48 = 0x30
}
+ (id)bezierPathFromPoint:(id)arg1 toPoint:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)bezierPathWithPoints:(id)arg1 inRect:(struct CGRect)arg2 shouldClose:(BOOL)arg3;
+ (void)setCornerRadiusScale:(double)arg1;
@property(nonatomic) BOOL pathShouldClose; // @synthesize pathShouldClose;
@property(retain, nonatomic) NSArray *points; // @synthesize points;
@property(nonatomic) struct CGRect rect; // @synthesize rect;
- (void).cxx_destruct;
- (void)extendPath:(id)arg1 toPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
- (void)appendCurveFromPoint:(id)arg1 toPoint:(id)arg2 toBezierPath:(id)arg3;
- (id)bezierPathFromCurvePoint:(id)arg1 toPoint:(id)arg2;
- (id)_bezierPath;
- (id)bezierPath;
- (BOOL)isStraightLine;
@end
