@interface MSPresetPickerPresetButton : NSButton <NSDraggingSource>
{
struct CGPoint destinationAnimationPoint;	// 176 = 0xb0
}
- (void)draggingEndedWithOperation:(unsigned long long)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)writeAdditionalDragDataToPasteboard:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)innerShadow;
- (struct CGRect)frameConsideringAnimation;
- (void)animateToOrigin:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
@end
