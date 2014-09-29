@interface MSDragRectEventHandler : MSEventHandler
{
struct CGPoint _fromPoint;	// 128 = 0x80
struct CGPoint _toPoint;	// 144 = 0x90
BOOL _handToolActive;	// 160 = 0xa0
MSNormalEventData *eventData;	// 168 = 0xa8
}
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (BOOL)shouldDrawLayerSelection;
- (void)flagsChanged:(id)arg1;
- (id)layerSnapper;
- (void)drawHeight:(double)arg1 ofRect:(id)arg2 attributes:(id)arg3;
- (void)drawWidth:(double)arg1 ofRect:(id)arg2 attributes:(id)arg3;
- (void)drawRectMeasurements;
- (void)prepareGraphicsContext;
- (void)drawRectPreview;
- (void)drawInRect:(struct CGRect)arg1;
- (id)currentGroup;
- (BOOL)handlesHandToolItself;
- (void)keyUp:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (id)rectForInserting;
- (id)performActionWithRect:(id)arg1;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (void)handlerWillLoseFocus;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;
@end
