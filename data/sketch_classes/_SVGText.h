@interface _SVGText : SVGDrawableElement
{
BOOL _adjustSpacingAndGlyphs;	// 8 = 0x8
short _anchor;	// 10 = 0xa
double _dx;	// 16 = 0x10
double _dy;	// 24 = 0x18
double _length;	// 32 = 0x20
double _rotate;	// 40 = 0x28
NSString *_text;	// 48 = 0x30
double _x;	// 56 = 0x38
double _y;	// 64 = 0x40
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double dy; // @synthesize dy=_dy;
@property(nonatomic) double dx; // @synthesize dx=_dx;
@property(nonatomic) short anchor; // @synthesize anchor=_anchor;
@property(nonatomic) BOOL adjustSpacingAndGlyphs; // @synthesize adjustSpacingAndGlyphs=_adjustSpacingAndGlyphs;
- (void).cxx_destruct;
@end
