@interface MSNormalInspector : CHViewController <MSStylePartInspectorDelegate, MSInspectorChildController>
{
MSLayerInspectorViewController *layerViewController;	// 104 = 0x68
MSMultipleShadowInspectorViewController *shadowViewController;	// 112 = 0x70
MSMultipleShadowInspectorViewController *innerShadowViewController;	// 120 = 0x78
MSMultipleBorderInspectorViewController *borderViewController;	// 128 = 0x80
MSBlurInspectorViewController *blurViewController;	// 136 = 0x88
MSColorControlsInspectorViewController *colorControlsViewController;	// 144 = 0x90
MSReflectionInspectorViewController *reflectionViewController;	// 152 = 0x98
MSMultipleFillInspectorViewController *fillViewController;	// 160 = 0xa0
MSExportInspectorViewController *exportViewController;	// 168 = 0xa8
MSInspectorStackView *_stackView;	// 176 = 0xb0
NSArray *_layers;	// 184 = 0xb8
MSEventHandler *_eventHandler;	// 192 = 0xc0
}
@property(retain, nonatomic) MSEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)startRenamingSharedObject:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (void)returnToDefaultHandler;
- (void)refreshLayers;
- (BOOL)layersHaveArtisticStroke;
- (void)dealloc;
- (id)viewControllers;
- (void)changeColor:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (void)prepareViewControllers;
- (void)prepareForDisplay;
- (void)selectionDidChangeTo:(id)arg1;
- (id)init;
@end
