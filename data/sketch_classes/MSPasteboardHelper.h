@interface MSPasteboardHelper : NSObject
{
id <MSBasicDelegate> _delegate;	// 8 = 0x8
NSPasteboard *_pasteboard;	// 16 = 0x10
}
@property(retain, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@end
