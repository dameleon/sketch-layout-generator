@interface MSDuplicateOffsetTracker : NSObject
{
long long multiplier;	// 8 = 0x8
}
- (double)offset;
- (void)increment;
- (void)resetToInitialOffset;
- (void)reset;
@end
