@interface ECErrorAndMessage : NSObject
{
NSString *_message;	// 8 = 0x8
NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
@end
