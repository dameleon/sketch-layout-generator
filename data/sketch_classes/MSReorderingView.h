@interface MSReorderingView : NSView <NSDraggingSource>
{
SEL _deleteAction;	// 152 = 0x98
id _target;	// 160 = 0xa0
long long _reorderingTag;	// 168 = 0xa8
}
@property(nonatomic) long long reorderingTag; // @synthesize reorderingTag=_reorderingTag;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL deleteAction; // @synthesize deleteAction=_deleteAction;
- (void).cxx_destruct;
- (id)menuForEvent:(id)arg1;
- (void)draggingEndedWithOperation:(unsigned long long)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)startDragWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
@end
