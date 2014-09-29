@interface MSBorderInspectorViewController : MSStylePartInspectorViewController
{
NSPopUpButton *positionPopUp;	// 112 = 0x70
MSColorPreviewButton *colorButton;	// 120 = 0x78
MSUpDownTextField *_thicknessField;	// 128 = 0x80
}
@property(retain, nonatomic) MSUpDownTextField *thicknessField; // @synthesize thicknessField=_thicknessField;
- (void).cxx_destruct;
- (id)lineShapes;
- (void)borderThicknessChanged:(id)arg1;
- (void)enableAction:(id)arg1;
- (id)layers;
- (BOOL)canDrawInnerOrOuterBorders;
- (id)positionPopUpToolTip;
- (void)setStyleParts:(id)arg1;
- (void)prepare;
- (id)init;
@end
