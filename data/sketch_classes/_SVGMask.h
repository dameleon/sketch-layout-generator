@interface _SVGMask : SVGGroupElement
{
NSSet *_masking;	// 8 = 0x8
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSSet *masking; // @synthesize masking=_masking;
- (void).cxx_destruct;
- (void)primitiveRemoveMaskingObject:(id)arg1;
- (void)primitiveAddMaskingObject:(id)arg1;
- (void)removeMaskingObject:(id)arg1;
- (void)addMaskingObject:(id)arg1;
@end
