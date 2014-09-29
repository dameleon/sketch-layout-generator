@interface MSBaseAction : NSResponder <NSMenuDelegate>
{
MSDocument *_document;	// 16 = 0x10
MSActionsController *_controller;	// 24 = 0x18
id <MSBasicDelegate> _delegate;	// 32 = 0x20
MSActionValidation *_actionValidation;	// 40 = 0x28
}
+ (id)actionForDocument:(id)arg1;
@property(retain, nonatomic) MSActionValidation *actionValidation; // @synthesize actionValidation=_actionValidation;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSActionsController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)validation;
- (BOOL)isActive;
- (BOOL)showInToolbar;
- (id)image;
- (id)smallImage;
- (BOOL)hasSubMenu;
- (id)children;
- (BOOL)containsActionWithName:(id)arg1;
- (BOOL)validate;
- (BOOL)validateItem:(id)arg1;
- (id)tooltip;
- (unsigned short)shortcutCharacter;
- (id)label;
- (id)imageName;
- (id)identifier;
- (void)performAction:(id)arg1;
- (SEL)selector;
- (BOOL)dynamicTitle;
- (BOOL)isSelectable;
- (id)undoManager;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (id)contentDrawView;
- (id)currentPage;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (id)currentHandler;
- (id)currentHandlerKey;
- (id)selectedLayers;
- (id)initWithDocument:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)dynamicallyChangeTitleForItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menu;
- (id)menuItem;
- (id)menuItemForMenu:(id)arg1;
- (id)toolbarLabel;
- (id)toolbarItemWithSize:(unsigned long long)arg1;
- (id)imageForToolbarSize:(unsigned long long)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
@end
