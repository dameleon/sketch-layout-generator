@interface MSPair : NSObject
{
id first;	// 8 = 0x8
id second;	// 16 = 0x10
}
+ (id)pairWith:(id)arg1 and:(id)arg2;
@property(retain, nonatomic) id second; // @synthesize second;
@property(retain, nonatomic) id first; // @synthesize first;
- (void).cxx_destruct;
@end
