@interface MSGradientPointArray : MSPointArray
{
id _delegate;	// 16 = 0x10
}
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)replacePointAtIndex:(unsigned long long)arg1 withPoint:(struct CGPoint)arg2;
@end
