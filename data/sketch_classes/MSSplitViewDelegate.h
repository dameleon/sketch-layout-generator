@interface MSSplitViewDelegate : NSObject <NSSplitViewDelegate>
{
NSSplitView *splitView;	// 8 = 0x8
NSWindow *window;	// 16 = 0x10
long long leftSide;	// 24 = 0x18
long long rightSide;	// 32 = 0x20
BOOL isInVersionBrowser;	// 40 = 0x28
NSView *savedInspectorView;	// 48 = 0x30
NSView *layerListView;	// 56 = 0x38
NSView *canvasView;	// 64 = 0x40
NSView *inspectorView;	// 72 = 0x48
}
@property(nonatomic) __weak NSView *inspectorView; // @synthesize inspectorView;
@property(nonatomic) __weak NSView *canvasView; // @synthesize canvasView;
@property(nonatomic) __weak NSView *layerListView; // @synthesize layerListView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didExitVersionBrowser;
- (void)didEnterVersionBrowser;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)dividerIndexBelongsToInspectorView:(long long)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)awakeFromNib;
@end
