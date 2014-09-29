@interface MSExportableLayerInspectorViewController : CHViewController <MSSectionProtocol, MSInspectorChildController, MSSliceLayerWatcher, MSColorInspectorDelegate, BCPopoverDelegate>
{
MSInspectorStackView *_stackView;	// 104 = 0x68
NSView *_currentStyleSliceTopView;	// 112 = 0x70
NSView *_oldStyleSliceTopView;	// 120 = 0x78
NSView *_addMoreSizesView;	// 128 = 0x80
NSView *_standardPropertiesView;	// 136 = 0x88
NSView *_artboardBackgroundView;	// 144 = 0x90
NSView *_sliceBackgroundView;	// 152 = 0x98
NSTableView *_oldSliceIncludedTable;	// 160 = 0xa0
NSMatrix *_oldStyleIncludeMatrix;	// 168 = 0xa8
NSButtonCell *_oldSliceIncludeAll;	// 176 = 0xb0
NSButtonCell *_oldSliceIncludeFollowing;	// 184 = 0xb8
NSButtonCell *_oldSliceIncludeGroup;	// 192 = 0xc0
NSButton *_groupContentsOnlyButton;	// 200 = 0xc8
MSColorPreviewButton *_artboardBackgroundColorButton;	// 208 = 0xd0
MSColorPreviewButton *_sliceBackgroundColorButton;	// 216 = 0xd8
NSView *_topFillerView;	// 224 = 0xe0
NSView *_bottomLabelView;	// 232 = 0xe8
NSTextField *_formatLabel;	// 240 = 0xf0
NSArray *_layers;	// 248 = 0xf8
MSOldStyleSliceViewDataSource *_oldStyleDataSource;	// 256 = 0x100
NSArray *_sizeViewControllers;	// 264 = 0x108
BCPopover *_popover;	// 272 = 0x110
NSTimer *_refreshTimer;	// 280 = 0x118
NSMutableArray *_sliceViews;	// 288 = 0x120
CHFlippedView *_sliceViewContainerView;	// 296 = 0x128
}
@property(retain, nonatomic) CHFlippedView *sliceViewContainerView; // @synthesize sliceViewContainerView=_sliceViewContainerView;
@property(retain, nonatomic) NSMutableArray *sliceViews; // @synthesize sliceViews=_sliceViews;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSArray *sizeViewControllers; // @synthesize sizeViewControllers=_sizeViewControllers;
@property(retain, nonatomic) MSOldStyleSliceViewDataSource *oldStyleDataSource; // @synthesize oldStyleDataSource=_oldStyleDataSource;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSTextField *formatLabel; // @synthesize formatLabel=_formatLabel;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) NSView *topFillerView; // @synthesize topFillerView=_topFillerView;
@property(retain, nonatomic) MSColorPreviewButton *sliceBackgroundColorButton; // @synthesize sliceBackgroundColorButton=_sliceBackgroundColorButton;
@property(retain, nonatomic) MSColorPreviewButton *artboardBackgroundColorButton; // @synthesize artboardBackgroundColorButton=_artboardBackgroundColorButton;
@property(retain, nonatomic) NSButton *groupContentsOnlyButton; // @synthesize groupContentsOnlyButton=_groupContentsOnlyButton;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeGroup; // @synthesize oldSliceIncludeGroup=_oldSliceIncludeGroup;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeFollowing; // @synthesize oldSliceIncludeFollowing=_oldSliceIncludeFollowing;
@property(retain, nonatomic) NSButtonCell *oldSliceIncludeAll; // @synthesize oldSliceIncludeAll=_oldSliceIncludeAll;
@property(retain, nonatomic) NSMatrix *oldStyleIncludeMatrix; // @synthesize oldStyleIncludeMatrix=_oldStyleIncludeMatrix;
@property(retain, nonatomic) NSTableView *oldSliceIncludedTable; // @synthesize oldSliceIncludedTable=_oldSliceIncludedTable;
@property(retain, nonatomic) NSView *sliceBackgroundView; // @synthesize sliceBackgroundView=_sliceBackgroundView;
@property(retain, nonatomic) NSView *artboardBackgroundView; // @synthesize artboardBackgroundView=_artboardBackgroundView;
@property(retain, nonatomic) NSView *standardPropertiesView; // @synthesize standardPropertiesView=_standardPropertiesView;
@property(retain, nonatomic) NSView *addMoreSizesView; // @synthesize addMoreSizesView=_addMoreSizesView;
@property(retain, nonatomic) NSView *oldStyleSliceTopView; // @synthesize oldStyleSliceTopView=_oldStyleSliceTopView;
@property(retain, nonatomic) NSView *currentStyleSliceTopView; // @synthesize currentStyleSliceTopView=_currentStyleSliceTopView;
@property(retain, nonatomic) MSInspectorStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (BOOL)shouldHideExportBar;
- (void)refreshAction:(id)arg1;
- (id)document;
- (void)exportSingleSlice:(id)arg1;
- (void)addExportSizeAction:(id)arg1;
- (unsigned long long)selectedExportOptions:(id)arg1;
- (void)oldStyleIncludedRadioAction:(id)arg1;
- (BOOL)hasOldStyleSlices;
- (id)nibName;
- (id)viewControllers;
- (id)views;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (void)sizeSliceView;
- (void)reloadSlicesFromArray:(id)arg1;
- (void)loadSliceViews;
- (void)refreshTimerFired:(id)arg1;
- (void)scheduleSliceViewReload;
- (void)prepareForDisplay;
- (void)dealloc;
- (void)sliceLayerDidChange:(id)arg1;
- (void)selectionDidChangeTo:(id)arg1;
- (void)colorInspector:(id)arg1 didChangeToColor:(id)arg2;
- (void)viewControllerWillDisappear;
- (void)popoverWillClose:(id)arg1;
- (void)validateArtboardBackgroundButtons;
- (void)backgroundColorAction:(id)arg1;
- (void)prepareArtboardsForFill;
- (void)layerPositionPossiblyChanged;
- (void)artboardBackgroundCheckAction:(id)arg1;
- (void)groupContentsOnlyAction:(id)arg1;
- (void)exportableSizeDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)init;
@end
