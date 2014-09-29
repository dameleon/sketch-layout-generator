@interface MSInspectorController : CHViewController
{
NSView *_placeholderView;	// 104 = 0x68
NSView *_alignmentView;	// 112 = 0x70
CHViewController<MSInspectorChildController> *_currentController;	// 120 = 0x78
MSDocument *_document;	// 128 = 0x80
MSNormalInspector *_normalInspector;	// 136 = 0x88
MSExportableLayerInspectorViewController *_exportableInspector;	// 144 = 0x90
MSExportInspectorViewController *_bottomExporter;	// 152 = 0x98
unsigned long long _oldInspectorLocation;	// 160 = 0xa0
}
@property(nonatomic) unsigned long long oldInspectorLocation; // @synthesize oldInspectorLocation=_oldInspectorLocation;
@property(retain, nonatomic) MSExportInspectorViewController *bottomExporter; // @synthesize bottomExporter=_bottomExporter;
@property(retain, nonatomic) MSExportableLayerInspectorViewController *exportableInspector; // @synthesize exportableInspector=_exportableInspector;
@property(retain, nonatomic) MSNormalInspector *normalInspector; // @synthesize normalInspector=_normalInspector;
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) CHViewController<MSInspectorChildController> *currentController; // @synthesize currentController=_currentController;
@property(retain, nonatomic) NSView *alignmentView; // @synthesize alignmentView=_alignmentView;
@property(retain, nonatomic) NSView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)exportSingleSlice:(id)arg1;
- (id)rootViewController;
- (id)handlerManager;
- (id)firstTextFieldInView:(id)arg1;
- (void)focusOnFirstTextField;
- (void)reload;
- (void)startRenamingSharedObject:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (BOOL)shouldShowExportBar;
- (void)hideExportBarIfNecessary;
- (void)prepareForDisplay;
- (void)currentHandlerChanged;
- (void)layerPositionPossiblyChanged;
- (BOOL)layersAreExportable:(id)arg1;
- (id)currentControllerForReturningToNormalHandler;
- (void)validateAlignmentButtons;
- (void)selectionDidChangeTo:(id)arg1;
- (void)viewDidResize;
- (void)dealloc;
- (void)undoNotification:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
