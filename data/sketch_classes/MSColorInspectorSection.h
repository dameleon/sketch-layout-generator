@interface MSColorInspectorSection : CHViewController <MSPresetPickerViewDelegate>
{
id <MSColorInspectorSectionDelegate> _delegate;	// 104 = 0x68
NSArray *_styleParts;	// 112 = 0x70
MSPresetPickerView *_presetPicker;	// 120 = 0x78
NSScrollView *_presetPickerScrollView;	// 128 = 0x80
MSEventHandlerManager *_handlerManager;	// 136 = 0x88
}
@property(retain, nonatomic) MSEventHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(retain, nonatomic) NSScrollView *presetPickerScrollView; // @synthesize presetPickerScrollView=_presetPickerScrollView;
@property(retain, nonatomic) MSPresetPickerView *presetPicker; // @synthesize presetPicker=_presetPicker;
@property(copy, nonatomic) NSArray *styleParts; // @synthesize styleParts=_styleParts;
@property(nonatomic) __weak id <MSColorInspectorSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)shouldShowAddPresetButton:(id)arg1;
- (id)viewsWithColorPickerView:(id)arg1;
- (id)factory;
- (void)refreshAction:(id)arg1;
- (void)dealloc;
- (BOOL)pickerView:(id)arg1 didDragPresetAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (unsigned long long)numberOfPresetsInPickerView:(id)arg1;
- (void)sectionGotFocus;
- (void)colorPanelDidChangeColorTo:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)popoverWillClose;
- (void)validate;
- (BOOL)isEnabled;
- (long long)fillType;
- (void)reloadPresetPicker;
- (id)init;
@end
