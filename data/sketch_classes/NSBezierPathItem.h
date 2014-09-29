@interface NSBezierPathItem : NSObject
{
struct CGPoint points[3];	// 8 = 0x8
unsigned long long _type;	// 56 = 0x38
}
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)bezierPathStartingAtPoint:(struct CGPoint)arg1;
- (struct CGPoint *)points;
- (void)setPoints:(struct CGPoint *)arg1;
@end
