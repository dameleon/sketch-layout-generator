@interface MSSmartRotateSheet : CHSheetController
{
long long numberOfCopies;	// 80 = 0x50
NSTextField *explanationLabel;	// 88 = 0x58
}
@property(nonatomic) long long numberOfCopies; // @synthesize numberOfCopies;
- (void).cxx_destruct;
- (id)doc;
- (void)setNilValueForKey:(id)arg1;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)awakeFromNib;
@end
