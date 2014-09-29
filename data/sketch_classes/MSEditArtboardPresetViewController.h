@interface MSEditArtboardPresetViewController : NSViewController
{
BOOL _canCancel;	// 104 = 0x68
NSMutableDictionary *_preset;	// 112 = 0x70
CDUnknownBlockType _completionBlock;	// 120 = 0x78
NSTextField *_nameField;	// 128 = 0x80
NSButton *_cancelButton;	// 136 = 0x88
CDUnknownBlockType _cancelBlock;	// 144 = 0x90
}
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSMutableDictionary *preset; // @synthesize preset=_preset;
- (void).cxx_destruct;
- (void)close;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
