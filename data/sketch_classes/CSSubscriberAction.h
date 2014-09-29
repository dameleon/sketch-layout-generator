@interface CSSubscriberAction : NSObject
{
NSString *_event;	// 8 = 0x8
NSDate *_date;	// 16 = 0x10
NSString *_IPAddress;	// 24 = 0x18
NSString *_detail;	// 32 = 0x20
}
+ (id)subscriberActionWithDictionary:(id)arg1;
@property(copy) NSString *detail; // @synthesize detail=_detail;
@property(copy) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
@end
