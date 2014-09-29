@interface _MSExportOptions : MSModelObject
{
BOOL _shouldTrim;	// 8 = 0x8
MSArray *_includedLayerIds;	// 16 = 0x10
unsigned long long _layerOptions;	// 24 = 0x18
MSArray *_sizes;	// 32 = 0x20
}
@property(retain, nonatomic) MSArray *sizes; // @synthesize sizes=_sizes;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long layerOptions; // @synthesize layerOptions=_layerOptions;
@property(retain, nonatomic) MSArray *includedLayerIds; // @synthesize includedLayerIds=_includedLayerIds;
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
- (void)setPrimitiveSizes:(id)arg1;
- (id)primitiveSizes;
- (void)setPrimitiveShouldTrim:(BOOL)arg1;
- (BOOL)primitiveShouldTrim;
- (void)setPrimitiveLayerOptions:(unsigned long long)arg1;
- (unsigned long long)primitiveLayerOptions;
- (void)setPrimitiveIncludedLayerIds:(id)arg1;
- (id)primitiveIncludedLayerIds;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
