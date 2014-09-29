@interface MSMultipleFillInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
MSTextLabelForUpDownField *_opacityLabel;	// 104 = 0x68
NSButton *_addStylePartButton;	// 112 = 0x70
BCPopover *_popover;	// 120 = 0x78
}
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) MSTextLabelForUpDownField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
- (void).cxx_destruct;
- (id)views;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
- (id)stylePartKeyPath;
- (void)popoverWillClose:(id)arg1;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)viewControllerWillDisappear;
- (BOOL)shouldHideAddStylePartButton;
- (void)prepare;
- (void)showAdvancedOptionsAction:(id)arg1;
@end
