@interface MSLineHeightTextFieldCell : NSTextFieldCell
{
BOOL _forceNormalDraw;	// 84 = 0x54
double _autoValue;	// 88 = 0x58
}
@property(nonatomic) BOOL forceNormalDraw; // @synthesize forceNormalDraw=_forceNormalDraw;
@property(nonatomic) double autoValue; // @synthesize autoValue=_autoValue;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@end
