@interface CSClient : NSObject
{
BOOL _canPurchaseCredits;	// 8 = 0x8
BOOL _clientPays;	// 9 = 0x9
float _markupOnDesignSpamTest;	// 12 = 0xc
float _baseRatePerRecipient;	// 16 = 0x10
float _markupPerRecipient;	// 20 = 0x14
float _markupOnDelivery;	// 24 = 0x18
float _baseDeliveryRate;	// 28 = 0x1c
float _baseDesignSpamTestRate;	// 32 = 0x20
NSString *_clientID;	// 40 = 0x28
NSString *_name;	// 48 = 0x30
NSString *_APIKey;	// 56 = 0x38
NSString *_username;	// 64 = 0x40
unsigned long long _accessLevel;	// 72 = 0x48
NSString *_contactName;	// 80 = 0x50
NSString *_emailAddress;	// 88 = 0x58
NSString *_country;	// 96 = 0x60
NSString *_timezone;	// 104 = 0x68
unsigned long long _credits;	// 112 = 0x70
NSString *_currency;	// 120 = 0x78
NSString *_monthlyScheme;	// 128 = 0x80
}
+ (id)clientWithDictionary:(id)arg1;
@property(copy) NSString *monthlyScheme; // @synthesize monthlyScheme=_monthlyScheme;
@property(copy) NSString *currency; // @synthesize currency=_currency;
@property float baseDesignSpamTestRate; // @synthesize baseDesignSpamTestRate=_baseDesignSpamTestRate;
@property float baseDeliveryRate; // @synthesize baseDeliveryRate=_baseDeliveryRate;
@property float markupOnDelivery; // @synthesize markupOnDelivery=_markupOnDelivery;
@property float markupPerRecipient; // @synthesize markupPerRecipient=_markupPerRecipient;
@property float baseRatePerRecipient; // @synthesize baseRatePerRecipient=_baseRatePerRecipient;
@property float markupOnDesignSpamTest; // @synthesize markupOnDesignSpamTest=_markupOnDesignSpamTest;
@property BOOL clientPays; // @synthesize clientPays=_clientPays;
@property unsigned long long credits; // @synthesize credits=_credits;
@property BOOL canPurchaseCredits; // @synthesize canPurchaseCredits=_canPurchaseCredits;
@property(copy) NSString *timezone; // @synthesize timezone=_timezone;
@property(copy) NSString *country; // @synthesize country=_country;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *contactName; // @synthesize contactName=_contactName;
@property unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
@end
