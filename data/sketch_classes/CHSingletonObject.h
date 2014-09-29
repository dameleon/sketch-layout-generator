@interface CHSingletonObject : NSObject
{
}
+ (id)sharedController;
- (void)awakeFromNib;
- (id)init;
@end
