@interface MSVersionedArchive : NSObject
{
NSURL *_url;	// 8 = 0x8
NSData *_data;	// 16 = 0x10
unsigned long long _version;	// 24 = 0x18
NSString *_alternateFolder;	// 32 = 0x20
}
+ (id)globalDirectory;
+ (id)globalArchiveWithName:(id)arg1 extension:(id)arg2 version:(long long)arg3;
@property(retain, nonatomic) NSString *alternateFolder; // @synthesize alternateFolder=_alternateFolder;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (BOOL)archiveRootObject:(id)arg1 error:(id *)arg2;
- (id)unarchiveRootObjectVersion:(long long *)arg1 error:(id *)arg2;
- (id)existingURL;
- (id)existingURLBasedOnFullURL:(id)arg1;
- (id)versionedURLWithBase:(id)arg1 extension:(id)arg2 version:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 version:(long long)arg2;
@end
