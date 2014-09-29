@interface MSStyleImageRenderer : MSStyleRenderer
{
BOOL _treatAsAlpha;	// 8 = 0x8
MSBitmapLayer *_bitmapLayer;	// 16 = 0x10
}
+ (void)drawBitmapLayer:(id)arg1 context:(id)arg2 inRect:(struct CGRect)arg3;
@property(nonatomic) BOOL treatAsAlpha; // @synthesize treatAsAlpha=_treatAsAlpha;
@property(retain, nonatomic) MSBitmapLayer *bitmapLayer; // @synthesize bitmapLayer=_bitmapLayer;
- (void).cxx_destruct;
- (id)flipTransform;
- (void)drawNineSliceImage;
- (void)drawImage;
- (void)drawImageFills;
- (void)doDrawImage;
- (void)render;
@end
