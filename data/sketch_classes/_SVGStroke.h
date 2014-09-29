@interface _SVGStroke : SVGElement
{
SVGGradient *_gradient;	// 8 = 0x8
NSSet *_usedBy;	// 16 = 0x10
SVGColor *_color;	// 24 = 0x18
NSArray *_dashes;	// 32 = 0x20
double _width;	// 40 = 0x28
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSArray *dashes; // @synthesize dashes=_dashes;
@property(retain, nonatomic) SVGColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;
@property(retain, nonatomic) SVGGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
- (void)addUsedByObject:(id)arg1;
- (void)primitiveSetGradient:(id)arg1;
@end
