@interface MSDocumentWrapper : NSObject
{
NSFileWrapper *_wrapper;	// 8 = 0x8
NSString *_type;	// 16 = 0x10
NSDictionary *_metadata;	// 24 = 0x18
}
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSFileWrapper *wrapper; // @synthesize wrapper=_wrapper;
- (void).cxx_destruct;
- (void)repair;
- (id)fileWrapperForDocumentData:(id)arg1 url:(id)arg2;
- (id)wrappersForDocumentData:(id)arg1 url:(id)arg2;
- (long long)version;
- (long long)metadataVersion;
- (long long)standaloneVersion;
- (id)data;
- (unsigned long long)dataSize;
- (id)dataFile;
- (id)readDataWithError:(id *)arg1;
- (id)validate;
- (id)missingFonts;
- (BOOL)isValidType;
- (id)initWithDocumentData:(id)arg1 url:(id)arg2;
- (id)initWithWrapper:(id)arg1 type:(id)arg2;
- (id)initWithURL:(id)arg1;
@end
