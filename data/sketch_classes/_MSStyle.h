@interface _MSStyle : MSModelObject
{
MSStyleBlur *_blur;	// 8 = 0x8
MSStyleBorderOptions *_borderOptions;	// 16 = 0x10
MSBorderStyleCollection *_borders;	// 24 = 0x18
MSStyleColorControls *_colorControls;	// 32 = 0x20
MSGraphicsContextSettings *_contextSettings;	// 40 = 0x28
MSFillStyleCollection *_fills;	// 48 = 0x30
MSInnerShadowStyleCollection *_innerShadows;	// 56 = 0x38
long long _miterLimit;	// 64 = 0x40
MSStyleReflection *_reflection;	// 72 = 0x48
MSShadowStyleCollection *_shadows;	// 80 = 0x50
NSString *_sharedObjectID;	// 88 = 0x58
MSTextStyle *_textStyle;	// 96 = 0x60
}
@property(retain, nonatomic) MSTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSString *sharedObjectID; // @synthesize sharedObjectID=_sharedObjectID;
@property(retain, nonatomic) MSShadowStyleCollection *shadows; // @synthesize shadows=_shadows;
@property(retain, nonatomic) MSStyleReflection *reflection; // @synthesize reflection=_reflection;
@property(nonatomic) long long miterLimit; // @synthesize miterLimit=_miterLimit;
@property(retain, nonatomic) MSInnerShadowStyleCollection *innerShadows; // @synthesize innerShadows=_innerShadows;
@property(retain, nonatomic) MSFillStyleCollection *fills; // @synthesize fills=_fills;
@property(retain, nonatomic) MSGraphicsContextSettings *contextSettings; // @synthesize contextSettings=_contextSettings;
@property(retain, nonatomic) MSStyleColorControls *colorControls; // @synthesize colorControls=_colorControls;
@property(retain, nonatomic) MSBorderStyleCollection *borders; // @synthesize borders=_borders;
@property(retain, nonatomic) MSStyleBorderOptions *borderOptions; // @synthesize borderOptions=_borderOptions;
@property(retain, nonatomic) MSStyleBlur *blur; // @synthesize blur=_blur;
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
- (void)setPrimitiveTextStyle:(id)arg1;
- (id)primitiveTextStyle;
- (void)setPrimitiveSharedObjectID:(id)arg1;
- (id)primitiveSharedObjectID;
- (void)setPrimitiveShadows:(id)arg1;
- (id)primitiveShadows;
- (void)setPrimitiveReflection:(id)arg1;
- (id)primitiveReflection;
- (void)setPrimitiveMiterLimit:(long long)arg1;
- (long long)primitiveMiterLimit;
- (void)setPrimitiveInnerShadows:(id)arg1;
- (id)primitiveInnerShadows;
- (void)setPrimitiveFills:(id)arg1;
- (id)primitiveFills;
- (void)setPrimitiveContextSettings:(id)arg1;
- (id)primitiveContextSettings;
- (void)setPrimitiveColorControls:(id)arg1;
- (id)primitiveColorControls;
- (void)setPrimitiveBorders:(id)arg1;
- (id)primitiveBorders;
- (void)setPrimitiveBorderOptions:(id)arg1;
- (id)primitiveBorderOptions;
- (void)setPrimitiveBlur:(id)arg1;
- (id)primitiveBlur;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
