@interface CSSegmentRule : NSObject
{
NSString *_subject;	// 8 = 0x8
NSArray *_clauses;	// 16 = 0x10
}
+ (id)segmentRuleWithDictionary:(id)arg1;
+ (id)segmentRuleWithSubject:(id)arg1 clauses:(id)arg2;
@property(retain) NSArray *clauses; // @synthesize clauses=_clauses;
@property(copy) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (id)dictionaryValue;
@end
