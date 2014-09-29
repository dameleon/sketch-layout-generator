@interface BCBonjourController : NSObject
{
NSArray *_clients;	// 8 = 0x8
CDUnknownBlockType _handler;	// 16 = 0x10
unsigned long long _index;	// 24 = 0x18
BCBonjourBrowser *_browser;	// 32 = 0x20
NSMutableSet *_autoConnectClients;	// 40 = 0x28
}
@property(retain, nonatomic) NSMutableSet *autoConnectClients; // @synthesize autoConnectClients=_autoConnectClients;
@property(retain, nonatomic) BCBonjourBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)setAutoConnectForClient:(id)arg1 value:(BOOL)arg2;
- (BOOL)shouldAutoConnectClient:(id)arg1;
- (unsigned long long)indexOfClientWithName:(id)arg1;
- (void)removeClientForService:(id)arg1;
- (id)addClientForService:(id)arg1;
- (void)removeObjectFromClientsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inClientsAtIndex:(unsigned long long)arg2;
- (void)broadcastMessage:(id)arg1;
- (BOOL)hasConnections;
@property(readonly, nonatomic) NSArray *availableClients;
@property(readonly, nonatomic) NSArray *connectedClients;
- (void)cleanup;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
@end
