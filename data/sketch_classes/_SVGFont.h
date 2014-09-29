@interface _SVGFont : SVGElement
{
NSSet *_usedBy;	// 8 = 0x8
NSString *_family;	// 16 = 0x10
double _size;	// 24 = 0x18
NSString *_style;	// 32 = 0x20
NSString *_variant;	// 40 = 0x28
double _weight;	// 48 = 0x30
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(retain, nonatomic) NSString *variant; // @synthesize variant=_variant;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *family; // @synthesize family=_family;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
- (void)addUsedByObject:(id)arg1;
@end
