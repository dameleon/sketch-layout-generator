@interface CSCampaignRecipient : NSObject
{
float _latitude;	// 8 = 0x8
float _longitude;	// 12 = 0xc
NSString *_emailAddress;	// 16 = 0x10
NSString *_listID;	// 24 = 0x18
NSDate *_date;	// 32 = 0x20
NSString *_IPAddress;	// 40 = 0x28
NSString *_city;	// 48 = 0x30
NSString *_region;	// 56 = 0x38
NSString *_countryCode;	// 64 = 0x40
NSString *_countryName;	// 72 = 0x48
}
@property(copy) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy) NSString *region; // @synthesize region=_region;
@property(copy) NSString *city; // @synthesize city=_city;
@property float longitude; // @synthesize longitude=_longitude;
@property float latitude; // @synthesize latitude=_latitude;
@property(copy) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *listID; // @synthesize listID=_listID;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@end
