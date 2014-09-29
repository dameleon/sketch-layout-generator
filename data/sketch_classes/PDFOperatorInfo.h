@interface PDFOperatorInfo : NSObject
{
SEL _selector;	// 8 = 0x8
CDUnknownFunctionPointerType _callback;	// 16 = 0x10
NSString *_operatorName;	// 24 = 0x18
NSString *_methodName;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (id)description;
@end
