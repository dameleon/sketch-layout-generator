@interface CSPerson : NSObject
{
NSString *_name;	// 8 = 0x8
NSString *_emailAddress;	// 16 = 0x10
unsigned long long _accessLevel;	// 24 = 0x18
NSString *_status;	// 32 = 0x20
}
+ (id)personWithDictionary:(id)arg1;
@property(copy) NSString *status; // @synthesize status=_status;
@property unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@end
