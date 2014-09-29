@interface _SVGFill : SVGElement
{
SVGGradient *_gradient;	// 8 = 0x8
NSSet *_usedBy;	// 16 = 0x10
SVGColor *_color;	// 24 = 0x18
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
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
