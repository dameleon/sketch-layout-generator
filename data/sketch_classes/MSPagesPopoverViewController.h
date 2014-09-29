@interface MSPagesPopoverViewController : CHViewController <NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate, MSPagesPopoverCellDelegate>
{
NSTableView *pagesTableView;	// 104 = 0x68
NSMenuItem *deletePageMenuItem;	// 112 = 0x70
NSMenuItem *separatorMenuItem;	// 120 = 0x78
BOOL ignoreTableViewSelectionDidChangeNotifications;	// 128 = 0x80
MSDocument *_document;	// 136 = 0x88
NSPopover *_parentPopover;	// 144 = 0x90
CDUnknownBlockType _nameDidChangeBlock;	// 152 = 0x98
NSOperationQueue *_operationQueue;	// 160 = 0xa0
}
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(copy, nonatomic) CDUnknownBlockType nameDidChangeBlock; // @synthesize nameDidChangeBlock=_nameDidChangeBlock;
@property(nonatomic) __weak NSPopover *parentPopover; // @synthesize parentPopover=_parentPopover;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)dealloc;
- (void)undoNotification:(id)arg1;
- (void)refreshCanvas;
- (id)pageWithID:(id)arg1;
- (id)duplicatePage:(id)arg1;
- (void)editPageNameAtRowIndex:(unsigned long long)arg1;
- (void)popoverCell:(id)arg1 duplicatePageWithID:(id)arg2;
- (void)popoverCell:(id)arg1 deletePageWithID:(id)arg2;
- (BOOL)popoverCell:(id)arg1 canDeletePageWithID:(id)arg2;
- (void)addPage:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)popoverWillClose;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)pagesPopoverCell:(id)arg1 textFielDidEndEditing:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)imageForPage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (void)renderPreviewForRow:(id)arg1 page:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)sizeToFitNumberOfPages;
- (id)pageAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (void)reload;
- (void)awakeFromNib;
@end
