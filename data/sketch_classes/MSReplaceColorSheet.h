@interface MSReplaceColorSheet : CHSheetController
{
BCColorListView *_colorList;	// 80 = 0x50
BCColorListView *_changedColorList;	// 88 = 0x58
NSTextField *_baseColorIndexField;	// 96 = 0x60
BCHSBColorPicker *_colorPicker;	// 104 = 0x68
NSImageView *_previewView;	// 112 = 0x70
NSArray *_colors;	// 120 = 0x78
NSArray *_originalColors;	// 128 = 0x80
MSDocumentData *_theDoc;	// 136 = 0x88
NSArray *_allColors;	// 144 = 0x90
NSArray *_originalAllColors;	// 152 = 0x98
}
@property(retain, nonatomic) NSArray *originalAllColors; // @synthesize originalAllColors=_originalAllColors;
@property(retain, nonatomic) NSArray *allColors; // @synthesize allColors=_allColors;
@property(retain, nonatomic) MSDocumentData *theDoc; // @synthesize theDoc=_theDoc;
@property(retain, nonatomic) NSArray *originalColors; // @synthesize originalColors=_originalColors;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSImageView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) BCHSBColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) NSTextField *baseColorIndexField; // @synthesize baseColorIndexField=_baseColorIndexField;
@property(retain, nonatomic) BCColorListView *changedColorList; // @synthesize changedColorList=_changedColorList;
@property(retain, nonatomic) BCColorListView *colorList; // @synthesize colorList=_colorList;
- (void).cxx_destruct;
- (void)twist:(id)arg1;
- (void)colorIndexChanged:(id)arg1;
- (void)awakeFromNib;
@end
