@interface SVGPathScanner : NSObject
{
NSScanner *_scanner;	// 8 = 0x8
NSCharacterSet *_number;	// 16 = 0x10
NSString *_commandBuffer;	// 24 = 0x18
unsigned long long _commandPosition;	// 32 = 0x20
}
@property(nonatomic) unsigned long long commandPosition; // @synthesize commandPosition=_commandPosition;
@property(retain, nonatomic) NSString *commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(retain, nonatomic) NSCharacterSet *number; // @synthesize number=_number;
@property(retain, nonatomic) NSScanner *scanner; // @synthesize scanner=_scanner;
- (void).cxx_destruct;
- (double)nextFloat;
- (BOOL)nextCommand;
- (id)initWithString:(id)arg1;
@end
