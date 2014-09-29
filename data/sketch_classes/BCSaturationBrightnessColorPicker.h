@interface BCSaturationBrightnessColorPicker : BCColorPickerBaseView
{
struct CGPoint _originalPoint;	// 176 = 0xb0
double _hue;	// 192 = 0xc0
double _saturation;	// 200 = 0xc8
double _brightness;	// 208 = 0xd0
}
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double saturation; // @synthesize saturation=_saturation;
@property(nonatomic) double hue; // @synthesize hue=_hue;
- (void)dealloc;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)pickerRect;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;
@end
