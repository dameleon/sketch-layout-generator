@interface MSLayerListViewController : NSViewController <MSSourceListViewDelegate, NSMenuDelegate, NSPopoverDelegate>
{
MSSourceListView *listView;	// 104 = 0x68
MSLayerListConstructor *listMaker;	// 112 = 0x70
MSPage *currentPage;	// 120 = 0x78
BOOL ignoreNextSelectionChangeNotification;	// 128 = 0x80
BOOL ignoreNextDocumentSelectionNotification;	// 129 = 0x81
id <MSBasicDelegate> _delegate;	// 136 = 0x88
MSDocument *_document;	// 144 = 0x90
NSButton *_pagesPopoverButton;	// 152 = 0x98
NSSearchField *_layerSearchField;	// 160 = 0xa0
NSButton *_includeLayersButton;	// 168 = 0xa8
NSButton *_includeSlicesButton;	// 176 = 0xb0
NSArray *_list;	// 184 = 0xb8
NSString *_layerContainerKey;	// 192 = 0xc0
NSPopover *_pagesPopover;	// 200 = 0xc8
}
@property(retain, nonatomic) NSPopover *pagesPopover; // @synthesize pagesPopover=_pagesPopover;
@property(copy, nonatomic) NSString *layerContainerKey; // @synthesize layerContainerKey=_layerContainerKey;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSButton *includeSlicesButton; // @synthesize includeSlicesButton=_includeSlicesButton;
@property(retain, nonatomic) NSButton *includeLayersButton; // @synthesize includeLayersButton=_includeLayersButton;
@property(nonatomic) __weak NSSearchField *layerSearchField; // @synthesize layerSearchField=_layerSearchField;
@property(nonatomic) __weak NSButton *pagesPopoverButton; // @synthesize pagesPopoverButton=_pagesPopoverButton;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)findLayer:(id)arg1;
- (void)collapseGroupsInLayerList:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)editingDidEndDelayed;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)searchResultsForTerm:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1 matchingSearchTerm:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)currentPageDidChange;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)pagesPopoverButtonAction:(id)arg1;
- (void)dropPaths:(id)arg1 onPath:(id)arg2 atPosition:(unsigned long long)arg3;
- (void)dropPaths:(id)arg1 onShape:(id)arg2;
- (void)dropShapes:(id)arg1 onShape:(id)arg2;
- (void)dropLayers:(id)arg1 onGroup:(id)arg2;
- (void)dropLayers:(id)arg1 onLayer:(id)arg2 atPosition:(unsigned long long)arg3;
- (BOOL)listView:(id)arg1 acceptDrop:(id)arg2 row:(unsigned long long)arg3 dropHighlight:(unsigned long long)arg4;
- (unsigned long long)listView:(id)arg1 validateDrop:(id)arg2 proposedRow:(unsigned long long)arg3 proposedDropHighlight:(unsigned long long)arg4;
- (unsigned long long)dropTypeForDraggingIndexes:(id)arg1 onRow:(unsigned long long)arg2 withHighlight:(unsigned long long)arg3;
- (BOOL)layersContainSymbols:(id)arg1;
- (BOOL)layer:(id)arg1 isDescendantOfLayerInArray:(id)arg2;
- (BOOL)layer:(id)arg1 isDescendantOfLayer:(id)arg2;
- (id)formatForDraggedLayer:(id)arg1;
- (BOOL)listView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)renameLayer:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)listView:(id)arg1 cellForRow:(unsigned long long)arg2;
- (double)listView:(id)arg1 heightOfRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInListView:(id)arg1;
- (void)layerCellEditAction:(id)arg1;
- (id)listView:(id)arg1 actualSelectionIndexes:(id)arg2;
- (id)listView:(id)arg1 menuForEvent:(id)arg2;
- (void)setNumberOfSlicesLabel:(unsigned long long)arg1;
- (void)coalescedReloadDataNotification:(id)arg1;
- (void)reloadData;
- (void)selectLayers:(id)arg1;
- (void)resizeRootOfGroupAndParents:(id)arg1;
- (void)listViewSelectionDidChange:(id)arg1;
- (BOOL)layerNameIsBeingEdited;
- (id)selectionIndexForSelectingItemsInLayerListBasedOnCanvasSelection;
- (void)selectItemsInLayerListBasedOnCanvasSelection;
- (BOOL)selectedLayerParentsChanged;
- (BOOL)anySelectedLayerNotCurrentlyVisibleInLayerList;
- (void)selectionDidChange;
- (void)setPageCountLabel;
- (void)awakeFromNib;
- (void)unregisterObservers;
- (void)dealloc;
- (id)init;
@end
