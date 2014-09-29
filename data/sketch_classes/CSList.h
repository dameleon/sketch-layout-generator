@interface CSList : NSObject
{
BOOL _confirmOptIn;	// 8 = 0x8
NSString *_listID;	// 16 = 0x10
NSString *_name;	// 24 = 0x18
NSString *_unsubscribePage;	// 32 = 0x20
NSString *_confirmationSuccessPage;	// 40 = 0x28
NSString *_unsubscribeSetting;	// 48 = 0x30
}
+ (id)listWithDictionary:(id)arg1;
@property BOOL confirmOptIn; // @synthesize confirmOptIn=_confirmOptIn;
@property(copy) NSString *unsubscribeSetting; // @synthesize unsubscribeSetting=_unsubscribeSetting;
@property(copy) NSString *confirmationSuccessPage; // @synthesize confirmationSuccessPage=_confirmationSuccessPage;
@property(copy) NSString *unsubscribePage; // @synthesize unsubscribePage=_unsubscribePage;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *listID; // @synthesize listID=_listID;
- (void).cxx_destruct;
@end
