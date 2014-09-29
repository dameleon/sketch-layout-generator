@interface MSShapeEventHandler : MSEventHandler <NSTextDelegate, NSMenuDelegate>
{
MSSelectionPathCollection *selectionPaths;	// 128 = 0x80
MSSelectionPathCollection *dragRectSelection;	// 136 = 0x88
long long hoveringPoint;	// 144 = 0x90
long long hoveringPointInPoint;	// 152 = 0x98
long long hoveringBeforePointIndex;	// 160 = 0xa0
BOOL firstDrag;	// 168 = 0xa8
BOOL editingNewShape;	// 169 = 0xa9
BOOL didInsertOnMouseDown;	// 170 = 0xaa
BOOL didSelectPoints;	// 171 = 0xab
BOOL didMouseDown;	// 172 = 0xac
BOOL wasMakingDragRectSelectionAtMouseDown;	// 173 = 0xad
NSBezierPath *horizontalSnap;	// 176 = 0xb0
NSBezierPath *verticalSnap;	// 184 = 0xb8
struct CGPoint mouseLocation;	// 192 = 0xc0
struct CGPoint lastMouseMoved;	// 208 = 0xd0
struct CGPoint selectionStartPoint;	// 224 = 0xe0
struct CGPoint selectionEndPoint;	// 240 = 0xf0
MSSelectionPath *candidateSelection;	// 256 = 0x100
NSTextField *cornerRadiusField;	// 264 = 0x108
NSPopUpButton *roundingPopUpButton;	// 272 = 0x110
NSView *curveModeBackgroundView;	// 280 = 0x118
NSButton *makeRectSelectionButton;	// 288 = 0x120
NSButton *closePathButton;	// 296 = 0x128
NSTextField *curvePointXField;	// 304 = 0x130
NSTextField *curvePointYField;	// 312 = 0x138
NSSlider *cornerRadiusSlider;	// 320 = 0x140
struct CGRect dirtyRect;	// 328 = 0x148
BOOL _isMakingRectSelection;	// 360 = 0x168
MSLayerGroup *_currentGroup;	// 368 = 0x170
MSShapePathLayer *_shape;	// 376 = 0x178
}
@property(retain, nonatomic) MSShapePathLayer *shape; // @synthesize shape=_shape;
@property(nonatomic) __weak MSLayerGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
@property(nonatomic) BOOL isMakingRectSelection; // @synthesize isMakingRectSelection=_isMakingRectSelection;
@property(retain, nonatomic) MSSelectionPath *candidateSelection; // @synthesize candidateSelection;
@property(retain, nonatomic) id verticalSnap; // @synthesize verticalSnap;
@property(retain, nonatomic) id horizontalSnap; // @synthesize horizontalSnap;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)finishEditingAction:(id)arg1;
- (void)closePathAction:(id)arg1;
- (BOOL)inspectorShouldShowBlendingProperties;
- (BOOL)inspectorShouldShowLayerSpecificProperties;
- (BOOL)inspectorShouldShowSharedStyles;
- (BOOL)inspectorShouldShowPositions;
- (unsigned long long)inspectorLocation;
- (id)nibName;
- (void)dealloc;
- (id)titleForRoundingPopUp;
- (void)adjustRoundingPopUpTitle;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)cornerRadiusAction:(id)arg1;
- (void)roundingPopUpAction:(id)arg1;
- (void)vectorModeSegmentedButtonAction:(id)arg1;
- (void)validateCornerRadiusButton;
- (id)selectionPaths;
@property(readonly, nonatomic) NSArray *selectedCurvePoints; // @dynamic selectedCurvePoints;
- (void)awakeFromNib;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1 axis:(id)arg2 point:(struct CGPoint)arg3;
- (void)setCurrentCurveValue:(struct CGPoint)arg1 axis:(id)arg2;
- (void)adjustCurvePointValueOnAxis:(id)arg1;
- (void)curvePointYAction:(id)arg1;
- (void)curvePointXAction:(id)arg1;
- (void)duplicate:(id)arg1;
- (struct CGPoint)pointInPageOrArtboardCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)currentPointValueForPoint:(id)arg1;
- (void)adjustCurrentCurveXYValue;
- (void)reloadViewData;
- (struct CGPoint)_roundPoint:(struct CGPoint)arg1;
- (struct CGPoint)roundPoint:(struct CGPoint)arg1;
- (BOOL)shouldDrawLayerSelection;
- (void)changeColor:(id)arg1;
- (struct CGPoint)relativePoint:(struct CGPoint)arg1;
- (void)markShapeDirtyOfType:(unsigned long long)arg1;
- (id)dirtyFrame;
- (void)adjustFrame;
- (id)bezierPathAroundPoint:(id)arg1 andPoint:(id)arg2 xTol:(double)arg3 yTol:(double)arg4;
- (BOOL)point:(struct CGPoint)arg1 isBetweenPoint:(id)arg2 andPoint:(id)arg3;
- (struct MSShapeClickInfo)clickInfoForMouse:(struct CGPoint)arg1;
- (long long)indexOfSelectedPoint;
- (void)flagsChanged:(id)arg1;
- (void)drawVectorSelection:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (id)bezierPathForWire;
- (id)bezierWireForClosingPath;
- (void)drawWire;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (long long)curveModeForPressedKey:(long long)arg1;
- (void)changeSelectedCurvePointsTo:(long long)arg1;
- (void)nudgeSelectedPointsForKey:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)deleteSelectedPoints;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)selectAll:(id)arg1;
- (void)delete:(id)arg1;
- (void)showCursorWithFlags:(unsigned long long)arg1;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)refreshWireIfNecessary;
- (void)clearSelectionPathsAndRefresh;
- (BOOL)didClickOutsideBounds:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)refreshDragRect;
- (void)determineSelectedPointsByDrag;
- (BOOL)canAddNewPointOnMouseDownWithFlags:(unsigned long long)arg1;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (BOOL)mouseDownEvent:(id)arg1;
- (void)selectPointAndUpdate:(long long)arg1 curve:(long long)arg2;
- (BOOL)selectingPointShouldClosePath:(long long)arg1;
- (void)fitCurvePoint:(id)arg1 bySplittingCurvePath:(id)arg2 surroundingPoints:(id)arg3;
- (id)pointsAroundIndex:(long long)arg1;
- (void)insertPoint:(struct CGPoint)arg1 beforeIndex:(long long)arg2;
- (struct CGPoint)alignPoint:(struct CGPoint)arg1 withShiftTo:(struct CGPoint)arg2;
- (void)addPointForMouse:(struct CGPoint)arg1;
- (void)changeFromStraightToMirrored:(id)arg1 index:(long long)arg2;
- (void)expandHandlesForSelectionPath:(id)arg1;
- (void)expandHandlesForSelectedPoint;
- (id)curvePointForSelectionPath:(id)arg1;
- (void)handlerWillLoseFocus;
- (void)prepareShapeForEditing;
- (void)insertNewShapeForEditingAtPoint:(struct CGPoint)arg1;
- (id)toolbarIdentifier;
- (id)findSelectedShape;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;
- (struct CGPoint)snapPointIfEnabled:(struct CGPoint)arg1;
- (struct CGPoint)snapPoint:(struct CGPoint)arg1;
- (struct CGPoint)checkForPoint:(struct CGPoint)arg1 againstPoint:(struct CGPoint)arg2;
- (BOOL)point:(struct CGPoint)arg1 isCloseToPoint:(struct CGPoint)arg2;
- (void)snapsMouseUpHook;
- (void)drawSnaps;
@end
