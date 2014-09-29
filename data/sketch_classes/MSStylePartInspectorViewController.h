@interface MSStylePartInspectorViewController : CHViewController <NSPopoverDelegate, MSSectionProtocol, NSWindowDelegate, BCPopoverDelegate, MSColorInspectorDelegate>
{
NSView *nameView;	// 104 = 0x68
NSArray *_styleParts;	// 112 = 0x70
NSArrayController *_arrayController;	// 120 = 0x78
id <MSStylePartInspectorDelegate> _delegate;	// 128 = 0x80
MSColorPreviewButton *_colorPickerButton;	// 136 = 0x88
BCPopover *_popover;	// 144 = 0x90
}
+ (id)reusableControllerArray;
+ (id)stylePartViewController;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) MSColorPreviewButton *colorPickerButton; // @synthesize colorPickerButton=_colorPickerButton;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(retain, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
- (void).cxx_destruct;
- (void)reloadInspectorStack:(id)arg1;
- (id)views;
- (void)didGetAddedToInspector;
- (BOOL)hasEnabledStyle;
- (void)prepare;
- (void)dealloc;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)fitScrollViewToParent;
- (void)popoverWillClose:(id)arg1;
- (void)checkBoxAction:(id)arg1;
- (BOOL)popoverShouldCloseWhenOtherPopoverOpens:(id)arg1 otherPopover:(id)arg2;
- (void)moveInspectorToFitColorPopoverIfNecessary:(id)arg1;
- (void)popoverWindowSizeDidChange:(id)arg1;
- (void)previewCellAction:(id)arg1;
- (void)awakeFromNib;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (void)prepareForReuse;
@end
