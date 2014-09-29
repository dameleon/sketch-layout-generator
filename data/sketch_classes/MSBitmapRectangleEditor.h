@interface MSBitmapRectangleEditor : MSBitmapEditor
{
BOOL _didDrag;	// 8 = 0x8
long long _dragMode;	// 16 = 0x10
NSBezierPath *_selectionBeforeDrag;	// 24 = 0x18
struct CGPoint _mouseDownPoint;	// 32 = 0x20
struct CGPoint _mouseEndPoint;	// 48 = 0x30
}
@property(retain, nonatomic) NSBezierPath *selectionBeforeDrag; // @synthesize selectionBeforeDrag=_selectionBeforeDrag;
@property(nonatomic) struct CGPoint mouseEndPoint; // @synthesize mouseEndPoint=_mouseEndPoint;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) long long dragMode; // @synthesize dragMode=_dragMode;
- (void).cxx_destruct;
- (struct CGRect)rectFromDraggingPoints;
- (void)draw;
- (void)resetDraggingPoints;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)init;
@end
