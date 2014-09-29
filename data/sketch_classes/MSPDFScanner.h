@interface MSPDFScanner : PDFScanner
{
MSLayerGroup *_rootLayer;	// 8 = 0x8
MSImageCollection *_images;	// 16 = 0x10
unsigned long long _nextID;	// 24 = 0x18
NSMutableArray *_stack;	// 32 = 0x20
MSPDFState *_state;	// 40 = 0x28
}
@property(retain, nonatomic) MSPDFState *state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(nonatomic) unsigned long long nextID; // @synthesize nextID=_nextID;
@property(retain, nonatomic) MSImageCollection *images; // @synthesize images=_images;
@property(retain, nonatomic) MSLayerGroup *rootLayer; // @synthesize rootLayer=_rootLayer;
- (void).cxx_destruct;
- (void)endText;
- (void)appendText:(id)arg1;
- (void)setTextMatrix:(id)arg1;
- (void)nextLineWithOffset:(struct CGPoint)arg1;
- (void)offset:(double)arg1;
- (void)setTextMode:(unsigned long long)arg1;
- (void)setTextScale:(double)arg1;
- (void)setTextRise:(double)arg1;
- (void)setTextLeading:(double)arg1;
- (void)setTextWordSpacing:(double)arg1;
- (void)setTextCharacterSpacing:(double)arg1;
- (void)setFontName:(id)arg1 size:(double)arg2;
- (void)beginText;
- (void)setTextTransform:(id)arg1 resettingLineTransform:(BOOL)arg2;
- (void)processImage:(id)arg1 info:(id)arg2;
- (void)fillWithShadingPattern:(id)arg1;
- (id)gradientForLayer:(id)arg1 pattern:(id)arg2;
- (id)gradientForPattern:(id)arg1;
- (BOOL)slope:(CDStruct_d2b197d1)arg1 nearEnoughTo:(CDStruct_d2b197d1)arg2 epsilon:(double)arg3;
- (CDStruct_d2b197d1)slopeBetweenStop1:(id)arg1 stop2:(id)arg2;
- (id)colorWithRGBBytes:(CDStruct_f4b747e6 *)arg1;
- (void)fillWithWinding:(unsigned long long)arg1;
- (void)clipWithWinding:(unsigned long long)arg1;
- (void)setColourRenderingIntent:(int)arg1;
- (void)setFillAlphaConstant:(double)arg1;
- (void)setStrokeAlphaConstant:(double)arg1;
- (void)setFillColour:(id)arg1;
- (void)setStrokeColour:(id)arg1;
- (void)setFillColourSpace:(id)arg1 mapping:(id)arg2;
- (void)setStrokeColourSpace:(id)arg1 mapping:(id)arg2;
- (void)strokeWithWinding:(unsigned long long)arg1;
- (id)transformedPath;
- (void)setLineDash:(id)arg1 phase:(long long)arg2;
- (void)setLineCap:(unsigned long long)arg1;
- (void)setLineJoin:(unsigned long long)arg1;
- (void)setLineWidth:(double)arg1;
- (void)restoreGraphicState;
- (void)saveGraphicState;
- (int)currentRenderingIntent;
- (id)currentFillColorSpaceMapping;
- (id)currentFillColorSpace;
- (id)currentStrokeColorSpaceMapping;
- (id)currentStrokeColorSpace;
- (double)currentLeading;
- (struct CGPoint)currentPoint;
- (void)concatMatrix:(id)arg1;
- (void)appendRectangle:(struct CGRect)arg1;
- (void)endPath;
- (void)closePath;
- (void)curveTo:(struct CGPoint)arg1 control1:(struct CGPoint)arg2 control2:(struct CGPoint)arg3;
- (void)lineTo:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1;
- (void)doClipping;
- (void)doRestoreState;
- (void)doSaveState;
- (void)doNewPath;
- (void)doText;
- (void)doClose;
- (void)scanStream:(struct CGPDFContentStream *)arg1 dictionary:(id)arg2;
- (void)scanPage:(struct CGPDFPage *)arg1 parser:(id)arg2;
- (id)nameForType:(id)arg1;
- (id)init;
@end
