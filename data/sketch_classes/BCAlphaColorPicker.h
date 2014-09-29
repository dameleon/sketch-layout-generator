@interface BCAlphaColorPicker : BCColorPickerSliderView
{
double _alphaValue;	// 176 = 0xb0
BCFlexibleColor *_color;	// 184 = 0xb8
}
@property(retain, nonatomic) BCFlexibleColor *color; // @synthesize color=_color;
@property(nonatomic) double alphaValue; // @synthesize alphaValue=_alphaValue;
- (void).cxx_destruct;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawAlphaGradient;
- (void)drawCheckerboard;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (id)initInBounds:(struct CGRect)arg1;
@end
