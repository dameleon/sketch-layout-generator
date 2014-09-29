@interface _SVGCircleShape : SVGBasicShape
{
double _cx;	// 8 = 0x8
double _cy;	// 16 = 0x10
double _r;	// 24 = 0x18
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double r; // @synthesize r=_r;
@property(nonatomic) double cy; // @synthesize cy=_cy;
@property(nonatomic) double cx; // @synthesize cx=_cx;
@end
