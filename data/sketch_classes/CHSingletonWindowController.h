@interface CHSingletonWindowController : NSWindowController
{
}
+ (id)sharedController;
+ (BOOL)hasSharedController;
- (void)awakeFromNib;
- (id)initWithWindowNibName:(id)arg1;
@end
