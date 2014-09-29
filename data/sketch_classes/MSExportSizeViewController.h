@interface MSExportSizeViewController : CHViewController
{
NSPopUpButton *_formatPopup;	// 104 = 0x68
NSButton *_removeSizeButton;	// 112 = 0x70
NSView *_sizeView;	// 120 = 0x78
NSView *_scaleView;	// 128 = 0x80
NSArray *_exportSizes;	// 136 = 0x88
NSComboBox *_scaleField;	// 144 = 0x90
}
@property(retain, nonatomic) NSComboBox *scaleField; // @synthesize scaleField=_scaleField;
@property(retain, nonatomic) NSArray *exportSizes; // @synthesize exportSizes=_exportSizes;
@property(retain, nonatomic) NSView *scaleView; // @synthesize scaleView=_scaleView;
@property(retain, nonatomic) NSView *sizeView; // @synthesize sizeView=_sizeView;
@property(retain, nonatomic) NSButton *removeSizeButton; // @synthesize removeSizeButton=_removeSizeButton;
@property(retain, nonatomic) NSPopUpButton *formatPopup; // @synthesize formatPopup=_formatPopup;
- (void).cxx_destruct;
- (void)scaleFieldAction:(id)arg1;
- (void)formatPopupAction:(id)arg1;
- (void)removeExportSize:(id)arg1;
- (id)firstSize;
- (void)prepare;
@end
