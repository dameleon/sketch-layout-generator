@interface MSModePickerView : NSView
{
long long _pickerMode;	// 152 = 0x98
id <MSModeModePickerDelegate> _delegate;	// 160 = 0xa0
NSButton *_button1;	// 168 = 0xa8
NSButton *_button2;	// 176 = 0xb0
NSButton *_button3;	// 184 = 0xb8
NSButton *_button4;	// 192 = 0xc0
NSButton *_button5;	// 200 = 0xc8
NSButton *_button6;	// 208 = 0xd0
NSTextField *_labelField;	// 216 = 0xd8
}
@property(nonatomic) __weak NSTextField *labelField; // @synthesize labelField=_labelField;
@property(nonatomic) __weak NSButton *button6; // @synthesize button6=_button6;
@property(nonatomic) __weak NSButton *button5; // @synthesize button5=_button5;
@property(nonatomic) __weak NSButton *button4; // @synthesize button4=_button4;
@property(nonatomic) __weak NSButton *button3; // @synthesize button3=_button3;
@property(nonatomic) __weak NSButton *button2; // @synthesize button2=_button2;
@property(nonatomic) __weak NSButton *button1; // @synthesize button1=_button1;
@property(nonatomic) __weak id <MSModeModePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long pickerMode; // @synthesize pickerMode=_pickerMode;
- (void).cxx_destruct;
- (id)buttons;
- (void)deselectAllButtons;
- (id)cellForMode:(long long)arg1;
- (id)buttonForMode:(long long)arg1;
- (id)labelForMode:(long long)arg1;
- (long long)pickerModeForEvent:(id)arg1;
- (long long)highlightCount;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)addTrackingAreaForButton:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)awakeFromNib;
@end
