@interface MSMakeGridSheet : CHSheetController
{
BOOL _isBoxed;	// 80 = 0x50
BOOL _hasHorizontalPadding;	// 81 = 0x51
BOOL _hasVerticalPadding;	// 82 = 0x52
MSDocument *_doc;	// 88 = 0x58
long long _numberOfRows;	// 96 = 0x60
long long _numberOfColumns;	// 104 = 0x68
long long _horizontalPadding;	// 112 = 0x70
long long _verticalPadding;	// 120 = 0x78
long long _boxedWidth;	// 128 = 0x80
long long _boxedHeight;	// 136 = 0x88
NSImageView *_imageView;	// 144 = 0x90
NSTextField *_subtextField;	// 152 = 0x98
NSButton *_confirmButton;	// 160 = 0xa0
NSArray *_allLayersCached;	// 168 = 0xa8
}
@property(copy, nonatomic) NSArray *allLayersCached; // @synthesize allLayersCached=_allLayersCached;
@property(nonatomic) __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak NSTextField *subtextField; // @synthesize subtextField=_subtextField;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long boxedHeight; // @synthesize boxedHeight=_boxedHeight;
@property(nonatomic) long long boxedWidth; // @synthesize boxedWidth=_boxedWidth;
@property(nonatomic) long long verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) long long horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) BOOL hasVerticalPadding; // @synthesize hasVerticalPadding=_hasVerticalPadding;
@property(nonatomic) BOOL hasHorizontalPadding; // @synthesize hasHorizontalPadding=_hasHorizontalPadding;
@property(nonatomic) BOOL isBoxed; // @synthesize isBoxed=_isBoxed;
@property(retain, nonatomic) MSDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (id)allLayers;
- (struct CGSize)defaultBoxSize;
- (unsigned long long)layerCount;
- (BOOL)layersHaveSameSize;
- (struct CGSize)sizeForLayer:(id)arg1;
- (long long)heightOfHighestLayerOnRow:(id)arg1;
- (void)makeGrid;
- (void)confirm:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)validatePaddingFields;
- (void)changeBoxedImage;
- (void)boxedAction:(id)arg1;
- (void)registerMarginDefaults;
- (void)awakeFromNib;
@end
