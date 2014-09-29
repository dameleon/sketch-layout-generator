@interface CSOAuthConfig : NSObject
{
NSString *_accessToken;	// 8 = 0x8
NSString *_refreshToken;	// 16 = 0x10
NSDate *_accessTokenExpiresAt;	// 24 = 0x18
NSString *_clientID;	// 32 = 0x20
NSString *_clientSecret;	// 40 = 0x28
NSArray *_scope;	// 48 = 0x30
NSURL *_redirectURL;	// 56 = 0x38
NSURL *_tokenURL;	// 64 = 0x40
}
@property(retain) NSURL *tokenURL; // @synthesize tokenURL=_tokenURL;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain) NSArray *scope; // @synthesize scope=_scope;
@property(copy) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(copy) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)deleteConfig;
@property(readonly) BOOL isAccessTokenExpired; // @dynamic isAccessTokenExpired;
@property(readonly) BOOL isAuthorized; // @dynamic isAuthorized;
@property(retain) NSDate *accessTokenExpiresAt; // @synthesize accessTokenExpiresAt=_accessTokenExpiresAt;
@property(copy) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithClientID:(id)arg1 clientSecret:(id)arg2 scope:(id)arg3;
@end
