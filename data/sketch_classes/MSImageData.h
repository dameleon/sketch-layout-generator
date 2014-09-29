@interface MSImageData : NSObject <NSCopying>
{
NSImage *_image;	// 8 = 0x8
NSData *_data;	// 16 = 0x10
NSString *_name;	// 24 = 0x18
NSData *_sha1;	// 32 = 0x20
MSImageCollection *_collection;	// 40 = 0x28
}
@property(retain, nonatomic) MSImageCollection *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSData *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 image:(id)arg2 data:(id)arg3 sha:(id)arg4 collection:(id)arg5;
- (id)treeAsDictionary;
@end
