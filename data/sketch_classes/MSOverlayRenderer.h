@interface MSOverlayRenderer : NSObject
{
MSPage *_page;	// 8 = 0x8
double _zoomValue;	// 16 = 0x10
MSEventHandlerManager *_eventManager;	// 24 = 0x18
struct CGRect _rect;	// 32 = 0x20
}
+ (void)renderPage:(id)arg1 atZoom:(double)arg2 inRect:(struct CGRect)arg3 handlerManager:(id)arg4;
+ (void)skipRenderingSelections:(BOOL)arg1;
@property(retain, nonatomic) MSEventHandlerManager *eventManager; // @synthesize eventManager=_eventManager;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGPoint)scrollOrigin;
- (void)drawZoomTool;
- (struct CGRect)scaledArtboardRect:(id)arg1;
- (void)drawArtboardTitles;
- (id)artboardsVisibleInTileRect;
- (void)drawArtboardShadowForRect:(struct CGRect)arg1 image:(id)arg2;
- (void)drawArtboardOutline;
- (BOOL)isLayerVisible:(id)arg1;
- (void)drawSliceOutline:(id)arg1;
- (void)drawSlicesOutline;
- (BOOL)shouldDrawSlicesOutline;
- (void)drawPixelLines;
- (BOOL)shouldDrawPixelLines;
- (void)doDrawGridForRootLayer:(id)arg1;
- (void)drawGridForRootLayer:(id)arg1;
- (void)draw;
@end
