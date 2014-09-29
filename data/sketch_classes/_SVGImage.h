@interface _SVGImage : SVGDrawableElement
{
NSImage *_image;	// 8 = 0x8
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
@end
