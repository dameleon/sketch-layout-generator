@interface MSExportSheet : CHSheetController
{
NSCollectionView *_collectionView;	// 80 = 0x50
NSButton *_includeAllSlicesCheckBox;	// 88 = 0x58
NSButton *_exportButton;	// 96 = 0x60
NSArray *_slices;	// 104 = 0x68
NSSet *_warningSliceIDs;	// 112 = 0x70
}
@property(retain, nonatomic) NSSet *warningSliceIDs; // @synthesize warningSliceIDs=_warningSliceIDs;
@property(retain, nonatomic) NSArray *slices; // @synthesize slices=_slices;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSButton *includeAllSlicesCheckBox; // @synthesize includeAllSlicesCheckBox=_includeAllSlicesCheckBox;
@property(retain, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)documentData;
- (id)document;
- (void)confirm:(id)arg1;
- (id)collectionView:(id)arg1 newItemForRepresentedObject:(id)arg2;
- (void)resizeWindowToFit;
- (BOOL)hasUncheckedSlices;
- (void)includeAllCheckboxAction:(id)arg1;
- (long long)includeAllSlicesCheckBoxState;
- (void)validateIncludeAllSlicesCheckBox;
- (void)findOverlappingSlices:(id)arg1;
- (void)awakeFromNib;
@end
