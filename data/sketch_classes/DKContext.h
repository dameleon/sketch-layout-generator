@interface DKContext : NSObject
{
struct CGContext *_contextRef;	// 8 = 0x8
struct CGAffineTransform _totalTransform;	// 16 = 0x10
BOOL _isDrawingPixelated;	// 64 = 0x40
BOOL _contextFlippedHorizontal;	// 65 = 0x41
BOOL _contextFlippedVertical;	// 66 = 0x42
NSColorSpace *_colorSpace;	// 72 = 0x48
double _zoomLevel;	// 80 = 0x50
DKContextAttributes *_attributes;	// 88 = 0x58
id <DKContextDelegate> _delegate;	// 96 = 0x60
double _contextRotation;	// 104 = 0x68
NSMutableArray *_reusableContextTransforms;	// 112 = 0x70
NSMutableArray *_transformStack;	// 120 = 0x78
NSMutableArray *_blendStack;	// 128 = 0x80
NSMutableArray *_contextStates;	// 136 = 0x88
NSMutableArray *_reusableContextStates;	// 144 = 0x90
struct CGPoint _scrollOrigin;	// 152 = 0x98
}
+ (id)contextWithContextRef:(struct CGContext *)arg1 atZoomLevel:(double)arg2;
+ (struct CGContext *)currentCGContext;
+ (void)restoreGraphicsState;
+ (void)saveGraphicsState;
@property(retain, nonatomic) NSMutableArray *reusableContextStates; // @synthesize reusableContextStates=_reusableContextStates;
@property(retain, nonatomic) NSMutableArray *contextStates; // @synthesize contextStates=_contextStates;
@property(retain, nonatomic) NSMutableArray *blendStack; // @synthesize blendStack=_blendStack;
@property(retain, nonatomic) NSMutableArray *transformStack; // @synthesize transformStack=_transformStack;
@property(retain, nonatomic) NSMutableArray *reusableContextTransforms; // @synthesize reusableContextTransforms=_reusableContextTransforms;
@property(nonatomic) BOOL contextFlippedVertical; // @synthesize contextFlippedVertical=_contextFlippedVertical;
@property(nonatomic) BOOL contextFlippedHorizontal; // @synthesize contextFlippedHorizontal=_contextFlippedHorizontal;
@property(nonatomic) double contextRotation; // @synthesize contextRotation=_contextRotation;
@property(nonatomic) BOOL isDrawingPixelated; // @synthesize isDrawingPixelated=_isDrawingPixelated;
@property(nonatomic) __weak id <DKContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) DKContextAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)resetContextRotation;
- (void)contextRotateBy:(double)arg1;
- (void)endTransformable:(id)arg1;
- (void)beginTransformable:(id)arg1;
- (BOOL)needsToDrawRect:(struct CGRect)arg1;
- (void)popBlendMode;
- (void)pushBlendMode:(int)arg1;
- (void)popAlpha;
- (void)pushAlpha:(double)arg1;
- (void)disableFontSubpixelQuantizationInBlock:(CDUnknownBlockType)arg1;
- (void)setShouldSubPixelAntialiasText:(BOOL)arg1;
- (BOOL)isFlippedVertical;
- (BOOL)isFlippedHorizontal;
- (double)currentRotation;
- (void)applyTransform:(id)arg1;
- (void)addContextState;
- (void)removeContextState;
- (void)endTransparencyLayer;
- (void)beginTransparencyLayerInRect:(struct CGRect)arg1;
- (void)beginTransparencyLayer;
- (void)popGraphicsState;
- (void)pushGraphicsState;
- (void)prepareTransformForReuse:(id)arg1;
- (id)findContextTransform;
- (id)contextTransform;
- (void)reverseTransformGroup;
- (void)beginTransformGroup;
- (void)reverse;
- (void)pushTransform:(id)arg1;
- (void)flipVertical;
- (void)flipHorizontal;
- (void)rotateBy:(double)arg1 aroundPoint:(struct CGPoint)arg2;
- (void)rotateBy:(double)arg1;
- (void)offsetBy:(struct CGPoint)arg1;
- (void)offsetByX:(double)arg1 Y:(double)arg2;
- (void)dealloc;
- (void)tearDown;
- (id)backingContext;
- (void)setUp;
@property(readonly, nonatomic) struct CGContext *contextRef; // @dynamic contextRef;
- (id)initWithContextRef:(struct CGContext *)arg1 atZoomLevel:(double)arg2;
@end
