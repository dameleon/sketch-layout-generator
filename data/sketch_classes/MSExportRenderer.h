@interface MSExportRenderer : NSObject <DKContextDelegate>
{
BOOL _isPrinting;	// 8 = 0x8
MSExportRequest *_request;	// 16 = 0x10
NSColorSpace *_colorSpace;	// 24 = 0x18
MSExportRendererView *_renderView;	// 32 = 0x20
struct CGRect _bounds;	// 40 = 0x28
}
+ (id)exportRendererForRequest:(id)arg1 colorSpace:(id)arg2;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) MSExportRendererView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=_isPrinting;
@property(retain, nonatomic) MSExportRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)rendererShouldInterruptRendering;
- (BOOL)rendererShouldForceDrawingLayer:(id)arg1;
- (BOOL)rendererNeedsToDrawRect:(struct CGRect)arg1;
- (BOOL)rendererShouldSkipDrawingLayer:(id)arg1;
- (id)printView;
- (void)drawRect:(struct CGRect)arg1;
- (void)preRenderGradientsForLayer:(id)arg1 context:(id)arg2;
- (void)preRenderGradientsForRootLayer:(id)arg1 context:(id)arg2;
- (void)drawSliceBackgroundIfNecessary;
- (id)bitmapImageRep;
- (id)basicBitmapImageRep;
- (void)draw;
- (id)TIFFData;
- (id)PNGData;
- (id)JPGData;
- (id)EPSData;
- (id)image;
- (id)data;
- (struct CGRect)boundsForVectorRender;
- (id)PDFData;
@end
