@interface MSPDFTextState : NSObject <NSCopying>
{
double _characterSpacing;	// 8 = 0x8
NSFont *_font;	// 16 = 0x10
NSString *_fontName;	// 24 = 0x18
double _leading;	// 32 = 0x20
NSAffineTransform *_lineTransform;	// 40 = 0x28
unsigned long long _mode;	// 48 = 0x30
double _offset;	// 56 = 0x38
NSAffineTransform *_renderingTransform;	// 64 = 0x40
double _rise;	// 72 = 0x48
double _scale;	// 80 = 0x50
double _size;	// 88 = 0x58
MSPDFState *_state;	// 96 = 0x60
NSMutableAttributedString *_text;	// 104 = 0x68
NSAffineTransform *_transform;	// 112 = 0x70
double _wordSpacing;	// 120 = 0x78
}
+ (id)textStateWithState:(id)arg1;
@property(nonatomic) double wordSpacing; // @synthesize wordSpacing=_wordSpacing;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSMutableAttributedString *text; // @synthesize text=_text;
@property(nonatomic) __weak MSPDFState *state; // @synthesize state=_state;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rise; // @synthesize rise=_rise;
@property(retain, nonatomic) NSAffineTransform *renderingTransform; // @synthesize renderingTransform=_renderingTransform;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSAffineTransform *lineTransform; // @synthesize lineTransform=_lineTransform;
@property(nonatomic) double leading; // @synthesize leading=_leading;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) double characterSpacing; // @synthesize characterSpacing=_characterSpacing;
- (void).cxx_destruct;
- (void)appendText:(id)arg1;
- (id)attributes;
- (void)setTransform:(id)arg1 resettingLineTransform:(BOOL)arg2;
- (void)resetRenderingTransform;
- (BOOL)shouldClip;
- (BOOL)shouldStroke;
- (BOOL)shouldFill;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@end
