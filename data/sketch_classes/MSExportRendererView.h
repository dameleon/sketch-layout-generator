@interface MSExportRendererView : NSView
{
MSExportRenderer *_renderer;	// 152 = 0x98
}
@property(nonatomic) __weak MSExportRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
@end
