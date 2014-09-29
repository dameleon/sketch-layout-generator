@interface MSBackgroundBlurRenderer : NSObject
{
MSRenderingContext *_context;	// 8 = 0x8
MSShapeGroup *_layer;	// 16 = 0x10
BCBezierPath *_path;	// 24 = 0x18
}
+ (void)blurBackgroundBehindLayer:(id)arg1 path:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) BCBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) MSShapeGroup *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) MSRenderingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)blur;
- (id)clampImage:(id)arg1;
- (void)renderCanvasImageInRect:(struct CGRect)arg1;
- (id)canvasImageWithContext:(id)arg1;
- (struct CGRect)absoluteRectForLayer:(id)arg1 context:(id)arg2;
- (void)clearBackgroundBehindBlur;
- (void)blurBackgroundWithContext:(id)arg1;
@end
