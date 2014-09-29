@interface BCBonjourConnection : NSObject <NSStreamDelegate>
{
BOOL _closing;	// 8 = 0x8
int _socket;	// 12 = 0xc
CDUnknownBlockType _handler;	// 16 = 0x10
NSObject<OS_dispatch_io> *_channel;	// 24 = 0x18
NSObject<OS_dispatch_queue> *_networkQueue;	// 32 = 0x20
NSObject<OS_dispatch_queue> *_archiveQueue;	// 40 = 0x28
NSObject<OS_dispatch_source> *_pingTimer;	// 48 = 0x30
}
@property(nonatomic) BOOL closing; // @synthesize closing=_closing;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pingTimer; // @synthesize pingTimer=_pingTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *archiveQueue; // @synthesize archiveQueue=_archiveQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *channel; // @synthesize channel=_channel;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)opened;
- (void)closed;
- (void)reportIOError:(int)arg1 code:(unsigned long long)arg2 channel:(id)arg3;
- (void)sendDictionary:(id)arg1 terminateWhenDone:(BOOL)arg2;
- (void)disablePingTimer;
- (void)enablePingTimer;
- (void)sendDictionary:(id)arg1;
- (void)receivedDictionary:(id)arg1;
- (void)unarchiveDictionary:(id)arg1;
- (void)readDictionaryDataOfSize:(unsigned long long)arg1;
- (void)readDictionary;
- (void)dealloc;
- (void)shutdownChannel:(id)arg1;
- (void)configureSocket:(int)arg1;
- (void)close;
- (id)initWithSocket:(int)arg1 handler:(CDUnknownBlockType)arg2;
@end
