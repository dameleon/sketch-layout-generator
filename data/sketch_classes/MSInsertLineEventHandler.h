@interface MSInsertLineEventHandler : MSEventHandler
{
CDUnknownBlockType _lineShapeCreator;	// 128 = 0x80
MSShapeGroup *_lineShape;	// 136 = 0x88
}
@property(retain, nonatomic) MSShapeGroup *lineShape; // @synthesize lineShape=_lineShape;
@property(copy, nonatomic) CDUnknownBlockType lineShapeCreator; // @synthesize lineShapeCreator=_lineShapeCreator;
- (void).cxx_destruct;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)findCurrentGroup;
- (double)lineThickness;
- (id)style;
- (void)createShapeAtMouse:(struct CGPoint)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (struct CGPoint)roundMouse:(struct CGPoint)arg1;
@end
