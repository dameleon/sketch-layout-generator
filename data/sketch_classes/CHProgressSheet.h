@interface CHProgressSheet : CHSheetController
{
NSTextField *textField;	// 80 = 0x50
NSProgressIndicator *progress;	// 88 = 0x58
long long maximum;	// 96 = 0x60
long long value;	// 104 = 0x68
NSTextField *titleField;	// 112 = 0x70
NSTextField *subtitleField;	// 120 = 0x78
NSButton *cancelButton;	// 128 = 0x80
}
@property long long value; // @synthesize value;
@property long long maximum; // @synthesize maximum;
- (void).cxx_destruct;
- (void)setIndeterminate:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)isMaximum;
- (void)setMessage:(id)arg1;
- (void)incrementProgressBy:(long long)arg1;
- (void)incrementProgress;
- (void)setProgressMaximum:(long long)arg1;
- (void)awakeFromNib;
@end
