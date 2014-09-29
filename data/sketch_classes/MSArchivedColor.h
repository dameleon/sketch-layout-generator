@interface MSArchivedColor : NSObject <NSCoding>
{
double r;	// 8 = 0x8
double g;	// 16 = 0x10
double b;	// 24 = 0x18
double a;	// 32 = 0x20
}
+ (id)archivedColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end
