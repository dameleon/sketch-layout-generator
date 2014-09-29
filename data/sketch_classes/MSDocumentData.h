@interface MSDocumentData : _MSDocumentData <MSArrayDelegate>
{
NSUndoManager *_undoManager;	// 8 = 0x8
id <MSDocumentDataDelegate> _delegate;	// 16 = 0x10
}
+ (id)documentDataFromData:(id)arg1 version:(long long)arg2 error:(id *)arg3;
+ (id)documentDataFromWrapper:(id)arg1 data:(id)arg2 version:(long long)arg3 error:(id *)arg4;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (void)setEnableSliceInteraction:(BOOL)arg1;
- (void)setEnableLayerInteraction:(BOOL)arg1;
- (id)imagesInUse;
- (void)removeDeletedSharedObjectsInstances;
- (id)rootLayersIncludingSymbols:(BOOL)arg1;
- (id)sharedObjectContainer:(unsigned long long)arg1;
- (id)layersSharingStyle:(id)arg1;
- (id)layersSatisfyingTest:(CDUnknownBlockType)arg1;
- (void)layerTreeLayoutDidChange;
- (void)deselectAllLayers;
- (id)selectedLayers;
- (id)pagesArray;
- (BOOL)documentIsEmpty;
- (struct MSModelObject *)sharedObjectOfType:(unsigned long long)arg1 fromLayer:(id)arg2;
- (void)sharedTextStyleDidChange:(id)arg1;
- (void)sharedLayerStyleDidChange:(id)arg1;
- (void)symbolGroupDidChange:(id)arg1;
- (id)standardNameForLayer:(id)arg1;
- (void)dataArray:(id)arg1 didRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 willRemoveObject:(id)arg2;
- (void)dataArray:(id)arg1 didAddObject:(id)arg2;
- (id)nameForNewPage;
- (id)addBlankPage;
- (void)addPage:(id)arg1;
- (void)removePage:(id)arg1;
@property(retain, nonatomic) MSPage *currentPage; // @dynamic currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allPages; // @dynamic allPages;
- (void)dealloc;
- (id)documentData;
- (void)encodeWithCoder:(id)arg1;
- (void)objectDidInit;
- (id)defaultPagesArray;
- (BOOL)shouldConvertArrayPropertyWithName:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (id)usedFontNames;
- (id)usedFonts;
- (void)restoreImageForLayer:(id)arg1 imageCollection:(id)arg2 imageFiles:(id)arg3;
- (void)restoreImagesForLayers:(id)arg1 imageCollection:(id)arg2 imageFiles:(id)arg3;
- (void)restoreImagesForLayers:(id)arg1 imageCollection:(id)arg2;
- (void)restoreImagesForLayers:(id)arg1 images:(id)arg2;
- (void)relinkBitmapLayers:(id)arg1 images:(id)arg2;
- (id)bitmapsNeedingRelinkingInLayers:(id)arg1;
- (id)bitmapsNeedingRelinkingInSymbols;
- (void)loadImagesFromWrapper:(id)arg1;
@end
