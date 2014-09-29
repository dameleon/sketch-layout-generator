@interface BCAutosizingTokenField : NSTokenField
{
double maximumWidth;	// 240 = 0xf0
}
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth;
- (void)sizeToFitWithMaximumWidth;
@end
