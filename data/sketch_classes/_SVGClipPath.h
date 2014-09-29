@interface _SVGClipPath : SVGGroupElement
{
NSSet *_clipping;	// 8 = 0x8
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *clipping; // @synthesize clipping=_clipping;
- (void).cxx_destruct;
- (void)primitiveRemoveClippingObject:(id)arg1;
- (void)primitiveAddClippingObject:(id)arg1;
- (void)removeClippingObject:(id)arg1;
- (void)addClippingObject:(id)arg1;
@end
