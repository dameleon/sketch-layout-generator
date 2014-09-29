@interface _MSArtisticStrokeHandle : MSModelObject
{
double _leftHandle;	// 8 = 0x8
double _positionOnPath;	// 16 = 0x10
double _rightHandle;	// 24 = 0x18
}
@property(nonatomic) double rightHandle; // @synthesize rightHandle=_rightHandle;
@property(nonatomic) double positionOnPath; // @synthesize positionOnPath=_positionOnPath;
@property(nonatomic) double leftHandle; // @synthesize leftHandle=_leftHandle;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveRightHandle:(double)arg1;
- (double)primitiveRightHandle;
- (void)setPrimitivePositionOnPath:(double)arg1;
- (double)primitivePositionOnPath;
- (void)setPrimitiveLeftHandle:(double)arg1;
- (double)primitiveLeftHandle;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
