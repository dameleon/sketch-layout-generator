@interface MSLayoutSheet : CHSheetController <NSWindowDelegate>
{
NSButton *_centerGridButton;	// 80 = 0x50
MSLayoutGrid *_originalLayout;	// 88 = 0x58
MSLayoutGrid *_layout;	// 96 = 0x60
}
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(copy, nonatomic) MSLayoutGrid *originalLayout; // @synthesize originalLayout=_originalLayout;
@property(retain, nonatomic) NSButton *centerGridButton; // @synthesize centerGridButton=_centerGridButton;
- (void).cxx_destruct;
- (void)centerGridInArtboard;
- (void)centerGrid:(id)arg1;
- (void)gridChanged:(id)arg1;
- (void)setAsDefault:(id)arg1;
- (void)confirm:(id)arg1;
- (void)refreshView;
- (void)cancelAction:(id)arg1;
- (void)awakeFromNib;
@end
