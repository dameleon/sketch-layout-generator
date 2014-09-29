@interface MSModelFileHeader : NSObject <NSCoding>
{
long long _version;	// 8 = 0x8
NSDictionary *_metadata;	// 16 = 0x10
id _root;	// 24 = 0x18
}
+ (id)latestMetadata;
@property(retain, nonatomic) id root; // @synthesize root=_root;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end
