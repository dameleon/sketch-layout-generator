@interface _SVGEllipseShape : SVGBasicShape
{
double _cx;	// 8 = 0x8
double _cy;	// 16 = 0x10
double _rx;	// 24 = 0x18
double _ry;	// 32 = 0x20
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double ry; // @synthesize ry=_ry;
@property(nonatomic) double rx; // @synthesize rx=_rx;
@property(nonatomic) double cy; // @synthesize cy=_cy;
@property(nonatomic) double cx; // @synthesize cx=_cx;
@end
