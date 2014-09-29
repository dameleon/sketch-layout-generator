@interface _MSTextLayer : MSStyledLayer
{
BOOL _automaticallyDrawOnUnderlyingPath;	// 56 = 0x38
BOOL _dontSynchroniseWithSymbol;	// 57 = 0x39
NSTextStorage *_storage;	// 64 = 0x40
long long _textBehaviour;	// 72 = 0x48
}
@property(nonatomic) long long textBehaviour; // @synthesize textBehaviour=_textBehaviour;
@property(retain, nonatomic) NSTextStorage *storage; // @synthesize storage=_storage;
@property(nonatomic) BOOL dontSynchroniseWithSymbol; // @synthesize dontSynchroniseWithSymbol=_dontSynchroniseWithSymbol;
@property(nonatomic) BOOL automaticallyDrawOnUnderlyingPath; // @synthesize automaticallyDrawOnUnderlyingPath=_automaticallyDrawOnUnderlyingPath;
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
- (void)setPrimitiveTextBehaviour:(long long)arg1;
- (long long)primitiveTextBehaviour;
- (void)setPrimitiveStorage:(id)arg1;
- (id)primitiveStorage;
- (void)setPrimitiveDontSynchroniseWithSymbol:(BOOL)arg1;
- (BOOL)primitiveDontSynchroniseWithSymbol;
- (void)setPrimitiveAutomaticallyDrawOnUnderlyingPath:(BOOL)arg1;
- (BOOL)primitiveAutomaticallyDrawOnUnderlyingPath;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
