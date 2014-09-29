@interface MSDocument : NSDocument <NSMenuDelegate, NSToolbarDelegate, NSWindowDelegate, MSDrawViewContentDelegate, MSBasicDelegate, MSBaseViewDelegate, MSDocumentDataDelegate, MSPageDelegate>
{
MSDocumentData *documentData;	// 104 = 0x68
MSActionsController *actionsController;	// 112 = 0x70
MSInspectorController *inspectorController;	// 120 = 0x78
MSToolbarConstructor *toolbarConstructor;	// 128 = 0x80
MSEventHandlerManager *eventHandlerManager;	// 136 = 0x88
MSLayerListViewController *layerListController;	// 144 = 0x90
BOOL _hasOpenedImageFile;	// 152 = 0x98
MSRulerView *_horizontalRuler;	// 160 = 0xa0
MSRulerView *_verticalRuler;	// 168 = 0xa8
NSView *_rulerCornerView;	// 176 = 0xb0
MSContentDrawView *_contentDrawView;	// 184 = 0xb8
NSSplitView *_splitView;	// 192 = 0xc0
NSWindow *_documentWindow;	// 200 = 0xc8
MSSplitViewDelegate *_splitViewController;	// 208 = 0xd0
NSView *_inspectorPlaceholderView;	// 216 = 0xd8
MSIOSRefreshCollector *_refreshCollector;	// 224 = 0xe0
MSFontList *_fontList;	// 232 = 0xe8
NSArray *_selectedLayers;	// 240 = 0xf0
NSDictionary *_collectedSharedObjects;	// 248 = 0xf8
NSTimer *_collectedSharedObjectsTimer;	// 256 = 0x100
}
+ (BOOL)autosavesInPlace;
+ (id)currentDocument;
+ (BOOL)isNativeType:(id)arg1;
+ (id)writableTypes;
+ (id)readableTypes;
@property(nonatomic) BOOL hasOpenedImageFile; // @synthesize hasOpenedImageFile=_hasOpenedImageFile;
@property(retain, nonatomic) NSTimer *collectedSharedObjectsTimer; // @synthesize collectedSharedObjectsTimer=_collectedSharedObjectsTimer;
@property(retain, nonatomic) NSDictionary *collectedSharedObjects; // @synthesize collectedSharedObjects=_collectedSharedObjects;
@property(copy, nonatomic) NSArray *selectedLayers; // @synthesize selectedLayers=_selectedLayers;
@property(retain, nonatomic) MSFontList *fontList; // @synthesize fontList=_fontList;
@property(readonly, nonatomic) MSIOSRefreshCollector *refreshCollector; // @synthesize refreshCollector=_refreshCollector;
@property(nonatomic) __weak NSView *inspectorPlaceholderView; // @synthesize inspectorPlaceholderView=_inspectorPlaceholderView;
@property(nonatomic) __weak MSSplitViewDelegate *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) NSWindow *documentWindow; // @synthesize documentWindow=_documentWindow;
@property(nonatomic) __weak NSSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) __weak MSContentDrawView *contentDrawView; // @synthesize contentDrawView=_contentDrawView;
@property(nonatomic) __weak NSView *rulerCornerView; // @synthesize rulerCornerView=_rulerCornerView;
@property(nonatomic) __weak MSRulerView *verticalRuler; // @synthesize verticalRuler=_verticalRuler;
@property(nonatomic) __weak MSRulerView *horizontalRuler; // @synthesize horizontalRuler=_horizontalRuler;
@property(readonly, nonatomic) MSEventHandlerManager *eventHandlerManager; // @synthesize eventHandlerManager;
@property(retain, nonatomic) MSDocumentData *documentData; // @synthesize documentData;
@property(retain, nonatomic) MSToolbarConstructor *toolbarConstructor; // @synthesize toolbarConstructor;
@property(readonly, nonatomic) MSLayerListViewController *layerListController; // @synthesize layerListController;
@property(readonly, nonatomic) MSInspectorController *inspectorController; // @synthesize inspectorController;
@property(readonly, nonatomic) MSActionsController *actionsController; // @synthesize actionsController;
- (void).cxx_destruct;
- (void)debugCountObject:(id)arg1 counts:(id)arg2;
- (void)debugCountObjects:(id)arg1;
- (void)logBuggyBezierPaths;
- (void)determineCurrentArtboard;
- (void)layerSelectionDidChange;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(id)arg2;
- (void)layerTreeLayoutDidChange;
- (void)willRemovePage:(id)arg1;
- (void)didAddPage:(id)arg1;
- (void)didAddArtboard:(id)arg1 toPage:(id)arg2;
- (void)willRemoveArtboard:(id)arg1 fromPage:(id)arg2;
- (void)didUpdateDetailsForArtboard:(id)arg1;
- (void)didUpdateDetailsForPage:(id)arg1;
- (void)currentArtboardDidChange;
- (void)collapseGroupsInLayerList:(id)arg1;
- (void)sliceDidChangeVisibility:(id)arg1;
- (void)changeTextLayerFont:(id)arg1;
- (void)debugStressTestRendering:(id)arg1;
- (void)layerPositionPossiblyChanged;
- (void)startBackgroundCaching;
- (id)addBlankPage;
- (void)reduceImageSize:(id)arg1;
- (void)toggleClickThrough:(id)arg1;
- (void)findLayer:(id)arg1;
- (void)showCurrentArtboardPreview:(id)arg1;
- (void)redoAction:(id)arg1;
- (void)undoAction:(id)arg1;
- (void)toggleLayersAndInspectorVisibility:(id)arg1;
- (void)toggleInspectorVisibility:(id)arg1;
- (void)toggleLayerListVisibility:(id)arg1;
- (void)renameLayer:(id)arg1;
- (void)windowDidExitVersionBrowser:(id)arg1;
- (void)windowDidEnterVersionBrowser:(id)arg1;
- (void)colorMagnifierAction:(id)arg1;
- (BOOL)currentPopoverHandlesColorMagnifier;
- (void)copyCSSAttributes:(id)arg1;
- (id)pages;
- (id)layersSharingStyle:(id)arg1;
- (id)layerStyles;
- (void)removePage:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (id)artboards;
- (id)grid;
- (id)document;
- (void)pasteStyle:(id)arg1;
- (void)copyStyle:(id)arg1;
- (void)layoutSettings:(id)arg1;
- (void)gridSettings:(id)arg1;
- (void)setStyleAsDefault:(id)arg1;
- (void)returnToDefaultHandler:(id)arg1;
- (id)defaultHandler;
- (id)setCurrentHandlerKey:(id)arg1;
- (id)toggleHandlerKey:(id)arg1;
- (void)reloadInspector;
- (void)reloadLayerList;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (id)rootDelegate;
- (void)deleteArtboards:(id)arg1;
- (void)closePath:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (id)currentVerticalRulerData;
- (id)currentHorizontalRulerData;
- (void)zoomValueDidChange;
- (void)syncSharedObjects:(id)arg1;
- (void)documentData:(id)arg1 syncSharedObject:(id)arg2;
- (void)documentData:(id)arg1 didChangeToPage:(id)arg2;
- (BOOL)inspectorIsMain;
- (void)selectToolbarItemWithIdentifier:(id)arg1;
- (id)closestVisibleIdentifierInToolbarForIdentifier:(id)arg1;
- (void)reversePath:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (id)currentHandlerKey;
- (id)currentHandler;
- (void)enableInteractionFrom:(id)arg1;
- (void)toggleSliceInteraction:(id)arg1;
- (void)toggleLayerInteraction:(id)arg1;
- (void)toggleLayerHighlight:(id)arg1;
- (void)toggleSelection:(id)arg1;
- (void)lockLayer:(id)arg1;
- (void)toggleArtboardShadow:(id)arg1;
- (void)togglePixelLines:(id)arg1;
- (void)toggleAlignmentGuides:(id)arg1;
- (void)validateMenuItemTitle:(id)arg1;
- (BOOL)validateItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)layerWouldOverlapExistingLayer:(id)arg1 inGroup:(id)arg2;
- (void)offsetLayerIfNecessary:(id)arg1 forInsertingInGroup:(id)arg2;
- (void)addLayer:(id)arg1 changeName:(BOOL)arg2;
- (void)addLayer:(id)arg1;
- (id)findCurrentArtboardGroup;
- (void)coalescedDetermineArtboardNotification:(id)arg1;
- (void)putSelectionBackInCanvasIfPossible;
- (void)coalescedSelectionDidChangeNotification:(id)arg1;
- (id)findSelectedLayers;
- (id)currentPage;
- (void)exportPDFBook:(id)arg1;
- (void)exportSliceLayers:(id)arg1;
- (id)allExportableLayers;
- (void)exportEnabledSliceLayers:(id)arg1;
- (void)export:(id)arg1;
- (id)selectedLayersOfClass:(Class)arg1;
- (void)returnToNormalHandler;
- (void)currentHandlerChanged;
@property(nonatomic) double zoomValue; // @dynamic zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @dynamic scrollOrigin;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)shouldCancelAutoSave;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)documentBundleContainsSVNFolders;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (id)windowNibName;
- (id)toolbar;
- (BOOL)shouldCreateToolbar;
- (void)windowControllerDidLoadNib:(id)arg1;
- (void)loadLayerListPanel;
- (void)loadInspectorPanel;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)awakeFromNib;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)wireDocumentDataToUI;
- (id)currentView;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (id)window;
- (void)dealloc;
- (void)close;
- (void)setDelegatesToNil;
- (id)actionWithName:(id)arg1;
- (id)actions;
- (void)createActions;
- (id)init;
- (id)cleanFilenameFor:(id)arg1;
- (void)enableMaskForView:(id)arg1;
- (id)disableMaskForView:(id)arg1;
- (struct CGRect)rectForExport:(id)arg1;
- (id)subviewsForView:(id)arg1;
- (BOOL)viewShouldBeTraversed:(id)arg1;
- (BOOL)viewHasSubviews:(id)arg1;
- (BOOL)viewCanHaveMask:(id)arg1;
- (id)maskBoundsFor:(id)arg1;
- (id)coordinatesFor:(id)arg1;
- (id)extractMetadataFrom:(id)arg1;
- (BOOL)viewIsArtboard:(id)arg1;
- (BOOL)viewShouldBeIgnored:(id)arg1;
- (BOOL)viewShouldBeExtracted:(id)arg1;
- (void)exportAssetsForView:(id)arg1 inFolder:(id)arg2;
- (id)toJSON:(id)arg1;
- (id)getViews;
- (void)saveStructureToJSONJS:(id)arg1 toPath:(id)arg2;
- (void)saveStructureToJSON:(id)arg1 toPath:(id)arg2;
- (id)checkForErrors;
- (id)tmpFolder;
- (void)saveFileFromString:(id)arg1 toPath:(id)arg2;
- (void)makeFolder:(id)arg1;
- (id)exportFramer;
- (void)alignLayers:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;
- (id)alignmentRectForLayers:(id)arg1;
- (void)alignToKey:(id)arg1;
- (void)alignLayersBottom:(id)arg1;
- (void)alignLayersMiddle:(id)arg1;
- (void)alignLayersTop:(id)arg1;
- (void)alignLayersRight:(id)arg1;
- (void)alignLayersCenter:(id)arg1;
- (void)alignLayersLeft:(id)arg1;
- (void)displayMessage:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)stopAccessingFolderToken:(id)arg1;
- (id)startAccessingFolder:(id)arg1 tokenName:(id)arg2;
- (id)dataForRequest:(id)arg1 ofType:(id)arg2;
- (void)saveSlice:(id)arg1 toFile:(id)arg2;
- (id)sliceForArtboardOrSlice:(id)arg1;
- (void)saveArtboardOrSlice:(id)arg1 toFile:(id)arg2;
- (id)sliceForRect:(id)arg1;
- (id)askForUserInput:(id)arg1 ofType:(long long)arg2 initialValue:(id)arg3;
- (id)askForUserInput:(id)arg1 initialValue:(id)arg2;
- (BOOL)askToOpenDocumentRepairingMetadata;
- (BOOL)askToOpenDocumentWithMissingFonts:(id)arg1;
- (void)alertDocumentIsWrongSize;
- (void)alertDocumentIsTooNew;
- (void)resetImportedDocument:(id)arg1;
- (BOOL)readImageFromPath:(id)arg1 error:(id *)arg2;
- (id)addImageLayerFromPath:(id)arg1 toGroup:(id)arg2 fitPixels:(BOOL)arg3 error:(id *)arg4;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readEPSFromURL:(id)arg1;
- (BOOL)readPDFFromURL:(id)arg1;
- (BOOL)readSVGFromURL:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@end
