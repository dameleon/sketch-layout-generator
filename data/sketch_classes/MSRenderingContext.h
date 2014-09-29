@interface MSRenderingContext : DKContext
{
BOOL _isDrawingReflection;	// 8 = 0x8
BOOL _isExporting;	// 9 = 0x9
BOOL _drawGroupOutline;	// 10 = 0xa
BOOL _drawShapeOutline;	// 11 = 0xb
BOOL _disableSubpixelAliasing;	// 12 = 0xc
BOOL _includeArtboardBackground;	// 13 = 0xd
BOOL _isDrawingMask;	// 14 = 0xe
unsigned long long _disableDrawingFillsCounter;	// 16 = 0x10
unsigned long long _disableClippingFillsCounter;	// 24 = 0x18
NSMutableArray *_parentStack;	// 32 = 0x20
}
+ (unsigned long long)defaultCGContextCreateFlags;
@property(retain, nonatomic) NSMutableArray *parentStack; // @synthesize parentStack=_parentStack;
@property(nonatomic) BOOL isDrawingMask; // @synthesize isDrawingMask=_isDrawingMask;
@property(nonatomic) unsigned long long disableClippingFillsCounter; // @synthesize disableClippingFillsCounter=_disableClippingFillsCounter;
@property(nonatomic) unsigned long long disableDrawingFillsCounter; // @synthesize disableDrawingFillsCounter=_disableDrawingFillsCounter;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(nonatomic) BOOL disableSubpixelAliasing; // @synthesize disableSubpixelAliasing=_disableSubpixelAliasing;
@property(nonatomic) BOOL drawShapeOutline; // @synthesize drawShapeOutline=_drawShapeOutline;
@property(nonatomic) BOOL drawGroupOutline; // @synthesize drawGroupOutline=_drawGroupOutline;
@property(nonatomic) BOOL isExporting; // @synthesize isExporting=_isExporting;
@property(nonatomic) BOOL isDrawingReflection; // @synthesize isDrawingReflection=_isDrawingReflection;
- (void).cxx_destruct;
- (BOOL)shouldClipFills;
- (void)performBlockWithoutClippingFills:(CDUnknownBlockType)arg1;
- (BOOL)shouldDrawFills;
- (void)performBlockWithoutDrawingFills:(CDUnknownBlockType)arg1;
- (unsigned long long)disableSubpixelAntialiasingFlags;
- (id)parentLayers;
- (id)parentLayerAtLevel:(unsigned long long)arg1;
- (id)parentLayer;
- (void)popParentLayer;
- (void)pushParentLayer:(id)arg1;
- (id)contextKey;
- (id)initWithContextRef:(struct CGContext *)arg1 atZoomLevel:(double)arg2;
@end
