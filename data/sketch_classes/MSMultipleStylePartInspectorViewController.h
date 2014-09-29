@interface MSMultipleStylePartInspectorViewController : CHViewController <MSReorderingContainerDelegate>
{
NSArray *_layers;	// 104 = 0x68
NSArray *_stylePartViewControllers;	// 112 = 0x70
id <MSStylePartInspectorDelegate> _delegate;	// 120 = 0x78
MSReorderingContainerView *_reorderingContainer;	// 128 = 0x80
NSTextField *_nameField;	// 136 = 0x88
NSTextField *_nameFieldShadow;	// 144 = 0x90
NSView *_nameView;	// 152 = 0x98
NSButton *_removeDisabledStylesButton;	// 160 = 0xa0
NSButton *_showAdvancedOptionsButton;	// 168 = 0xa8
}
@property(retain, nonatomic) NSButton *showAdvancedOptionsButton; // @synthesize showAdvancedOptionsButton=_showAdvancedOptionsButton;
@property(retain, nonatomic) NSButton *removeDisabledStylesButton; // @synthesize removeDisabledStylesButton=_removeDisabledStylesButton;
@property(retain, nonatomic) NSView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) NSTextField *nameFieldShadow; // @synthesize nameFieldShadow=_nameFieldShadow;
@property(retain, nonatomic) NSTextField *nameField; // @synthesize nameField=_nameField;
@property(retain, nonatomic) MSReorderingContainerView *reorderingContainer; // @synthesize reorderingContainer=_reorderingContainer;
@property(nonatomic) __weak id <MSStylePartInspectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *stylePartViewControllers; // @synthesize stylePartViewControllers=_stylePartViewControllers;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)prepareInspector:(id)arg1 parts:(id)arg2 index:(unsigned long long)arg3;
- (BOOL)hasEnabledStyle;
- (void)dealloc;
- (void)prepareParentForDisplay;
- (double)startingOffsetForStackingContainerBackground:(id)arg1;
- (void)containerBackground:(id)arg1 dragDidReorderChildAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)stylePartKeyPath;
- (void)deleteUnusedStylePartsAction:(id)arg1;
- (void)deleteStylePartAction:(id)arg1;
- (id)addStylePartsForSelection;
- (BOOL)hasPopOver;
- (id)lastEnabledStylePartController;
- (void)addStylePartAction:(id)arg1;
- (id)rotatedStyleParts;
- (void)validateSpecialButtons;
- (void)prepare;
- (void)prepareForReuse;
- (id)viewForStyleAtOffset:(long long)arg1 index:(unsigned long long)arg2;
- (void)styleDidEnableOrDisable;
- (void)resizeViewToFit;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)validateAdvancedOptionsButton;
- (void)validateRemoveDisabledStylesButton;
- (void)loadViewControllers;
- (void)awakeFromNib;
- (id)nibName;
- (id)initWithDelegate:(id)arg1;
@end
