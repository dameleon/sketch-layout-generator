@interface ECASLClient : NSObject
{
struct __aslclient *client;	// 8 = 0x8
struct __aslmsg *msg;	// 16 = 0x10
}
+ (id)sharedInstance;
@property(nonatomic) struct __aslmsg *msg; // @synthesize msg;
@property(nonatomic) struct __aslclient *client; // @synthesize client;
- (void)error:(id)arg1;
- (void)log:(id)arg1;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2;
- (void)logAtLevel:(int)arg1 withFormat:(id)arg2 args:(struct __va_list_tag [1])arg3;
- (void)dealloc;
- (id)initWithName:(id)arg1;
@end
