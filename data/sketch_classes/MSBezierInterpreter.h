@interface MSBezierInterpreter : NSObject
{
NSBezierPath *bezierPath;	// 8 = 0x8
struct CGRect rect;	// 16 = 0x10
BOOL pathIsClosed;	// 48 = 0x30
}
+ (id)pointsFromBezierPath:(id)arg1 inRect:(struct CGRect)arg2;
@property(nonatomic) BOOL pathIsClosed; // @synthesize pathIsClosed;
@property(nonatomic) struct CGRect rect; // @synthesize rect;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath;
- (void).cxx_destruct;
- (id)points;
@end
