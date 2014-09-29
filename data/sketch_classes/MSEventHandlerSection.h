@interface MSEventHandlerSection : NSViewController <MSSectionProtocol>
{
MSEventHandler *handler;	// 104 = 0x68
}
@property(retain, nonatomic) MSEventHandler *handler; // @synthesize handler;
- (void).cxx_destruct;
- (id)views;
@property(readonly, nonatomic) id <MSBasicDelegate> delegate; // @dynamic delegate;
- (id)nibNameForHandler:(id)arg1;
- (id)initWithHandler:(id)arg1;
@end
