@interface MSSearchField : NSSearchField
{
PXListView *_layerListView;	// 216 = 0xd8
}
@property(nonatomic) __weak PXListView *layerListView; // @synthesize layerListView=_layerListView;
- (void).cxx_destruct;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)moveFocusToTableView;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
@end
