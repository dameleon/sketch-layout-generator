@interface MSAlternatingView : NSView
{
NSView *otherView;	// 152 = 0x98
BOOL didDrag;	// 160 = 0xa0
BOOL isInside;	// 161 = 0xa1
BOOL isDown;	// 162 = 0xa2
}
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)buttonImage;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (void)mouseUp:(id)arg1;
- (BOOL)shouldSwapColorModeForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
@end
