@interface MSDefaultArchive : CHSingletonObject
{
MSVersionedArchive *_archive;	// 8 = 0x8
}
@property(retain, nonatomic) MSVersionedArchive *archive; // @synthesize archive=_archive;
- (void).cxx_destruct;
- (void)setDefaultObject:(id)arg1;
- (id)newObject;
- (id)defaultObject;
- (Class)defaultClass;
- (id)oldDefaultsName;
- (id)filename;
@end
