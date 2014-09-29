@interface MSNormalEventContextualMenuBuilder : NSObject
{
NSMenu *_standardLayerMenu;	// 8 = 0x8
NSMenu *_textLayerMenu;	// 16 = 0x10
NSMenu *_groupLayerMenu;	// 24 = 0x18
NSMenu *_multipleSelectionMenu;	// 32 = 0x20
NSMenu *_noSelectionMenu;	// 40 = 0x28
NSMenu *_symbolLayerMenu;	// 48 = 0x30
NSMenu *_artboardAndSlicesMenu;	// 56 = 0x38
}
@property(retain, nonatomic) NSMenu *artboardAndSlicesMenu; // @synthesize artboardAndSlicesMenu=_artboardAndSlicesMenu;
@property(retain, nonatomic) NSMenu *symbolLayerMenu; // @synthesize symbolLayerMenu=_symbolLayerMenu;
@property(retain, nonatomic) NSMenu *noSelectionMenu; // @synthesize noSelectionMenu=_noSelectionMenu;
@property(retain, nonatomic) NSMenu *multipleSelectionMenu; // @synthesize multipleSelectionMenu=_multipleSelectionMenu;
@property(retain, nonatomic) NSMenu *groupLayerMenu; // @synthesize groupLayerMenu=_groupLayerMenu;
@property(retain, nonatomic) NSMenu *textLayerMenu; // @synthesize textLayerMenu=_textLayerMenu;
@property(retain, nonatomic) NSMenu *standardLayerMenu; // @synthesize standardLayerMenu=_standardLayerMenu;
- (void).cxx_destruct;
- (id)symbolOnlyItems;
- (id)groupOnlyItems;
- (id)textOnlyItems;
- (id)noSelectionItems;
- (id)distributeItems;
- (id)alignItems;
- (id)lockHideItems;
- (id)transformItems;
- (id)groupRenameItems;
- (id)pasteCopyStyleItems;
- (id)moveForwardBackwardItems;
- (id)pickLayerItems;
- (id)cutCopyPasteItems;
- (id)menuWithItemGroups:(id)arg1;
- (id)standardMenuItemGroups;
- (void)constructMenus;
- (id)menuForLayers:(id)arg1;
@end
