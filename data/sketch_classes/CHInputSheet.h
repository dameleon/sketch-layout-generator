@interface CHInputSheet : CHSheetController
{
NSTextField *titleField;	// 80 = 0x50
NSTextField *subtitleField;	// 88 = 0x58
NSTextField *fieldTitleField;	// 96 = 0x60
NSTextField *inputField;	// 104 = 0x68
}
- (void).cxx_destruct;
- (void)confirm:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setFieldTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
@end
