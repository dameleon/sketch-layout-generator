@interface CSCampaignBouncedRecipient : CSCampaignRecipient
{
NSString *_bounceType;	// 8 = 0x8
NSString *_reason;	// 16 = 0x10
}
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property(copy) NSString *bounceType; // @synthesize bounceType=_bounceType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@end
