@interface MSLayoutGrid : _MSLayoutGrid
{
NSColor *_lightColor;	// 8 = 0x8
NSColor *_darkColor;	// 16 = 0x10
}
@property(retain, nonatomic) NSColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) NSColor *lightColor; // @synthesize lightColor=_lightColor;
- (void).cxx_destruct;
- (BOOL)shouldDraw;
- (void)setColumnWidth:(double)arg1;
- (void)setGutterWidth:(double)arg1;
- (long long)totalNumberOfGutters;
- (void)setGuttersOutside:(BOOL)arg1;
- (void)setTotalWidth:(double)arg1;
- (void)setNumberOfColumns:(double)arg1;
- (void)determineAppropriateColumnWidth;
- (void)drawRowInRect:(struct CGRect)arg1 zoom:(double)arg2;
- (void)drawColumnInRect:(struct CGRect)arg1 zoom:(double)arg2;
- (void)drawInRect:(struct CGRect)arg1 baseLine:(struct CGPoint)arg2 atZoom:(double)arg3;
- (id)verticalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (id)horizontalGuidesForRulerData:(id)arg1 inRect:(struct CGRect)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
@end
