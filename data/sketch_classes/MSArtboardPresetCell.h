@interface MSArtboardPresetCell : NSTextFieldCell
{
BOOL _isSelected;	// 84 = 0x54
struct CGSize _presetSize;	// 88 = 0x58
}
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) struct CGSize presetSize; // @synthesize presetSize=_presetSize;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@end
