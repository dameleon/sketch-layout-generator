@interface _SVGRectangleShape : SVGBasicShape
{
double _cornerRadius;	// 8 = 0x8
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@end
