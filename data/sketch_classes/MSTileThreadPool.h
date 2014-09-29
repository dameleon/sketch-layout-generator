@interface MSTileThreadPool : NSObject
{
long long nextThreadIndex;	// 8 = 0x8
NSMutableArray *_threads;	// 16 = 0x10
}
+ (id)thread;
+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *threads; // @synthesize threads=_threads;
- (void).cxx_destruct;
- (id)thread;
- (void)threadMain;
- (id)init;
@end
