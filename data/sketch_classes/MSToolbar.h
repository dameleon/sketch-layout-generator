@interface MSToolbar : NSToolbar
{
BOOL shouldChange;	// 128 = 0x80
}
- (void)setSizeMode:(unsigned long long)arg1;
- (void)finishedSetUp;
@end
