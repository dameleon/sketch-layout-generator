@interface MSFillInspectorViewController : MSStylePartInspectorViewController
{
MSColorPreviewButton *colorButton;	// 112 = 0x70
NSTextField *opacityFieldColor;	// 120 = 0x78
NSTextField *opacityFieldGradientOrPattern;	// 128 = 0x80
}
- (void).cxx_destruct;
- (void)opacityFieldAction:(id)arg1;
- (id)correctOpacityField;
- (void)showCorrectOpacityField;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)prepare;
@end
