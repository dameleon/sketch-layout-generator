@interface MSFontFamilyPickerViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, BCPopoverContentController>
{
CDUnknownBlockType _completionBlock;	// 104 = 0x68
MSFontList *_fontList;	// 112 = 0x70
NSTableView *_tableView;	// 120 = 0x78
}
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)searchFieldAction:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)doubleClickTableView:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
