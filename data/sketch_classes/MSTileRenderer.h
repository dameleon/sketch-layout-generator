@interface MSTileRenderer : NSObject <DKContextDelegate>
{
BOOL _shouldDrawPixelated;	// 8 = 0x8
BOOL _disableSubpixelAntialiasing;	// 9 = 0x9
BOOL _drawDottedDirtyRect;	// 10 = 0xa
BOOL _drawGroupOutline;	// 11 = 0xb
BOOL _drawShapeOutline;	// 12 = 0xc
MSPage *_page;	// 16 = 0x10
double _zoomValue;	// 24 = 0x18
struct CGRect _tileRect;	// 32 = 0x20
struct CGRect _dirtyRect;	// 64 = 0x40
}
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect=_dirtyRect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) BOOL drawShapeOutline; // @synthesize drawShapeOutline=_drawShapeOutline;
@property(nonatomic) BOOL drawGroupOutline; // @synthesize drawGroupOutline=_drawGroupOutline;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL shouldDrawPixelated; // @synthesize shouldDrawPixelated=_shouldDrawPixelated;
@property(nonatomic) struct CGRect tileRect; // @synthesize tileRect=_tileRect;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)rendererShouldInterruptRendering;
- (BOOL)rendererNeedsToDrawRect:(struct CGRect)arg1;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (BOOL)rendererShouldForceDrawingLayer:(id)arg1;
- (void)prepareContext:(struct CGContext *)arg1;
- (id)contextWithCGContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
- (void)renderInContext:(struct CGContext *)arg1 colorSpace:(id)arg2;
@end
