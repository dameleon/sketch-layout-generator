@interface GKPoint : NSObject <NSCopying>
{
struct CGPoint point;	// 8 = 0x8
}
+ (id)pointWithX:(double)arg1 y:(double)arg2;
+ (id)pointWithPoint:(struct CGPoint)arg1;
@property struct CGPoint point; // @synthesize point;
- (id)description;
- (void)setPosition:(double)arg1 forAxis:(id)arg2;
- (double)positionForAxis:(id)arg1;
- (id)snapToLines:(id)arg1 withMargin:(double)arg2;
- (id)snapToPoint:(id)arg1 withMargin:(double)arg2;
- (id)snapToRect:(id)arg1 withMargin:(double)arg2;
- (id)offsetToPoint:(id)arg1;
- (double)distanceToPoint:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property double y; // @dynamic y;
@property double x; // @dynamic x;
- (id)initWithPoint:(struct CGPoint)arg1;
@end
