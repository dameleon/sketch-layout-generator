@interface MSRotateEventHandler : MSNormalBaseEventHandler
{
long long startingDegrees;	// 128 = 0x80
double startingRotation;	// 136 = 0x88
BOOL exitOnMouseUp;	// 144 = 0x90
BOOL isDraggingInsideLayer;	// 145 = 0x91
struct CGPoint previousMouseLocation;	// 152 = 0x98
NSButton *flattenAfterRotateButton;	// 168 = 0xa8
BOOL _disableMoving;	// 176 = 0xb0
}
+ (id)cursorForDegrees:(long long)arg1;
+ (long long)degreesForPoint:(struct CGPoint)arg1 inLayer:(id)arg2;
@property(nonatomic) BOOL disableMoving; // @synthesize disableMoving=_disableMoving;
@property(nonatomic) BOOL exitOnMouseUp; // @synthesize exitOnMouseUp;
- (void).cxx_destruct;
- (void)willPerformUndo;
- (double)alignDegrees:(double)arg1;
- (long long)degreesForPoint:(struct CGPoint)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDraggedRotateLayer:(id)arg1 mouse:(struct CGPoint)arg2 flags:(unsigned long long)arg3;
- (void)mouseDraggedMoveLayer:(id)arg1 mouse:(struct CGPoint)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)calculateIsDraggingInsideLayer:(struct CGPoint)arg1;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)isStraightTriangle:(id)arg1;
- (BOOL)shouldFlattenLayer:(id)arg1;
- (void)handlerWillLoseFocus;
- (BOOL)canFlattenShape;
- (void)awakeFromNib;
- (void)handlerGotFocus;
- (id)layers;
@end
