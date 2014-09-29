@interface CSSubscriber : NSObject
{
NSString *_emailAddress;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
NSDate *_date;	// 24 = 0x18
NSString *_state;	// 32 = 0x20
NSArray *_customFields;	// 40 = 0x28
NSString *_readsEmailWith;	// 48 = 0x30
}
+ (id)dictionaryWithEmailAddress:(id)arg1 name:(id)arg2 customFieldValues:(id)arg3;
+ (id)subscriberWithDictionary:(id)arg1;
+ (id)subscriberWithEmailAddress:(id)arg1 name:(id)arg2 customFields:(id)arg3;
@property(copy) NSString *readsEmailWith; // @synthesize readsEmailWith=_readsEmailWith;
@property(retain) NSArray *customFields; // @synthesize customFields=_customFields;
@property(copy) NSString *state; // @synthesize state=_state;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@end
