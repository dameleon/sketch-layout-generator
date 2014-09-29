@interface CSWebhook : NSObject
{
NSString *_webhookID;	// 8 = 0x8
NSString *_url;	// 16 = 0x10
NSString *_status;	// 24 = 0x18
NSString *_payloadFormat;	// 32 = 0x20
NSArray *_events;	// 40 = 0x28
}
+ (id)webhookWithDictionary:(id)arg1;
@property(retain) NSArray *events; // @synthesize events=_events;
@property(copy) NSString *payloadFormat; // @synthesize payloadFormat=_payloadFormat;
@property(copy) NSString *status; // @synthesize status=_status;
@property(copy) NSString *url; // @synthesize url=_url;
@property(copy) NSString *webhookID; // @synthesize webhookID=_webhookID;
- (void).cxx_destruct;
@end
