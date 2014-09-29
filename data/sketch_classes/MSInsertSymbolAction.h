@interface MSInsertSymbolAction : MSBaseAction <NSMenuDelegate>
{
NSImage *_initialImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSImage *initialImage; // @synthesize initialImage=_initialImage;
- (void).cxx_destruct;
- (id)noSymbolsView;
- (BOOL)hasSubMenu;
- (id)imageName;
- (void)menuWillOpen:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)wouldInsertInASymbol;
- (id)menuItemForMenu:(id)arg1 name:(id)arg2 symbol:(id)arg3;
- (void)showManageSymbolsSheet:(id)arg1;
- (id)symbolsSortedIntoGroups:(id)arg1;
- (void)updateMenuForSymbols:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)insertSymbolInstance:(id)arg1;
- (id)initWithDocument:(id)arg1;
@end
