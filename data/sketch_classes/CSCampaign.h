@interface CSCampaign : NSObject
{
NSString *_campaignID;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
NSString *_subject;	// 24 = 0x18
NSString *_fromName;	// 32 = 0x20
NSString *_fromEmail;	// 40 = 0x28
NSString *_replyTo;	// 48 = 0x30
NSString *_webVersionPage;	// 56 = 0x38
NSString *_webVersionTextPage;	// 64 = 0x40
NSString *_previewPage;	// 72 = 0x48
NSString *_previewTextPage;	// 80 = 0x50
NSDate *_dateCreated;	// 88 = 0x58
NSDate *_dateScheduled;	// 96 = 0x60
NSString *_scheduledTimeZone;	// 104 = 0x68
NSDate *_dateSent;	// 112 = 0x70
unsigned long long _totalRecipients;	// 120 = 0x78
}
+ (id)campaignWithDictionary:(id)arg1;
@property unsigned long long totalRecipients; // @synthesize totalRecipients=_totalRecipients;
@property(retain) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy) NSString *scheduledTimeZone; // @synthesize scheduledTimeZone=_scheduledTimeZone;
@property(retain) NSDate *dateScheduled; // @synthesize dateScheduled=_dateScheduled;
@property(retain) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy) NSString *previewTextPage; // @synthesize previewTextPage=_previewTextPage;
@property(copy) NSString *previewPage; // @synthesize previewPage=_previewPage;
@property(copy) NSString *webVersionTextPage; // @synthesize webVersionTextPage=_webVersionTextPage;
@property(copy) NSString *webVersionPage; // @synthesize webVersionPage=_webVersionPage;
@property(copy) NSString *replyTo; // @synthesize replyTo=_replyTo;
@property(copy) NSString *fromEmail; // @synthesize fromEmail=_fromEmail;
@property(copy) NSString *fromName; // @synthesize fromName=_fromName;
@property(copy) NSString *subject; // @synthesize subject=_subject;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *campaignID; // @synthesize campaignID=_campaignID;
- (void).cxx_destruct;
@end
