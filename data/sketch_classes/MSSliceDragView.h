@interface MSSliceDragView : NSView
{
BOOL _previewImageIsVector;	// 152 = 0x98
MSPage *_lightweightPageCopy;	// 160 = 0xa0
NSImage *_previewImage;	// 168 = 0xa8
MSSliceLayer *_sliceLayer;	// 176 = 0xb0
NSData *_PNGData;	// 184 = 0xb8
NSData *_PDFData;	// 192 = 0xc0
NSData *_fileDragData;	// 200 = 0xc8
long long _cachingCounter;	// 208 = 0xd0
NSString *_fileDragFormat;	// 216 = 0xd8
}
@property(copy, nonatomic) NSString *fileDragFormat; // @synthesize fileDragFormat=_fileDragFormat;
@property(nonatomic) BOOL previewImageIsVector; // @synthesize previewImageIsVector=_previewImageIsVector;
@property(nonatomic) long long cachingCounter; // @synthesize cachingCounter=_cachingCounter;
@property(retain, nonatomic) NSData *fileDragData; // @synthesize fileDragData=_fileDragData;
@property(retain, nonatomic) NSData *PDFData; // @synthesize PDFData=_PDFData;
@property(retain, nonatomic) NSData *PNGData; // @synthesize PNGData=_PNGData;
@property(retain, nonatomic) MSSliceLayer *sliceLayer; // @synthesize sliceLayer=_sliceLayer;
@property(retain, nonatomic) NSImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) MSPage *lightweightPageCopy; // @synthesize lightweightPageCopy=_lightweightPageCopy;
- (void).cxx_destruct;
- (void)delayedPrepareSlice:(id)arg1 size:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)prepareSlice:(id)arg1 size:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearCaches;
- (void)reloadWithSlice:(id)arg1 exportSize:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)reloadWithSlice:(id)arg1 exportSize:(id)arg2;
- (void)reloadWithSlice:(id)arg1;
- (struct CGRect)imageDrawRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)writeToPasteboardWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
@end
