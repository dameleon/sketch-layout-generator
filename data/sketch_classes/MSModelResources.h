@interface MSModelResources : CHSingletonObject
{
NSBundle *_bundle;	// 8 = 0x8
NSArray *_noiseImages;	// 16 = 0x10
unsigned long long _status;	// 24 = 0x18
}
+ (id)sharedInstance;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *noiseImages; // @synthesize noiseImages=_noiseImages;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)loadNoiseImageWithIndex:(long long)arg1;
- (void)preloadResources;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForImageResource:(id)arg1;
@end
