@interface _MSSharedObject : MSModelObject
{
MSArray *_instances;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
MSModelObject *_value;	// 24 = 0x18
}
@property(retain, nonatomic) MSModelObject *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MSArray *instances; // @synthesize instances=_instances;
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
- (void)setPrimitiveValue:(id)arg1;
- (id)primitiveValue;
- (void)setPrimitiveName:(id)arg1;
- (id)primitiveName;
- (void)setPrimitiveInstances:(id)arg1;
- (id)primitiveInstances;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
