@interface MSPatternFactory : CHSingletonObject
{
NSArray *directoryContents;	// 8 = 0x8
NSMutableArray *patternCache;	// 16 = 0x10
}
@property(retain, nonatomic) NSArray *directoryContents; // @synthesize directoryContents;
@property(retain, nonatomic) NSMutableArray *patternCache; // @synthesize patternCache;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;
- (void)addPatternImage:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (id)patternImageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPatternImages;
- (id)savePath;
- (void)resetCache;
- (id)init;
@end
