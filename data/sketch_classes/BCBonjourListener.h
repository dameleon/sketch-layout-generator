@interface BCBonjourListener : NSObject
{
int _port;	// 8 = 0x8
CDUnknownBlockType _handler;	// 16 = 0x10
struct __CFSocket *_socket4;	// 24 = 0x18
struct __CFRunLoopSource *_source4;	// 32 = 0x20
struct __CFSocket *_socket6;	// 40 = 0x28
struct __CFRunLoopSource *_source6;	// 48 = 0x30
}
@property(nonatomic) struct __CFRunLoopSource *source6; // @synthesize source6=_source6;
@property(nonatomic) struct __CFSocket *socket6; // @synthesize socket6=_socket6;
@property(nonatomic) struct __CFRunLoopSource *source4; // @synthesize source4=_source4;
@property(nonatomic) struct __CFSocket *socket4; // @synthesize socket4=_socket4;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) int port; // @synthesize port=_port;
- (void).cxx_destruct;
- (void)acceptConnectionFromAddress:(struct __CFData *)arg1 onSocket:(int)arg2;
- (struct __CFSocket *)newSocket:(id *)arg1 ip4:(BOOL)arg2 source:(struct __CFRunLoopSource **)arg3;
- (struct __CFRunLoopSource *)newRunLoopSourceForSocket:(struct __CFSocket *)arg1;
- (void)stop;
- (BOOL)start:(id *)arg1;
- (void)dealloc;
- (id)initWithConnectionHandler:(CDUnknownBlockType)arg1;
@end
