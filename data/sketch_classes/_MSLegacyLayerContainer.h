@interface _MSLegacyLayerContainer : MSModelObject
{
long long _identifier;	// 8 = 0x8
MSArray *_layers;	// 16 = 0x10
}
@property(retain, nonatomic) MSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveLayers:(id)arg1;
- (id)primitiveLayers;
- (void)setPrimitiveIdentifier:(long long)arg1;
- (long long)primitiveIdentifier;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
