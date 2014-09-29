@interface MSHoverButton : MSProButton
{
BOOL _mouseIsHovering;	// 172 = 0xac
}
@property(nonatomic) BOOL mouseIsHovering; // @synthesize mouseIsHovering=_mouseIsHovering;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
@end
