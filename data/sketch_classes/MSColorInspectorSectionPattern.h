@interface MSColorInspectorSectionPattern : MSColorInspectorSection
{
NSImageView *patternWell;	// 104 = 0x68
NSButton *choosePatternButton;	// 112 = 0x70
NSPopUpButton *patternTilButton;	// 120 = 0x78
}
- (void).cxx_destruct;
- (void)updatePatternWellImage;
- (id)factory;
- (BOOL)pickerViewSupportsDragDrop:(id)arg1;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)patternWellAction:(id)arg1;
- (void)choosePatternImage:(id)arg1;
- (void)validate;
- (long long)fillType;
- (void)enableSectionButtonAction:(id)arg1;
- (id)viewsWithColorPickerView:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
