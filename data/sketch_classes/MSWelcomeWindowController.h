@interface MSWelcomeWindowController : NSWindowController <NSWindowDelegate, NSTextFieldDelegate>
{
NSButton *_confirmButton;	// 80 = 0x50
NSButton *_closeButton;	// 88 = 0x58
NSTextField *_emailField;	// 96 = 0x60
NSView *_movieView;	// 104 = 0x68
NSView *_normalView;	// 112 = 0x70
}
@property(retain, nonatomic) NSView *normalView; // @synthesize normalView=_normalView;
@property(retain, nonatomic) NSView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) NSTextField *emailField; // @synthesize emailField=_emailField;
@property(retain, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (void)openTemplateNamed:(id)arg1;
- (void)openWebDesignTemplate:(id)arg1;
- (void)openIOSIconTemplate:(id)arg1;
- (void)openIOSDesignTemplate:(id)arg1;
- (void)subscribeToNewsletter:(id)arg1;
- (void)likeUsOnFacebook:(id)arg1;
- (void)followUsOnTwitter:(id)arg1;
- (void)contactSupport:(id)arg1;
- (void)readManual:(id)arg1;
- (void)openIntroDocument:(id)arg1;
- (void)playMovie:(id)arg1;
- (void)showWhatsNew:(id)arg1;
- (BOOL)signUpFieldsContainsValidEmail;
- (void)controlTextDidChange:(id)arg1;
- (void)confirm:(id)arg1;
@end
