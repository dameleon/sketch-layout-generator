@interface MSUnarchiver : NSKeyedUnarchiver
{
long long _version;	// 136 = 0x88
SEL _propertyDecoder;	// 144 = 0x90
}
+ (id)unarchiveObjectFromURL:(id)arg1 actualVersion:(long long *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1 actualVersion:(long long *)arg2;
+ (id)unarchiveObjectWithData:(id)arg1 asVersion:(long long)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)defineReplacementClasses;
+ (void)initialize;
@property(readonly, nonatomic) SEL propertyDecoder; // @synthesize propertyDecoder=_propertyDecoder;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (void)setDecodingVersion:(long long)arg1;
@end
