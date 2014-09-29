@interface CSSuppressedRecipient : NSObject
{
NSString *_suppressionReason;	// 8 = 0x8
NSString *_emailAddress;	// 16 = 0x10
NSDate *_date;	// 24 = 0x18
NSString *_state;	// 32 = 0x20
}
@property(copy) NSString *state; // @synthesize state=_state;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *suppressionReason; // @synthesize suppressionReason=_suppressionReason;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@end
