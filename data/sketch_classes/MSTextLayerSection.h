@interface MSTextLayerSection : MSLayerSection <NSMenuDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
NSView *_basicView;	// 112 = 0x70
NSView *_symbolExclusionView;	// 120 = 0x78
NSButton *_fontFamilyButton;	// 128 = 0x80
NSPopUpButton *_fontWeightPopUpButton;	// 136 = 0x88
NSTextField *_fontSizeField;	// 144 = 0x90
MSColorPreviewButton *_colorPickerButton;	// 152 = 0x98
NSTextField *_kerningField;	// 160 = 0xa0
NSTextField *_lineHeightField;	// 168 = 0xa8
MSLineHeightTextFieldCell *_lineHeightCell;	// 176 = 0xb0
NSTextField *_paragraphHeightField;	// 184 = 0xb8
NSSegmentedControl *_alignmentButton;	// 192 = 0xc0
BCPopover *_popover;	// 200 = 0xc8
}
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSSegmentedControl *alignmentButton; // @synthesize alignmentButton=_alignmentButton;
@property(retain, nonatomic) NSTextField *paragraphHeightField; // @synthesize paragraphHeightField=_paragraphHeightField;
@property(retain, nonatomic) MSLineHeightTextFieldCell *lineHeightCell; // @synthesize lineHeightCell=_lineHeightCell;
@property(retain, nonatomic) NSTextField *lineHeightField; // @synthesize lineHeightField=_lineHeightField;
@property(retain, nonatomic) NSTextField *kerningField; // @synthesize kerningField=_kerningField;
@property(retain, nonatomic) MSColorPreviewButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(retain, nonatomic) NSTextField *fontSizeField; // @synthesize fontSizeField=_fontSizeField;
@property(retain, nonatomic) NSPopUpButton *fontWeightPopUpButton; // @synthesize fontWeightPopUpButton=_fontWeightPopUpButton;
@property(retain, nonatomic) NSButton *fontFamilyButton; // @synthesize fontFamilyButton=_fontFamilyButton;
@property(retain, nonatomic) NSView *symbolExclusionView; // @synthesize symbolExclusionView=_symbolExclusionView;
@property(retain, nonatomic) NSView *basicView; // @synthesize basicView=_basicView;
- (void).cxx_destruct;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (id)views;
- (id)textStorages;
- (BOOL)textLayerContainedInSymbol;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)updateKerningForFontChangeTo:(id)arg1 string:(id)arg2 range:(struct _NSRange)arg3 effectiveRange:(struct _NSRange)arg4 oldPointSize:(double)arg5;
- (void)changeFontPropertiesInBlock:(CDUnknownBlockType)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)reloadFontWeightPopUp;
- (id)firstColor;
- (id)currentFontFamilyName;
- (void)changeFontFamilyTo:(id)arg1;
- (void)changeParagraphStyleInBlock:(CDUnknownBlockType)arg1;
- (id)textView;
- (void)alignmentButtonAction:(id)arg1;
- (id)currentView;
- (void)paragraphHeightAction:(id)arg1;
- (void)lineHeightAction:(id)arg1;
- (void)kerningAction:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)changeTextLayerFont:(id)arg1;
- (void)showColorPickerAction:(id)arg1;
- (void)showParagraphStylingAction:(id)arg1;
- (void)fontSizeAction:(id)arg1;
- (void)fontWeightAction:(id)arg1;
- (void)fontFamilyAction:(id)arg1;
- (void)viewControllerWillDisappear;
- (void)dealloc;
- (double)defaultLineHeight;
- (double)lineHeight;
- (void)reloadLineHeightField;
- (void)reloadData;
- (void)textViewDidChange:(id)arg1;
- (void)awakeFromNib;
@end
