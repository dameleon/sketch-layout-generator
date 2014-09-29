@interface _MSColor : MSModelObject
{
double _alpha;	// 8 = 0x8
double _blue;	// 16 = 0x10
double _green;	// 24 = 0x18
double _red;	// 32 = 0x20
}
@property(nonatomic) double red; // @synthesize red=_red;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveRed:(double)arg1;
- (double)primitiveRed;
- (void)setPrimitiveGreen:(double)arg1;
- (double)primitiveGreen;
- (void)setPrimitiveBlue:(double)arg1;
- (double)primitiveBlue;
- (void)setPrimitiveAlpha:(double)arg1;
- (double)primitiveAlpha;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
