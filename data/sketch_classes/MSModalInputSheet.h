@interface MSModalInputSheet : NSObject <NSWindowDelegate>
{
NSWindow *panel;	// 8 = 0x8
NSTextField *titleField;	// 16 = 0x10
NSTextField *textField;	// 24 = 0x18
NSTextField *numberField;	// 32 = 0x20
NSPathControl *pathControl;	// 40 = 0x28
BOOL finishedOK;	// 48 = 0x30
long long _type;	// 56 = 0x38
NSString *_label;	// 64 = 0x40
double _numberFieldBinding;	// 72 = 0x48
}
@property(nonatomic) double numberFieldBinding; // @synthesize numberFieldBinding=_numberFieldBinding;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (id)runPanelWithNibName:(id)arg1 ofType:(long long)arg2 initialString:(id)arg3 label:(id)arg4;
@end
