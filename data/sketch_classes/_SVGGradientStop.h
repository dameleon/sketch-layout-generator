@interface _SVGGradientStop : SVGElement
{
SVGColor *_color;	// 8 = 0x8
double _position;	// 16 = 0x10
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
@end
