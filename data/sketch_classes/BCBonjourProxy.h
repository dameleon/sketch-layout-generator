@interface BCBonjourProxy : NSObject <NSNetServiceDelegate>
{
CDUnknownBlockType _handler;	// 8 = 0x8
NSUUID *_uuid;	// 16 = 0x10
NSString *_model;	// 24 = 0x18
NSString *_systemName;	// 32 = 0x20
NSString *_systemVersion;	// 40 = 0x28
NSString *_idiom;	// 48 = 0x30
long long _state;	// 56 = 0x38
long long _remoteState;	// 64 = 0x40
BCBonjourConnection *_connection;	// 72 = 0x48
NSNetService *_service;	// 80 = 0x50
NSDictionary *_extendedInfo;	// 88 = 0x58
}
+ (id)keyPathsForValuesAffectingRemoteStateString;
+ (id)keyPathsForValuesAffectingStateString;
+ (id)keyPathsForValuesAffectingSystem;
+ (id)keyPathsForValuesAffectingConnected;
@property(retain, nonatomic) NSDictionary *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
@property(retain, nonatomic) NSNetService *service; // @synthesize service=_service;
@property(retain, nonatomic) BCBonjourConnection *connection; // @synthesize connection=_connection;
@property long long remoteState; // @synthesize remoteState=_remoteState;
@property long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *idiom; // @synthesize idiom=_idiom;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)updateInfo:(id)arg1;
- (id)description;
- (void)sendMessage:(id)arg1;
- (void)startConnecting;
- (int)openSocket;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) NSString *remoteStateString;
@property(readonly, nonatomic) NSString *stateString;
@property(readonly, nonatomic) NSString *system;
@property(readonly, nonatomic) NSString *name;
- (BOOL)connected;
- (void)disconnect;
- (void)connect;
- (void)updateWithService:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)initWithService:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)forceConnect;
@end
