@interface MSInspectorStackView : NSView
{
NSArray *_sectionViewControllers;	// 152 = 0x98
}
@property(retain, nonatomic) NSArray *sectionViewControllers; // @synthesize sectionViewControllers=_sectionViewControllers;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)reloadWithViewControllers:(id)arg1;
- (void)subViewFrameDidChange:(id)arg1;
- (void)stack;
- (void)recalculateHeight:(id)arg1;
- (void)recalculateHeight;
- (void)reloadSubviews;
@end
