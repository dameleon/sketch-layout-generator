@interface CSSubscriberHistoryItem : NSObject
{
NSString *_typeID;	// 8 = 0x8
NSString *_type;	// 16 = 0x10
NSString *_name;	// 24 = 0x18
NSArray *_actions;	// 32 = 0x20
}
+ (id)subscriberHistoryItemWithDictionary:(id)arg1;
@property(retain) NSArray *actions; // @synthesize actions=_actions;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *type; // @synthesize type=_type;
@property(copy) NSString *typeID; // @synthesize typeID=_typeID;
- (void).cxx_destruct;
@end
