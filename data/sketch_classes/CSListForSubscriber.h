@interface CSListForSubscriber : NSObject
{
NSString *_listID;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
NSString *_subscriberState;	// 24 = 0x18
NSDate *_dateSubscriberAdded;	// 32 = 0x20
}
+ (id)listWithDictionary:(id)arg1;
@property(retain) NSDate *dateSubscriberAdded; // @synthesize dateSubscriberAdded=_dateSubscriberAdded;
@property(copy) NSString *subscriberState; // @synthesize subscriberState=_subscriberState;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *listID; // @synthesize listID=_listID;
- (void).cxx_destruct;
@end
