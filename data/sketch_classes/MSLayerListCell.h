@interface MSLayerListCell : PXListViewCell <NSTextFieldDelegate>
{
long long level;	// 184 = 0xb8
BOOL mouseIsInside;	// 192 = 0xc0
BOOL _isVisible;	// 193 = 0xc1
BOOL _isHidden;	// 194 = 0xc2
MSLayer *_theLayer;	// 200 = 0xc8
BCAutosizingTextField *_nameField;	// 208 = 0xd0
NSButton *_isVisibleButton;	// 216 = 0xd8
NSButton *_isLockedButton;	// 224 = 0xe0
NSButton *_isExpandedButton;	// 232 = 0xe8
MSLayerPreviewView *_previewView;	// 240 = 0xf0
NSPopUpButton *_booleanOpsButton;	// 248 = 0xf8
NSImageView *_sliceImageView;	// 256 = 0x100
}
+ (id)cellForItem:(id)arg1 inListView:(id)arg2;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) __weak NSImageView *sliceImageView; // @synthesize sliceImageView=_sliceImageView;
@property(nonatomic) __weak NSPopUpButton *booleanOpsButton; // @synthesize booleanOpsButton=_booleanOpsButton;
@property(nonatomic) __weak MSLayerPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak NSButton *isExpandedButton; // @synthesize isExpandedButton=_isExpandedButton;
@property(nonatomic) __weak NSButton *isLockedButton; // @synthesize isLockedButton=_isLockedButton;
@property(nonatomic) __weak NSButton *isVisibleButton; // @synthesize isVisibleButton=_isVisibleButton;
@property(nonatomic) __weak BCAutosizingTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MSLayer *theLayer; // @synthesize theLayer=_theLayer;
@property(nonatomic) long long level; // @synthesize level;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)isEditable;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (BOOL)isMasked;
- (void)drawMaskDot;
- (void)drawAlternatingBackground:(struct CGRect)arg1;
- (void)drawNameFieldBorder;
- (BOOL)previousRowIsArtboard;
- (void)drawArtboardBackground:(struct CGRect)arg1;
- (BOOL)isDrawingArtboard;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isSelected;
- (void)nameAction:(id)arg1;
- (void)booleanAction:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)toggleLockedAction:(id)arg1;
- (void)toggleExpandedAction:(id)arg1;
- (void)setListView:(id)arg1;
- (id)listView;
- (void)controlTextDidChange:(id)arg1;
- (id)bitmapImageRepForCachingDisplayInRect:(struct CGRect)arg1;
- (BOOL)expandedButtonShouldBeVisible;
- (void)validateExpandedButton;
- (void)layoutControls;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)hideEyeButtonAndResizeNameField;
- (void)mouseExited:(id)arg1;
- (void)showEyeButtonAndResizeNameField;
- (id)normalHandler;
- (void)mouseEntered:(id)arg1;
- (void)resizeNameFieldToFit;
- (void)renameLayer;
- (void)resizeNameFieldToMakeRoomForButtons;
- (void)adjustIcons;
- (void)selectionDidChange;
- (void)adjustNameFieldColor;
- (BOOL)canShowEyeButton;
- (void)prepareForItem:(id)arg1;
- (void)centerPastedLayersOnLayer:(id)arg1;
- (void)pasteHere:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)prepareForReuse;
- (void)undoNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@end
