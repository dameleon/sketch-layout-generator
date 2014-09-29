@interface BCHSBColorPicker : NSControl
{
BCSaturationBrightnessColorPicker *sbPickerView;	// 176 = 0xb0
BCHueColorPicker *hPickerView;	// 184 = 0xb8
BCAlphaColorPicker *aPickerView;	// 192 = 0xc0
BCColorPreview *colorPreviewView;	// 200 = 0xc8
BCMagnifierButton *magnifierButton;	// 208 = 0xd0
NSTextField *redComponentTextField;	// 216 = 0xd8
NSTextField *greenComponentTextField;	// 224 = 0xe0
NSTextField *blueComponentTextField;	// 232 = 0xe8
NSTextField *hueComponentTextField;	// 240 = 0xf0
NSTextField *satComponentTextField;	// 248 = 0xf8
NSTextField *ligComponentTextField;	// 256 = 0x100
NSTextField *alphaComponentTextField;	// 264 = 0x108
NSTextField *hexValueTextField;	// 272 = 0x110
long long ignoreColorActionsCounter;	// 280 = 0x118
id target;	// 288 = 0x120
SEL action;	// 296 = 0x128
}
@property SEL action; // @synthesize action;
@property __weak id target; // @synthesize target;
- (void).cxx_destruct;
- (void)colorListChanged:(id)arg1;
- (void)hexValueFieldChanged:(id)arg1;
- (void)rgbComponentFieldsChanged:(id)arg1;
- (void)hslComponentFieldsChanged:(id)arg1;
- (void)setColor:(id)arg1 ignoringFields:(id)arg2;
@property(copy, nonatomic) MSColor *color; // @dynamic color;
- (id)flexibleColor;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateColorPreviewView;
- (void)saturationBrightnessChanged:(id)arg1;
- (void)alphaChanged:(id)arg1;
- (void)hueChanged:(id)arg1;
- (void)magnifierAction:(id)arg1;
- (void)awakeFromNib;
- (void)constructSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@end
