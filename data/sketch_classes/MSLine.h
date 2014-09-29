@interface MSLine : NSObject
{
struct CGRect _area;	// 8 = 0x8
BOOL _areaIsInitial;	// 40 = 0x28
long long _type;	// 48 = 0x30
double _position;	// 56 = 0x38
}
+ (id)verticalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)horizontalLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
+ (id)verticalLineWithPosition:(double)arg1;
+ (id)horizontalLineWithPosition:(double)arg1;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)GKLine;
- (id)description;
- (struct CGRect)dirtyAbsoluteRectInFrame:(struct CGRect)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)drawWithZoomValue:(double)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)initVerticalLineWithPosition:(double)arg1;
- (id)initHorizontalLineWithPosition:(double)arg1;
@end
