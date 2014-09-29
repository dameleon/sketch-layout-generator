@interface JRFeedbackController : NSWindowController
{
NSTextView *textView;	// 80 = 0x50
NSButton *includeHardwareDetailsCheckbox;	// 88 = 0x58
NSTextField *nameTextField;	// 96 = 0x60
NSTextField *emailAddressComboBox;	// 104 = 0x68
NSProgressIndicator *progress;	// 112 = 0x70
NSSegmentedControl *segmentedControl;	// 120 = 0x78
NSButton *cancelButton;	// 128 = 0x80
NSButton *sendButton;	// 136 = 0x88
int currentSection;	// 144 = 0x90
BOOL includeContactInfo;	// 148 = 0x94
}
+ (id)postURL;
+ (void)showFeedbackWithBugDetails:(id)arg1;
+ (void)showFeedback;
- (void).cxx_destruct;
- (void)showWindow:(id)arg1;
- (void)setTextViewStringTo:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAlertMessage:(id)arg1 withInformativeText:(id)arg2 andAlertStyle:(unsigned long long)arg3;
- (void)alertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)closeFeedback;
- (void)postFeedback:(id)arg1;
- (void)system_profilerThread:(id)arg1;
- (void)submitAction:(id)arg1;
- (void)switchSectionAction:(id)arg1;
- (void)visitOnlineSupport:(id)arg1;
- (void)setIncludeContactInfo:(BOOL)arg1;
- (BOOL)includeContactInfo;
- (void)windowDidLoad;
- (id)init;
@end
