@interface MSPencilEventHandler : MSEventHandler
{
BOOL isDragging;	// 128 = 0x80
MSShapePathLayer *shape;	// 136 = 0x88
struct CGPoint lastMouse;	// 144 = 0x90
MSLayerGroup *currentGroup;	// 160 = 0xa0
}
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (BOOL)shouldDrawLayerSelection;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)addCurvePoint:(id)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)pathShouldClose;
- (void)removeRedundantPoints:(id)arg1;
- (id)fittedBezierPathFromShapePath:(id)arg1;
- (void)unflattenResult;
- (void)selectShape;
- (void)removeShape;
- (void)finishShapeOrRemoveIfEmpty;
- (void)handlerWillLoseFocus;
- (id)currentGroup;
- (id)toolbarIdentifier;
- (void)handlerGotFocus;
- (void)adjustStyleForGroup:(id)arg1;
- (id)shape;
@end
