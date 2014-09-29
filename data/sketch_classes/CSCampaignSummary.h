@interface CSCampaignSummary : NSObject
{
unsigned long long _recipientCount;	// 8 = 0x8
unsigned long long _openedCount;	// 16 = 0x10
unsigned long long _clickCount;	// 24 = 0x18
unsigned long long _unsubscribedCount;	// 32 = 0x20
unsigned long long _bouncedCount;	// 40 = 0x28
unsigned long long _uniqueOpenedCount;	// 48 = 0x30
unsigned long long _spamComplaints;	// 56 = 0x38
unsigned long long _forwardsCount;	// 64 = 0x40
unsigned long long _likesCount;	// 72 = 0x48
unsigned long long _mentionsCount;	// 80 = 0x50
NSString *_webVersionPage;	// 88 = 0x58
NSString *_webVersionTextPage;	// 96 = 0x60
NSString *_worldviewURL;	// 104 = 0x68
}
+ (id)campaignSummaryWithDictionary:(id)arg1;
@property(copy) NSString *worldviewURL; // @synthesize worldviewURL=_worldviewURL;
@property(copy) NSString *webVersionTextPage; // @synthesize webVersionTextPage=_webVersionTextPage;
@property(copy) NSString *webVersionPage; // @synthesize webVersionPage=_webVersionPage;
@property unsigned long long mentionsCount; // @synthesize mentionsCount=_mentionsCount;
@property unsigned long long likesCount; // @synthesize likesCount=_likesCount;
@property unsigned long long forwardsCount; // @synthesize forwardsCount=_forwardsCount;
@property unsigned long long spamComplaints; // @synthesize spamComplaints=_spamComplaints;
@property unsigned long long uniqueOpenedCount; // @synthesize uniqueOpenedCount=_uniqueOpenedCount;
@property unsigned long long bouncedCount; // @synthesize bouncedCount=_bouncedCount;
@property unsigned long long unsubscribedCount; // @synthesize unsubscribedCount=_unsubscribedCount;
@property unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property unsigned long long openedCount; // @synthesize openedCount=_openedCount;
@property unsigned long long recipientCount; // @synthesize recipientCount=_recipientCount;
- (void).cxx_destruct;
@end
