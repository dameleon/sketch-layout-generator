@interface CHTuple : NSObject
{
id _first;	// 8 = 0x8
id _second;	// 16 = 0x10
}
+ (id)tupleWith:(id)arg1 and:(id)arg2;
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)each:(CDUnknownBlockType)arg1;
@end
