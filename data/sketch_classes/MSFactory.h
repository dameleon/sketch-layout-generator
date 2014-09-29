@interface MSFactory : CHSingletonObject
{
NSMutableArray *factoryObjects;	// 8 = 0x8
MSVersionedArchive *_archive;	// 16 = 0x10
}
+ (id)filename;
+ (id)factory;
@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (unsigned long long)indexOfObjectByComparingPointers:(id)arg1;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)load;
- (void)save;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
@end
