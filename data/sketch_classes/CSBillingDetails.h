@interface CSBillingDetails : NSObject
{
unsigned long long _credits;	// 8 = 0x8
}
+ (id)billingDetailsWithDictionary:(id)arg1;
@property unsigned long long credits; // @synthesize credits=_credits;
@end
