@interface _SVGDrawableElement : SVGElement
{
BOOL _clips;	// 8 = 0x8
BOOL _hidden;	// 9 = 0x9
SVGClipPath *_clip;	// 16 = 0x10
SVGFill *_fill;	// 24 = 0x18
SVGFont *_font;	// 32 = 0x20
SVGMask *_mask;	// 40 = 0x28
SVGStroke *_stroke;	// 48 = 0x30
double _opacity;	// 56 = 0x38
NSAffineTransform *_transform;	// 64 = 0x40
struct CGRect _rect;	// 72 = 0x48
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL clips; // @synthesize clips=_clips;
@property(retain, nonatomic) SVGStroke *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) SVGMask *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) SVGFont *font; // @synthesize font=_font;
@property(retain, nonatomic) SVGFill *fill; // @synthesize fill=_fill;
@property(retain, nonatomic) SVGClipPath *clip; // @synthesize clip=_clip;
- (void).cxx_destruct;
- (void)primitiveSetStroke:(id)arg1;
- (void)primitiveSetMask:(id)arg1;
- (void)primitiveSetFont:(id)arg1;
- (void)primitiveSetFill:(id)arg1;
- (void)primitiveSetClip:(id)arg1;
@end
