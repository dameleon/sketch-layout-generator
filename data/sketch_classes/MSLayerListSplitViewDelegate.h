@interface MSLayerListSplitViewDelegate : NSObject <NSSplitViewDelegate>
{
NSSplitView *splitter;	// 8 = 0x8
NSView *presetPicker;	// 16 = 0x10
}
- (void).cxx_destruct;
- (void)dealloc;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
@end
