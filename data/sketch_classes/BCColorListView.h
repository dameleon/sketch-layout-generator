@interface BCColorListView : BCColorPickerBaseView
{
NSArray *_colors;	// 176 = 0xb0
long long _selectedColorIndex;	// 184 = 0xb8
}
@property(readonly, nonatomic) long long selectedColorIndex; // @synthesize selectedColorIndex=_selectedColorIndex;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
@end
