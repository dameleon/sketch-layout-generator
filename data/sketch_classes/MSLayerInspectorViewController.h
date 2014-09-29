@interface MSLayerInspectorViewController : CHViewController <MSSectionProtocol, NSMenuDelegate>
{
BOOL _shouldShowPositions;	// 104 = 0x68
BOOL _shouldShowSharedStyles;	// 105 = 0x69
BOOL _shouldShowLayerSpecificProperties;	// 106 = 0x6a
BOOL _shouldShowBlendingProperties;	// 107 = 0x6b
NSArray *_layers;	// 112 = 0x70
NSView *_positionView;	// 120 = 0x78
NSView *_lineView;	// 128 = 0x80
NSView *_artboardView;	// 136 = 0x88
NSTextField *_xTextField;	// 144 = 0x90
NSTextField *_yTextField;	// 152 = 0x98
NSTextField *_artboardXField;	// 160 = 0xa0
NSTextField *_artboardYField;	// 168 = 0xa8
NSButton *_lockProportionsButton;	// 176 = 0xb0
MSElementsInspectorSection *_sharedStyleController;	// 184 = 0xb8
}
@property(retain, nonatomic) MSElementsInspectorSection *sharedStyleController; // @synthesize sharedStyleController=_sharedStyleController;
@property(nonatomic) BOOL shouldShowBlendingProperties; // @synthesize shouldShowBlendingProperties=_shouldShowBlendingProperties;
@property(nonatomic) BOOL shouldShowLayerSpecificProperties; // @synthesize shouldShowLayerSpecificProperties=_shouldShowLayerSpecificProperties;
@property(nonatomic) BOOL shouldShowSharedStyles; // @synthesize shouldShowSharedStyles=_shouldShowSharedStyles;
@property(nonatomic) BOOL shouldShowPositions; // @synthesize shouldShowPositions=_shouldShowPositions;
@property(nonatomic) __weak NSButton *lockProportionsButton; // @synthesize lockProportionsButton=_lockProportionsButton;
@property(nonatomic) __weak NSTextField *artboardYField; // @synthesize artboardYField=_artboardYField;
@property(nonatomic) __weak NSTextField *artboardXField; // @synthesize artboardXField=_artboardXField;
@property(nonatomic) __weak NSTextField *yTextField; // @synthesize yTextField=_yTextField;
@property(nonatomic) __weak NSTextField *xTextField; // @synthesize xTextField=_xTextField;
@property(retain, nonatomic) NSView *artboardView; // @synthesize artboardView=_artboardView;
@property(retain, nonatomic) NSView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSView *positionView; // @synthesize positionView=_positionView;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)canHandleColorMagnifierAction;
- (void)dealloc;
- (BOOL)hasLineShapeLayer;
- (BOOL)layerIsGroup;
- (BOOL)layerIsArtboardOrSlice;
- (id)views;
- (id)valueForUndefinedKey:(id)arg1;
- (id)document;
- (void)refreshAction:(id)arg1;
- (id)inspectorsWithProperContent;
- (id)layerOrContentsOfLayer:(id)arg1 ifKindOfClass:(Class)arg2;
- (void)startRenamingSharedObject:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)setYAction:(id)arg1;
- (void)setXAction:(id)arg1;
- (double)rulerOriginXForLayer:(id)arg1;
- (double)rulerOriginYForLayer:(id)arg1;
- (double)absoluteYForLayers;
- (double)absoluteXForLayers;
- (void)layerPositionPossiblyChanged;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)init;
@end
