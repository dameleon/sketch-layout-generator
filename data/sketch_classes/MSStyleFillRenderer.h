@interface MSStyleFillRenderer : MSBaseRenderer
{
BOOL _hasInnerStroke;	// 8 = 0x8
MSRenderingContext *_context;	// 16 = 0x10
MSStyleFill *_fill;	// 24 = 0x18
BCBezierPath *_path;	// 32 = 0x20
long long _fillIndex;	// 40 = 0x28
double _zoomValue;	// 48 = 0x30
struct CGRect _rect;	// 56 = 0x38
}
+ (void)drawFill:(id)arg1 forPath:(id)arg2 atIndex:(long long)arg3 inRect:(struct CGRect)arg4 hasInnerStroke:(BOOL)arg5 context:(id)arg6;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) BOOL hasInnerStroke; // @synthesize hasInnerStroke=_hasInnerStroke;
@property(nonatomic) long long fillIndex; // @synthesize fillIndex=_fillIndex;
@property(retain, nonatomic) BCBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) MSStyleFill *fill; // @synthesize fill=_fill;
@property(retain, nonatomic) MSRenderingContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)drawPatternStretch;
- (void)prepareAlphaForContext:(struct CGContext *)arg1;
- (void)drawCGImageTile:(struct CGImage *)arg1;
- (struct CGImage *)CGImageForPatternTile;
- (void)drawPatternTile;
- (void)drawNoise;
- (void)drawPatternFill;
- (void)drawGradientFill;
- (void)drawColorFill;
- (long long)graphicsSettings;
- (void)render;
@end
