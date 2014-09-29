@interface ECLogHandlerASL : ECLogHandler
{
struct __aslclient *aslClient;	// 16 = 0x10
NSMutableDictionary *aslMsgs;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableDictionary *aslMsgs; // @synthesize aslMsgs;
@property(nonatomic) struct __aslclient *aslClient; // @synthesize aslClient;
- (void).cxx_destruct;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (void)dealloc;
- (id)init;
@end
