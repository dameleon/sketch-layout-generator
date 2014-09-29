@interface MSModelObjectInstanceInfo : NSObject
{
unsigned long long _current;	// 8 = 0x8
unsigned long long _total;	// 16 = 0x10
}
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) unsigned long long current; // @synthesize current=_current;
- (id)description;
@end
