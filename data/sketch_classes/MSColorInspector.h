@interface MSColorInspector : NSViewController <MSColorInspectorSectionDelegate, MSModeModePickerDelegate, BCPopoverContentController>
{
BCHSBColorPicker *colorPicker;	// 104 = 0x68
NSView *emptyTopView;	// 112 = 0x70
NSView *colorPickerView;	// 120 = 0x78
BCColorListView *colorListView;	// 128 = 0x80
NSView *shadowBlendingView;	// 136 = 0x88
NSView *borderBlendingOpacityView;	// 144 = 0x90
NSArray *_styleParts;	// 152 = 0x98
id <MSColorInspectorDelegate> _delegate;	// 160 = 0xa0
BCPopover *_popover;	// 168 = 0xa8
MSModePickerView *_borderColorTypePicker;	// 176 = 0xb0
MSModePickerView *_fillColorTypePicker;	// 184 = 0xb8
MSColorInspectorSectionColor *_colorSection;	// 192 = 0xc0
MSColorInspectorSectionGradient *_gradientSection;	// 200 = 0xc8
MSColorInspectorSectionPattern *_patternSection;	// 208 = 0xd0
MSColorInspectorSectionNoise *_noiseSection;	// 216 = 0xd8
MSEventHandlerManager *_handlerManager;	// 224 = 0xe0
}
@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(retain, nonatomic) MSColorInspectorSectionNoise *noiseSection; // @synthesize noiseSection=_noiseSection;
@property(retain, nonatomic) MSColorInspectorSectionPattern *patternSection; // @synthesize patternSection=_patternSection;
@property(retain, nonatomic) MSColorInspectorSectionGradient *gradientSection; // @synthesize gradientSection=_gradientSection;
@property(retain, nonatomic) MSColorInspectorSectionColor *colorSection; // @synthesize colorSection=_colorSection;
@property(nonatomic) __weak MSModePickerView *fillColorTypePicker; // @synthesize fillColorTypePicker=_fillColorTypePicker;
@property(nonatomic) __weak MSModePickerView *borderColorTypePicker; // @synthesize borderColorTypePicker=_borderColorTypePicker;
@property(nonatomic) __weak BCPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <MSColorInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)setActionsToNil;
- (void)colorMagnifierAction:(id)arg1;
- (void)pickerViewChanged:(id)arg1;
- (void)notifyCurrentViewOfFocus;
- (id)pickerView:(id)arg1 labelForMode:(long long)arg2;
- (id)filteredStyleParts:(id)arg1;
- (void)close:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)colorChangedTo:(id)arg1;
- (void)colorPickerAction:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)popoverWillClose;
- (void)setMaximumAvailableHeight:(long long)arg1;
- (void)validateEnableButtons;
- (id)viewControllers;
- (id)currentSection;
- (long long)initialColorTypePickerMode;
- (void)fixFirstResponder;
- (BOOL)shouldHideTopTabBar;
- (void)stack;
- (BOOL)stylePartIsGradient:(id)arg1;
- (void)findCommonColors;
- (void)prepareForDisplay;
- (void)setInitialColor:(id)arg1;
- (void)applyBackgroundArrowColor;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;
- (id)currentModePicker;
- (void)colorDidChangeTo:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)initWithSender:(id)arg1 handlerManager:(id)arg2;
@end
