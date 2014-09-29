@interface DKContextTransform : NSObject
{
long long _type;	// 8 = 0x8
double _rotation;	// 16 = 0x10
struct CGPoint _translation;	// 24 = 0x18
}
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (void)invert;
@end
