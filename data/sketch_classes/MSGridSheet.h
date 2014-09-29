@interface MSGridSheet : CHSheetController <NSWindowDelegate>
{
NSButton *_centerGridButton;	// 80 = 0x50
MSSimpleGrid *_originalGrid;	// 88 = 0x58
MSSimpleGrid *_grid;	// 96 = 0x60
}
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(copy, nonatomic) MSSimpleGrid *originalGrid; // @synthesize originalGrid=_originalGrid;
@property(retain, nonatomic) NSButton *centerGridButton; // @synthesize centerGridButton=_centerGridButton;
- (void).cxx_destruct;
- (void)gridChanged:(id)arg1;
- (void)setAsDefault:(id)arg1;
- (void)confirm:(id)arg1;
- (void)refreshView;
- (void)cancelAction:(id)arg1;
- (void)awakeFromNib;
@end
