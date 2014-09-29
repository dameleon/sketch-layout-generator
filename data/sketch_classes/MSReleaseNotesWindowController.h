@interface MSReleaseNotesWindowController : NSWindowController
{
NSTextView *_releaseNotesField;	// 80 = 0x50
NSTextField *_titleField;	// 88 = 0x58
}
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) NSTextView *releaseNotesField; // @synthesize releaseNotesField=_releaseNotesField;
- (void).cxx_destruct;
- (void)close:(id)arg1;
- (void)updateReleaseNotesField;
- (void)updateTitleToVersionNumber;
- (void)awakeFromNib;
- (id)init;
@end
