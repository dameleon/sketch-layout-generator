@interface MSMultipleBorderInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
NSButton *addStylePartButton;	// 104 = 0x68
MSTextLabelForUpDownField *_thicknessLabel;	// 112 = 0x70
MSBorderOptionsInspectorViewController *_borderOptionsController;	// 120 = 0x78
BCPopover *_popover;	// 128 = 0x80
}
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSBorderOptionsInspectorViewController *borderOptionsController; // @synthesize borderOptionsController=_borderOptionsController;
@property(retain, nonatomic) MSTextLabelForUpDownField *thicknessLabel; // @synthesize thicknessLabel=_thicknessLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadInspectorStack:(id)arg1;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (BOOL)shouldShowAdvancedOptionsButton;
- (BOOL)shouldHideAddStylePartButton;
- (void)setLayers:(id)arg1;
- (void)styleDidEnableOrDisable;
- (void)popoverWillClose:(id)arg1;
- (void)showBorderOptionsButtonAction:(id)arg1;
- (void)prepare;
- (id)stylePartKeyPath;
- (id)initWithDelegate:(id)arg1;
@end
