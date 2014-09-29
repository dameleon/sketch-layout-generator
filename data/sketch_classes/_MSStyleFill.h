@interface _MSStyleFill : MSStyleBasicFill
{
long long _noiseIndex;	// 8 = 0x8
double _noiseIntensity;	// 16 = 0x10
long long _patternFillType;	// 24 = 0x18
NSImage *_patternImage;	// 32 = 0x20
double _patternTileScale;	// 40 = 0x28
}
@property(nonatomic) double patternTileScale; // @synthesize patternTileScale=_patternTileScale;
@property(retain, nonatomic) NSImage *patternImage; // @synthesize patternImage=_patternImage;
@property(nonatomic) long long patternFillType; // @synthesize patternFillType=_patternFillType;
@property(nonatomic) double noiseIntensity; // @synthesize noiseIntensity=_noiseIntensity;
@property(nonatomic) long long noiseIndex; // @synthesize noiseIndex=_noiseIndex;
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
- (void)setPrimitivePatternTileScale:(double)arg1;
- (double)primitivePatternTileScale;
- (void)setPrimitivePatternImage:(id)arg1;
- (id)primitivePatternImage;
- (void)setPrimitivePatternFillType:(long long)arg1;
- (long long)primitivePatternFillType;
- (void)setPrimitiveNoiseIntensity:(double)arg1;
- (double)primitiveNoiseIntensity;
- (void)setPrimitiveNoiseIndex:(long long)arg1;
- (long long)primitiveNoiseIndex;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
