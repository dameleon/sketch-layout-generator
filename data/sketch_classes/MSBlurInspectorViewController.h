@interface MSBlurInspectorViewController : MSStylePartInspectorViewController <NSMenuDelegate>
{
NSView *gaussianBlurView;	// 112 = 0x70
NSView *motionBlurView;	// 120 = 0x78
NSView *zoomBlurView;	// 128 = 0x80
NSButton *editButton;	// 136 = 0x88
NSMenuItem *backgroundBlurMenuItem;	// 144 = 0x90
}
- (void).cxx_destruct;
- (void)dealloc;
- (void)handlerFocusDidChange:(id)arg1;
- (void)blurPopUpAction:(id)arg1;
- (void)editZoomCenter:(id)arg1;
- (id)layers;
- (void)menuNeedsUpdate:(id)arg1;
- (id)views;
- (void)reloadInspectorStack:(id)arg1;
- (void)awakeFromNib;
@end
