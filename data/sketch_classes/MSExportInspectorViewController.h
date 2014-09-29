@interface MSExportInspectorViewController : MSStylePartInspectorViewController
{
NSArray *_layers;	// 112 = 0x70
NSView *_topFillerView;	// 120 = 0x78
NSView *_bottomLabelView;	// 128 = 0x80
NSView *_exportButtonView;	// 136 = 0x88
NSView *_separatorView;	// 144 = 0x90
NSView *_separatorView2;	// 152 = 0x98
NSView *_bigExportLabel;	// 160 = 0xa0
NSButton *_addExportSizeButton;	// 168 = 0xa8
NSButton *_shareButton;	// 176 = 0xb0
NSButton *_exportButton;	// 184 = 0xb8
NSButton *_knifeButton;	// 192 = 0xc0
NSArray *_sizeViewControllers;	// 200 = 0xc8
MSShareButtonHandler *_shareButtonHandler;	// 208 = 0xd0
}
@property(retain, nonatomic) MSShareButtonHandler *shareButtonHandler; // @synthesize shareButtonHandler=_shareButtonHandler;
@property(copy, nonatomic) NSArray *sizeViewControllers; // @synthesize sizeViewControllers=_sizeViewControllers;
@property(retain, nonatomic) NSButton *knifeButton; // @synthesize knifeButton=_knifeButton;
@property(retain, nonatomic) NSButton *exportButton; // @synthesize exportButton=_exportButton;
@property(retain, nonatomic) NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSButton *addExportSizeButton; // @synthesize addExportSizeButton=_addExportSizeButton;
@property(retain, nonatomic) NSView *bigExportLabel; // @synthesize bigExportLabel=_bigExportLabel;
@property(retain, nonatomic) NSView *separatorView2; // @synthesize separatorView2=_separatorView2;
@property(retain, nonatomic) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSView *exportButtonView; // @synthesize exportButtonView=_exportButtonView;
@property(retain, nonatomic) NSView *bottomLabelView; // @synthesize bottomLabelView=_bottomLabelView;
@property(retain, nonatomic) NSView *topFillerView; // @synthesize topFillerView=_topFillerView;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForDisplay;
- (void)exportSingleSlice:(id)arg1;
- (void)shareAction:(id)arg1;
- (id)createSliceForLayer:(id)arg1;
- (void)createSliceAction:(id)arg1;
- (void)addExportSize:(id)arg1;
- (BOOL)wantsSeparatorBetweenView:(id)arg1 andView:(id)arg2;
- (id)views;
- (id)view;
- (BOOL)hasEnabledStyle;
- (void)applyDisplayNameToExportButton;
- (void)prepare;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
@end
