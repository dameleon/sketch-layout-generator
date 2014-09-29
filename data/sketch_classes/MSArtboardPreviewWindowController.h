@interface MSArtboardPreviewWindowController : CHSingletonWindowController <NSWindowDelegate>
{
NSImageView *_previewView;	// 80 = 0x50
NSTextField *_noArtboardField;	// 88 = 0x58
NSTimer *_refreshTimer;	// 96 = 0x60
}
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(nonatomic) __weak NSTextField *noArtboardField; // @synthesize noArtboardField=_noArtboardField;
@property(nonatomic) __weak NSImageView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentDocument;
- (id)currentArtboard;
- (struct CGRect)fitRectOnScreen:(struct CGRect)arg1;
- (void)setWindowSize:(struct CGSize)arg1;
- (id)artboardSlice;
- (void)generatePreviewWithCallback:(CDUnknownBlockType)arg1;
- (struct CGSize)windowSizeForImage:(id)arg1;
- (void)loadPreview;
- (void)displayCurrentArtboardPreview;
- (void)refreshTimerAction:(id)arg1;
- (void)scheduleTimer;
- (void)awakeFromNib;
@end
