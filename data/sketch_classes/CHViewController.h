@interface CHViewController : NSViewController
{
CHViewController *_parentViewController;	// 104 = 0x68
NSArray *_childViewControllers;	// 112 = 0x70
}
@property(copy, nonatomic) NSArray *childViewControllers; // @synthesize childViewControllers=_childViewControllers;
@property(nonatomic) __weak CHViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)setTargetsToNil:(id)arg1;
- (void)dealloc;
- (id)firstResponderAlternativeForLosingFocus;
- (void)viewControllerWillDisappear;
- (id)rootViewController;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)init;
@end
