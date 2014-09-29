@interface MSTile : MSBaseRenderTile
{
BOOL _drawPixelated;	// 24 = 0x18
BOOL _disableSubpixelAntialiasing;	// 25 = 0x19
BOOL _drawDottedDirtyRect;	// 26 = 0x1a
BOOL _drawGroupOutline;	// 27 = 0x1b
BOOL _drawShapeOutline;	// 28 = 0x1c
BOOL _shouldHideOverlayControls;	// 29 = 0x1d
double _zoomValue;	// 32 = 0x20
MSEventHandlerManager *_handlerManager;	// 40 = 0x28
id <MSTileDelegate> _tileDelegate;	// 48 = 0x30
MSOverlayTile *_overlayTile;	// 56 = 0x38
MSContentTile *_contentTile;	// 64 = 0x40
NSThread *_thread;	// 72 = 0x48
MSPage *_pageForContent;	// 80 = 0x50
MSPage *_pageForOverlay;	// 88 = 0x58
NSColorSpace *_colorSpaceForContent;	// 96 = 0x60
NSArray *_artboardFrames;	// 104 = 0x68
struct CGPoint _distanceFromScrollOrigin;	// 112 = 0x70
}
@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) NSColorSpace *colorSpaceForContent; // @synthesize colorSpaceForContent=_colorSpaceForContent;
@property(retain, nonatomic) MSPage *pageForOverlay; // @synthesize pageForOverlay=_pageForOverlay;
@property(retain, nonatomic) MSPage *pageForContent; // @synthesize pageForContent=_pageForContent;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
@property(retain, nonatomic) MSOverlayTile *overlayTile; // @synthesize overlayTile=_overlayTile;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(nonatomic) __weak id <MSTileDelegate> tileDelegate; // @synthesize tileDelegate=_tileDelegate;
@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(nonatomic) BOOL drawShapeOutline; // @synthesize drawShapeOutline=_drawShapeOutline;
@property(nonatomic) BOOL drawGroupOutline; // @synthesize drawGroupOutline=_drawGroupOutline;
@property(nonatomic) BOOL drawDottedDirtyRect; // @synthesize drawDottedDirtyRect=_drawDottedDirtyRect;
@property(nonatomic) BOOL disableSubpixelAntialiasing; // @synthesize disableSubpixelAntialiasing=_disableSubpixelAntialiasing;
@property(nonatomic) BOOL drawPixelated; // @synthesize drawPixelated=_drawPixelated;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) struct CGPoint distanceFromScrollOrigin; // @synthesize distanceFromScrollOrigin=_distanceFromScrollOrigin;
- (void).cxx_destruct;
- (id)description;
- (void)moveToPosition:(struct CGPoint)arg1;
- (struct CGRect)rectForContentTile;
- (double)scaleForContentTile;
- (void)pixelGridDidChange;
- (void)drawPage:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawArtboardBackgroundsInContext:(struct CGContext *)arg1;
- (void)drawContentInContext:(struct CGContext *)arg1;
- (void)drawOverlayInContext:(struct CGContext *)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (struct CGRect)normalizeRect:(struct CGRect)arg1 origin:(struct CGPoint)arg2;
- (void)refreshOverlayRect:(struct CGRect)arg1 page:(id)arg2;
- (void)scheduleContentRefresh:(id)arg1;
- (void)refreshContentRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldDrawPixelated;
- (void)enableDebugFramesInner:(BOOL)arg1 outer:(BOOL)arg2;
- (id)init;
@end
