@interface MSExportSheetItem : NSCollectionViewItem
{
BOOL _showWarningLabel;	// 136 = 0x88
MSSliceDragView *_previewView;	// 144 = 0x90
NSTextField *_titleField;	// 152 = 0x98
NSTextField *_subTitleField;	// 160 = 0xa0
NSButton *_checkBox;	// 168 = 0xa8
NSImageView *_warningView;	// 176 = 0xb0
MSExportSheet *_exportSheet;	// 184 = 0xb8
}
@property(nonatomic) BOOL showWarningLabel; // @synthesize showWarningLabel=_showWarningLabel;
@property(nonatomic) __weak MSExportSheet *exportSheet; // @synthesize exportSheet=_exportSheet;
@property(retain, nonatomic) NSImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) NSTextField *subTitleField; // @synthesize subTitleField=_subTitleField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(retain, nonatomic) MSSliceDragView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)checkBoxAction:(id)arg1;
- (id)subTitle;
- (void)loadUI;
- (void)awakeFromNib;
- (id)init;
@end
