@interface BCAutosizingTextField : NSTextField
{
double maximumWidth;	// 200 = 0xc8
double maximumHeight;	// 208 = 0xd0
}
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth;
- (void)sizeToFitWithMaximumWidth;
@end
