@interface MSScissorsEventHandler : MSEventHandler
{
unsigned long long hoveringBeforePointIndex;	// 128 = 0x80
BOOL hasDoneFirstCut;	// 136 = 0x88
MSShapeGroup *shape;	// 144 = 0x90
BOOL didCutOnMouseDown;	// 152 = 0x98
NSBezierPath *_cachedBezier;	// 160 = 0xa0
}
@property(retain, nonatomic) NSBezierPath *cachedBezier; // @synthesize cachedBezier=_cachedBezier;
@property(retain, nonatomic) MSShapeGroup *shape; // @synthesize shape;
- (void).cxx_destruct;
- (id)bezierPathWithMoveToReplacedByLines;
- (BOOL)shouldDrawLayerSelection;
- (id)imageName;
- (void)setClosedScissorsCursor;
- (void)setScissorsCursor;
- (BOOL)canCutPaths;
- (void)drawInRect:(struct CGRect)arg1;
- (void)cut;
- (void)replaceClosePathByLineIfNecessary;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (unsigned long long)hoveringBeforePointIndexWithMouse:(struct CGPoint)arg1;
- (struct CGPoint)adjustPoint:(struct CGPoint)arg1;
- (void)updateBezierPath:(id)arg1;
- (id)toolbarIdentifier;
- (void)handlerWillLoseFocus;
- (void)undoNotification:(id)arg1;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;
@end
