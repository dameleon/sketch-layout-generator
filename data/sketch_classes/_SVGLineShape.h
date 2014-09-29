@interface _SVGLineShape : SVGBasicShape
{
double _x1;	// 8 = 0x8
double _x2;	// 16 = 0x10
double _y1;	// 24 = 0x18
double _y2;	// 32 = 0x20
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double y2; // @synthesize y2=_y2;
@property(nonatomic) double y1; // @synthesize y1=_y1;
@property(nonatomic) double x2; // @synthesize x2=_x2;
@property(nonatomic) double x1; // @synthesize x1=_x1;
@end
