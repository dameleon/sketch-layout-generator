@interface CSSegment : NSObject
{
NSString *_segmentID;	// 8 = 0x8
NSString *_listID;	// 16 = 0x10
NSString *_title;	// 24 = 0x18
NSArray *_rules;	// 32 = 0x20
unsigned long long _activeSubscriberCount;	// 40 = 0x28
}
+ (id)segmentWithDictionary:(id)arg1;
@property unsigned long long activeSubscriberCount; // @synthesize activeSubscriberCount=_activeSubscriberCount;
@property(retain) NSArray *rules; // @synthesize rules=_rules;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSString *listID; // @synthesize listID=_listID;
@property(copy) NSString *segmentID; // @synthesize segmentID=_segmentID;
- (void).cxx_destruct;
@end
