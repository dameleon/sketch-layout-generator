@interface MSContentDrawView : MSBaseView <MSBasicDelegate, MSTileRemoveCollector>
{
NSEvent *lastEvent;	// 168 = 0xa8
struct CGPoint mouseBeforePinch;	// 176 = 0xb0
BOOL handToolIsActive;	// 192 = 0xc0
struct CGPoint handToolOriginalPoint;	// 200 = 0xc8
struct CGPoint handToolOriginalScrollOrigin;	// 216 = 0xd8
BOOL zoomToolIsActive;	// 232 = 0xe8
BOOL zoomToolActivatedByKey;	// 233 = 0xe9
struct CGPoint zoomToolStartPoint;	// 240 = 0xf0
struct CGPoint zoomToolEndPoint;	// 256 = 0x100
MSRulerView *horizontalRuler;	// 272 = 0x110
MSRulerView *verticalRuler;	// 280 = 0x118
BOOL didMouseDown;	// 288 = 0x120
BOOL hasDraggedOutsideInitialPadding;	// 289 = 0x121
struct CGPoint mouseDownPoint;	// 296 = 0x128
BOOL _userDidMagnify;	// 312 = 0x138
BOOL _shouldHideOverlayControls;	// 313 = 0x139
BOOL _lastActualZoomScrollOriginSaved;	// 314 = 0x13a
MSDocument *_document;	// 320 = 0x140
CALayer *_masterTileLayer;	// 328 = 0x148
MSTilePlacer *_layerTiler;	// 336 = 0x150
long long _animatingZoomCounter;	// 344 = 0x158
double _zoomDeltaDuringPinch;	// 352 = 0x160
double _zoomValueAfterAnimating;	// 360 = 0x168
NSTimer *_refreshTimer;	// 368 = 0x170
double _refreshDelay;	// 376 = 0x178
NSMutableArray *_collectors;	// 384 = 0x180
NSTimer *_scrollCleanupTimer;	// 392 = 0x188
MSViewPort *_viewPortBeforeZoomOut;	// 400 = 0x190
struct CGPoint _lastActualZoomScrollOrigin;	// 408 = 0x198
struct CGRect _dirtyContentRect;	// 424 = 0x1a8
struct CGRect _dirtyOverlayRect;	// 456 = 0x1c8
}
@property(retain, nonatomic) MSViewPort *viewPortBeforeZoomOut; // @synthesize viewPortBeforeZoomOut=_viewPortBeforeZoomOut;
@property(retain, nonatomic) NSTimer *scrollCleanupTimer; // @synthesize scrollCleanupTimer=_scrollCleanupTimer;
@property(retain, nonatomic) NSMutableArray *collectors; // @synthesize collectors=_collectors;
@property(nonatomic) double refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(nonatomic) struct CGRect dirtyOverlayRect; // @synthesize dirtyOverlayRect=_dirtyOverlayRect;
@property(nonatomic) struct CGRect dirtyContentRect; // @synthesize dirtyContentRect=_dirtyContentRect;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) BOOL lastActualZoomScrollOriginSaved; // @synthesize lastActualZoomScrollOriginSaved=_lastActualZoomScrollOriginSaved;
@property(nonatomic) struct CGPoint lastActualZoomScrollOrigin; // @synthesize lastActualZoomScrollOrigin=_lastActualZoomScrollOrigin;
@property(nonatomic) double zoomValueAfterAnimating; // @synthesize zoomValueAfterAnimating=_zoomValueAfterAnimating;
@property(nonatomic) double zoomDeltaDuringPinch; // @synthesize zoomDeltaDuringPinch=_zoomDeltaDuringPinch;
@property(nonatomic) long long animatingZoomCounter; // @synthesize animatingZoomCounter=_animatingZoomCounter;
@property(nonatomic) BOOL shouldHideOverlayControls; // @synthesize shouldHideOverlayControls=_shouldHideOverlayControls;
@property(retain, nonatomic) MSTilePlacer *layerTiler; // @synthesize layerTiler=_layerTiler;
@property(retain, nonatomic) CALayer *masterTileLayer; // @synthesize masterTileLayer=_masterTileLayer;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL zoomToolIsActive; // @synthesize zoomToolIsActive;
@property(nonatomic) __weak MSRulerView *verticalRuler; // @synthesize verticalRuler;
@property(nonatomic) __weak MSRulerView *horizontalRuler; // @synthesize horizontalRuler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layerPositionPossiblyChanged;
- (void)ignoreNextKeyDownEventUntilModifiersChange;
- (void)refresh;
- (void)windowDidResize:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (BOOL)canDrawConcurrently;
- (void)currentHandlerChanged;
- (void)setDelegate:(id)arg1;
- (void)setOutletsToNil;
- (void)didUndoNotification:(id)arg1;
- (void)willUndoNotification:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)reloadLayerList;
- (id)defaultHandler;
- (id)undoManager;
- (id)pages;
- (id)currentPage;
- (id)currentView;
- (id)selectedLayers;
- (void)flagsChanged:(id)arg1;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)currentHandlerKey;
- (void)toggleHandlerKey:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)resetCursorRects;
- (void)addLayer:(id)arg1;
- (void)changeFont:(id)arg1;
- (BOOL)isOpaque;
- (void)setLastEvent:(id)arg1;
- (id)lastEvent;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)didFinishAnimatingZoom;
- (void)willStartAnimatingZoom;
- (struct CGRect)visibleContentRect;
- (void)setViewPort:(id)arg1;
- (void)animateToViewPort:(id)arg1;
- (void)animateScrollOriginToPoint:(struct CGPoint)arg1;
- (struct CGPoint)currentMidPointFromScrollOrigin:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (struct CGPoint)currentMidPoint;
- (void)actualSizeWithoutAnimating;
- (void)actualSize;
- (double)currentZoomValueAccountingForAnimation;
- (double)zoomValueAfterZoomOut;
- (void)zoomOut;
- (double)zoomValueAfterZoomIn;
- (void)setZoomValueCenteredInCanvas:(double)arg1;
- (void)refreshOverlays;
- (void)animatedZoomDidEndAtMidPoint:(struct CGPoint)arg1;
- (void)animateToZoom:(double)arg1 fromPoint:(struct CGPoint)arg2;
- (void)animateToZoom:(double)arg1;
- (void)zoomIn;
- (id)menuForEvent:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)keyUp:(id)arg1;
- (BOOL)performActionWithName:(id)arg1;
- (BOOL)interpretKeyEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)calculateMouseBeforePinch:(BOOL)arg1;
- (void)setZoomValueByOnlyScalingTiles:(double)arg1 fromMouseLocation:(BOOL)arg2;
- (void)magnifyWithEvent:(id)arg1;
- (void)reloadAllTiles;
- (void)displayPropertiesDidChange;
- (void)resetMasterTileLayer;
- (struct CGPoint)scrollOriginAfterMagnify;
- (BOOL)userDidMagnify;
- (void)tileRemoveCollectorDidFinish:(id)arg1;
- (void)animationDidFinishAtZoomValue:(double)arg1 scrollOrigin:(struct CGPoint)arg2;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (BOOL)acceptsTouchEvents;
- (void)scrollCleanupTimer:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (id)viewPortForZoomToFitRect:(id)arg1;
- (void)zoomToFitRect:(id)arg1;
- (id)totalRectForLayers:(id)arg1;
- (void)zoomToSelection;
- (void)centerSelectionInVisibleArea;
- (void)centerLayersInCanvas;
- (void)centerRect:(id)arg1 animated:(BOOL)arg2;
- (void)centerRect:(id)arg1;
- (void)centerSelection;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)doMouseDraggedEvent:(id)arg1;
- (void)mouseDraggedOutsideCanvas;
- (BOOL)isPointOutsideCanvas:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (void)endRefreshCoalescing;
- (void)beginRefreshCoalescing;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)grid;
- (void)placeScrollOriginInTopLeft;
- (BOOL)group:(id)arg1 containsLayerOfType:(Class)arg2;
- (void)centerInBounds;
- (void)refreshTiles;
- (void)scheduleRefreshTiles;
- (void)baseRefreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (void)setZoomValue:(double)arg1;
- (void)setScrollOrigin:(struct CGPoint)arg1 moveTiles:(BOOL)arg2;
- (void)prepareTile:(id)arg1;
- (id)newMasterTileLayer;
- (void)enableLayerBackedDrawing;
- (void)pixelGridDidChange;
- (void)screenDidChange:(id)arg1;
- (void)awakeFromNib;
- (long long)tag;
- (void)initialize;
- (void)handToolMouseUp;
- (void)handToolMouseDragged:(id)arg1;
- (void)handToolMouseDown:(id)arg1;
- (void)endHandToolMode;
- (void)beginHandToolMode;
- (void)drawZoomTool;
- (BOOL)shouldZoomIntoRect;
- (void)zoomToolMouseUp:(id)arg1;
- (struct CGRect)zoomRect;
- (void)applyZoomCursor;
- (void)zoomToolMouseDragged:(id)arg1;
- (void)zoomTooMouseMoved;
- (void)zoomToolMouseDown:(id)arg1;
- (void)zoomToolFlagsChanged;
- (struct CGPoint)zoomPointFromEvent:(id)arg1;
- (void)endZoomToolMode;
- (void)beginZoomToolMode;
@end
