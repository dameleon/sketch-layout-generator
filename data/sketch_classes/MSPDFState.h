@interface MSPDFState : NSObject <NSCopying>
{
BOOL _clippingUpdated;	// 8 = 0x8
BOOL _containsClippedItems;	// 9 = 0x9
BOOL _pathClosed;	// 10 = 0xa
BOOL _pathUsed;	// 11 = 0xb
BOOL _pathWasRect;	// 12 = 0xc
int _renderingIntent;	// 16 = 0x10
double _borderAlphaConstant;	// 24 = 0x18
NSColor *_borderColor;	// 32 = 0x20
NSColorSpace *_borderColorSpace;	// 40 = 0x28
PDFFunction *_borderColorSpaceMapping;	// 48 = 0x30
NSArray *_borderDashes;	// 56 = 0x38
unsigned long long _borderCapStyle;	// 64 = 0x40
PDFPattern *_borderGradient;	// 72 = 0x48
unsigned long long _borderJoinStyle;	// 80 = 0x50
double _borderThickness;	// 88 = 0x58
unsigned long long _clippingMode;	// 96 = 0x60
NSBezierPath *_clippingPath;	// 104 = 0x68
double _fillAlphaConstant;	// 112 = 0x70
NSColor *_fillColor;	// 120 = 0x78
NSColorSpace *_fillColorSpace;	// 128 = 0x80
PDFFunction *_fillColorSpaceMapping;	// 136 = 0x88
PDFPattern *_fillGradient;	// 144 = 0x90
NSMutableArray *_layers;	// 152 = 0x98
NSBezierPath *_path;	// 160 = 0xa0
MSPDFTextState *_text;	// 168 = 0xa8
NSBezierPath *_transformedPath;	// 176 = 0xb0
NSAffineTransform *_transform;	// 184 = 0xb8
NSAffineTransform *_flippedTransform;	// 192 = 0xc0
struct CGPoint _currentPoint;	// 200 = 0xc8
}
@property(retain, nonatomic) NSAffineTransform *flippedTransform; // @synthesize flippedTransform=_flippedTransform;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSBezierPath *transformedPath; // @synthesize transformedPath=_transformedPath;
@property(retain, nonatomic) MSPDFTextState *text; // @synthesize text=_text;
@property(nonatomic) int renderingIntent; // @synthesize renderingIntent=_renderingIntent;
@property(nonatomic) BOOL pathWasRect; // @synthesize pathWasRect=_pathWasRect;
@property(nonatomic) BOOL pathUsed; // @synthesize pathUsed=_pathUsed;
@property(nonatomic) BOOL pathClosed; // @synthesize pathClosed=_pathClosed;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) PDFPattern *fillGradient; // @synthesize fillGradient=_fillGradient;
@property(retain, nonatomic) PDFFunction *fillColorSpaceMapping; // @synthesize fillColorSpaceMapping=_fillColorSpaceMapping;
@property(retain, nonatomic) NSColorSpace *fillColorSpace; // @synthesize fillColorSpace=_fillColorSpace;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double fillAlphaConstant; // @synthesize fillAlphaConstant=_fillAlphaConstant;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) BOOL containsClippedItems; // @synthesize containsClippedItems=_containsClippedItems;
@property(nonatomic) BOOL clippingUpdated; // @synthesize clippingUpdated=_clippingUpdated;
@property(retain, nonatomic) NSBezierPath *clippingPath; // @synthesize clippingPath=_clippingPath;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(nonatomic) double borderThickness; // @synthesize borderThickness=_borderThickness;
@property(nonatomic) unsigned long long borderJoinStyle; // @synthesize borderJoinStyle=_borderJoinStyle;
@property(retain, nonatomic) PDFPattern *borderGradient; // @synthesize borderGradient=_borderGradient;
@property(nonatomic) unsigned long long borderCapStyle; // @synthesize borderCapStyle=_borderCapStyle;
@property(retain, nonatomic) NSArray *borderDashes; // @synthesize borderDashes=_borderDashes;
@property(retain, nonatomic) PDFFunction *borderColorSpaceMapping; // @synthesize borderColorSpaceMapping=_borderColorSpaceMapping;
@property(retain, nonatomic) NSColorSpace *borderColorSpace; // @synthesize borderColorSpace=_borderColorSpace;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderAlphaConstant; // @synthesize borderAlphaConstant=_borderAlphaConstant;
- (void).cxx_destruct;
- (id)description;
- (id)stringFromTransform:(id)arg1;
- (id)transformedClippingPath;
- (void)updateClippingWithTextPath:(id)arg1;
- (void)updateClipping;
- (CDStruct_8727d297)transformStruct;
- (id)transformBezierPath:(id)arg1;
- (struct CGSize)transformSize:(struct CGSize)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (void)appendTransform:(id)arg1;
- (void)resetTransform:(id)arg1;
- (void)resetFlipped;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)lastLayer;
- (id)layerWithEnclosingGroup:(BOOL)arg1;
- (void)addLayer:(id)arg1;
- (id)init;
@end
