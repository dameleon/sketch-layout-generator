@interface CSCampaignEmailClient : NSObject
{
float _percentage;	// 8 = 0x8
NSString *_client;	// 16 = 0x10
NSString *_version;	// 24 = 0x18
unsigned long long _subscribers;	// 32 = 0x20
}
+ (id)campaignEmailClientWithDictionary:(id)arg1;
@property unsigned long long subscribers; // @synthesize subscribers=_subscribers;
@property float percentage; // @synthesize percentage=_percentage;
@property(copy) NSString *version; // @synthesize version=_version;
@property(copy) NSString *client; // @synthesize client=_client;
- (void).cxx_destruct;
@end
