@interface MSColorInspectorSectionGradient : MSColorInspectorSection <MSGradientEventHandlerDelegate, MSGradientBarViewDelegate>
{
NSPopUpButton *gradientTypeButton;	// 104 = 0x68
NSButton *smoothOpacityButton;	// 112 = 0x70
MSGradientBarView *gradientBarView;	// 120 = 0x78
MSGradientEventHandler *gradientHandler;	// 128 = 0x80
NSButton *_rotateLeftButton;	// 136 = 0x88
NSButton *_rotateRightButton;	// 144 = 0x90
MSGradientFactory *_factory;	// 152 = 0x98
}
@property(retain, nonatomic) MSGradientFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) NSButton *rotateRightButton; // @synthesize rotateRightButton=_rotateRightButton;
@property(retain, nonatomic) NSButton *rotateLeftButton; // @synthesize rotateLeftButton=_rotateLeftButton;
@property(retain, nonatomic) MSGradientEventHandler *gradientHandler; // @synthesize gradientHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeGradientHandler;
- (void)popoverWillClose;
- (id)gradients;
- (id)rotateTransformForGradient:(id)arg1 angle:(double)arg2;
- (void)rotateGradientsByAngle:(double)arg1;
- (void)rotateRightAction:(id)arg1;
- (void)rotateLeftAction:(id)arg1;
- (void)refreshAction:(id)arg1;
- (void)drawGradient:(id)arg1 inRect:(struct CGRect)arg2;
- (void)updateOtherGradientsToReflectChanges;
- (void)gradientHandlerDidChangeGradient:(id)arg1;
- (void)gradientHandlerWillLoseFocus:(id)arg1;
- (void)gradientHandlerDidChangeCurrentPoint:(id)arg1;
- (void)colorPickerChangedTo:(id)arg1;
- (void)switchToGradientHandler;
- (void)pickerView:(id)arg1 didPickPresetAtIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 removePresetAtIndex:(unsigned long long)arg2;
- (void)addPresetForPickerView:(id)arg1;
- (void)drawContentForCellInPickerView:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)gradientBarAction:(id)arg1;
- (long long)fillType;
- (void)switchToGradientHandlerIfNecessary;
- (void)validate;
- (id)viewsWithColorPickerView:(id)arg1;
- (void)gradientBarChanged:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
