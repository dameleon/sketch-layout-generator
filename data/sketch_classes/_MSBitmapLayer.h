@interface _MSBitmapLayer : MSStyledLayer
{
MSImageData *_image;	// 56 = 0x38
NSObject *_imageToLoad;	// 64 = 0x40
struct CGRect _clippingMask;	// 72 = 0x48
struct CGRect _nineSliceCenterRect;	// 104 = 0x68
}
@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) NSObject *imageToLoad; // @synthesize imageToLoad=_imageToLoad;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
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
- (void)setPrimitiveNineSliceCenterRect:(struct CGRect)arg1;
- (struct CGRect)primitiveNineSliceCenterRect;
- (void)setPrimitiveImageToLoad:(id)arg1;
- (id)primitiveImageToLoad;
- (void)setPrimitiveImage:(id)arg1;
- (id)primitiveImage;
- (void)setPrimitiveClippingMask:(struct CGRect)arg1;
- (struct CGRect)primitiveClippingMask;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
