@interface MSColorInspectorSectionColor : MSColorInspectorSection
{
MSColor *_pickedColor;	// 104 = 0x68
MSColorFactory *_factory;	// 112 = 0x70
}
@property(retain, nonatomic) MSColorFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) MSColor *pickedColor; // @synthesize pickedColor=_pickedColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)colorPickerChangedTo:(id)arg1;
- (BOOL)hasAdvancedSettingsNib;
- (long long)fillType;
- (void)validate;
- (void)setStyleParts:(id)arg1;
- (void)highlightCurrentColor;
- (void)reloadPresetPicker;
- (id)viewsWithColorPickerView:(id)arg1;
- (id)init;
@end
