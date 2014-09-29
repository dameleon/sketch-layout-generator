@interface CSAdministrator : NSObject
{
NSString *_name;	// 8 = 0x8
NSString *_emailAddress;	// 16 = 0x10
NSString *_status;	// 24 = 0x18
}
+ (id)administratorWithDictionary:(id)arg1;
@property(copy) NSString *status; // @synthesize status=_status;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@end
