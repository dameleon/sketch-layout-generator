@interface MSBlockAnimation : CABasicAnimation
{
BOOL executed;	// 20 = 0x14
CDUnknownBlockType block;	// 24 = 0x18
}
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
@end
