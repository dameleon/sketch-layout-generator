@interface MSLayerListPagesButton : NSButton
{
BOOL _isHovering;	// 172 = 0xac
}
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
@end
