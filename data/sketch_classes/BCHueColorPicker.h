@interface BCHueColorPicker : BCColorPickerSliderView
{
double _hueValue;	// 176 = 0xb0
}
@property(nonatomic) double hueValue; // @synthesize hueValue=_hueValue;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;
@end
