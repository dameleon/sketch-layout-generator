@interface MSToolbarConstructor : NSObject <NSToolbarDelegate>
{
MSDocument *doc;	// 8 = 0x8
MSToolbar *toolbar;	// 16 = 0x10
}
+ (id)toolbarForDocument:(id)arg1;
@property(nonatomic) __weak MSDocument *doc; // @synthesize doc;
- (void).cxx_destruct;
- (void)dealloc;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)allActions;
- (id)standardToolbarIdentifiers;
- (void)constructToolbarForWindow:(id)arg1;
- (void)toolbarSizeDidChange:(id)arg1;
- (id)toolbar;
- (id)initWithDocument:(id)arg1;
@end
