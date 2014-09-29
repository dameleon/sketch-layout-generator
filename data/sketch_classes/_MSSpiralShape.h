@interface _MSSpiralShape : MSCustomShapeLayer
{
double _compactness;	// 72 = 0x48
double _size;	// 80 = 0x50
double _start;	// 88 = 0x58
}
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double compactness; // @synthesize compactness=_compactness;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveStart:(double)arg1;
- (double)primitiveStart;
- (void)setPrimitiveSize:(double)arg1;
- (double)primitiveSize;
- (void)setPrimitiveCompactness:(double)arg1;
- (double)primitiveCompactness;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
