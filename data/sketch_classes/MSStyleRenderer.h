@interface MSStyleRenderer : MSBaseRenderer
{
BCBezierPath *_path;	// 8 = 0x8
MSStyle *_style;	// 16 = 0x10
MSRenderingContext *_context;	// 24 = 0x18
struct CGRect _rect;	// 32 = 0x20
}
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) MSRenderingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MSStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) BCBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)artisticStrokeIsActive;
- (void)drawBorders;
- (void)applyDashPatternToBezierPath;
- (void)drawFills;
- (BOOL)shouldSkipDrawingShadow:(id)arg1;
- (BOOL)shouldAdvancedClipToAvoidOuterStrokeStrokeBleed;
- (BOOL)shouldAdvancedClipToAvoidInnerStrokeBleed;
- (id)clipPathForOuterStroke;
- (void)addClipForBlock:(CDUnknownBlockType)arg1;
@end
