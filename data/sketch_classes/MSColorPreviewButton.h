@interface MSColorPreviewButton : NSButton
{
MSStyleBasicFill *_basicFill;	// 176 = 0xb0
NSColor *_color;	// 184 = 0xb8
id _dragOwner;	// 192 = 0xc0
struct CGRect _colorFrame;	// 200 = 0xc8
}
@property(nonatomic) __weak id dragOwner; // @synthesize dragOwner=_dragOwner;
@property(nonatomic) struct CGRect colorFrame; // @synthesize colorFrame=_colorFrame;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(retain, nonatomic) MSStyleBasicFill *basicFill; // @synthesize basicFill=_basicFill;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawNoiseFillInRect:(struct CGRect)arg1;
- (void)drawPatternFillInRect:(struct CGRect)arg1;
- (void)drawGradientFillInRect:(struct CGRect)arg1;
- (void)drawColorFillInRect:(struct CGRect)arg1;
- (void)drawBasicFilInRect:(struct CGRect)arg1;
- (void)drawBasicFillInRect:(struct CGRect)arg1;
- (id)fillColor;
- (id)innerBorderColor;
- (id)borderColor;
- (BOOL)fillIsPattern;
- (BOOL)isFlipped;
- (void)drawButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
@end
