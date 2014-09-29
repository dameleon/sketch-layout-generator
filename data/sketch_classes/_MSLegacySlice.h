@interface _MSLegacySlice : MSRect
{
BOOL _includeRetinaVersion;	// 32 = 0x20
BOOL _shouldTrim;	// 33 = 0x21
NSMutableArray *_includedLayers;	// 40 = 0x28
NSString *_name;	// 48 = 0x30
unsigned long long _options;	// 56 = 0x38
}
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableArray *includedLayers; // @synthesize includedLayers=_includedLayers;
@property(nonatomic) BOOL includeRetinaVersion; // @synthesize includeRetinaVersion=_includeRetinaVersion;
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
- (void)setPrimitiveShouldTrim:(BOOL)arg1;
- (BOOL)primitiveShouldTrim;
- (void)setPrimitiveOptions:(unsigned long long)arg1;
- (unsigned long long)primitiveOptions;
- (void)setPrimitiveName:(id)arg1;
- (id)primitiveName;
- (void)setPrimitiveIncludedLayers:(id)arg1;
- (id)primitiveIncludedLayers;
- (void)setPrimitiveIncludeRetinaVersion:(BOOL)arg1;
- (BOOL)primitiveIncludeRetinaVersion;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
