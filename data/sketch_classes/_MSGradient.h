@interface _MSGradient : MSModelObject
{
BOOL _shouldSmoothenOpacity;	// 8 = 0x8
double _elipseLength;	// 16 = 0x10
long long _gradientType;	// 24 = 0x18
MSPointArray *_points;	// 32 = 0x20
MSArray *_stops;	// 40 = 0x28
struct CGPoint _from;	// 48 = 0x30
struct CGPoint _to;	// 64 = 0x40
}
@property(nonatomic) struct CGPoint to; // @synthesize to=_to;
@property(retain, nonatomic) MSArray *stops; // @synthesize stops=_stops;
@property(nonatomic) BOOL shouldSmoothenOpacity; // @synthesize shouldSmoothenOpacity=_shouldSmoothenOpacity;
@property(retain, nonatomic) MSPointArray *points; // @synthesize points=_points;
@property(nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;
@property(nonatomic) struct CGPoint from; // @synthesize from=_from;
@property(nonatomic) double elipseLength; // @synthesize elipseLength=_elipseLength;
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
- (void)setPrimitiveTo:(struct CGPoint)arg1;
- (struct CGPoint)primitiveTo;
- (void)setPrimitiveStops:(id)arg1;
- (id)primitiveStops;
- (void)setPrimitiveShouldSmoothenOpacity:(BOOL)arg1;
- (BOOL)primitiveShouldSmoothenOpacity;
- (void)setPrimitivePoints:(id)arg1;
- (id)primitivePoints;
- (void)setPrimitiveGradientType:(long long)arg1;
- (long long)primitiveGradientType;
- (void)setPrimitiveFrom:(struct CGPoint)arg1;
- (struct CGPoint)primitiveFrom;
- (void)setPrimitiveElipseLength:(double)arg1;
- (double)primitiveElipseLength;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
