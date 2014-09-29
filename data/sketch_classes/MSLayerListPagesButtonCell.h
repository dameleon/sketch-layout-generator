@interface MSLayerListPagesButtonCell : NSButtonCell
{
NSString *_pageCountLabel;	// 120 = 0x78
}
@property(copy, nonatomic) NSString *pageCountLabel; // @synthesize pageCountLabel=_pageCountLabel;
- (void).cxx_destruct;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@end
