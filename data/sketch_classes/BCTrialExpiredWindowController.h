@interface BCTrialExpiredWindowController : NSWindowController
{
NSView *normalView;	// 80 = 0x50
NSView *registrationView;	// 88 = 0x58
NSTextField *registrationField;	// 96 = 0x60
NSTextField *subTextField;	// 104 = 0x68
NSTextField *mainTextField;	// 112 = 0x70
}
+ (void)show;
- (void).cxx_destruct;
- (void)registerLicense:(id)arg1;
- (void)visitStore:(id)arg1;
- (void)registerVolume:(id)arg1;
- (void)quit:(id)arg1;
- (void)buy:(id)arg1;
- (void)replaceApplicationNameInView:(id)arg1;
- (void)awakeFromNib;
@end
