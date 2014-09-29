@interface MSAbsoluteRect : GKRect
{
void *rectObservationInfo;	// 8 = 0x8
MSLayer *_layer;	// 16 = 0x10
NSBezierPath *_cachedTransformedBounds;	// 24 = 0x18
struct CGPoint _absP1;	// 32 = 0x20
struct CGPoint _absP2;	// 48 = 0x30
struct CGPoint _absP3;	// 64 = 0x40
struct CGPoint _absP4;	// 80 = 0x50
struct CGRect _cachedAbsoluteRect;	// 96 = 0x60
}
@property(nonatomic) struct CGRect cachedAbsoluteRect; // @synthesize cachedAbsoluteRect=_cachedAbsoluteRect;
@property(nonatomic) struct CGPoint absP4; // @synthesize absP4=_absP4;
@property(nonatomic) struct CGPoint absP3; // @synthesize absP3=_absP3;
@property(nonatomic) struct CGPoint absP2; // @synthesize absP2=_absP2;
@property(nonatomic) struct CGPoint absP1; // @synthesize absP1=_absP1;
@property(retain, nonatomic) NSBezierPath *cachedTransformedBounds; // @synthesize cachedTransformedBounds=_cachedTransformedBounds;
@property(nonatomic) __weak MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double rulerY; // @dynamic rulerY;
@property(nonatomic) double rulerX; // @dynamic rulerX;
- (id)parentRoot;
- (void)setRect:(struct CGRect)arg1;
- (struct CGRect)rect;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)setWidth:(double)arg1;
- (double)width;
- (double)y;
- (void)moveInAbsoluteCoordinatesBy:(struct CGPoint)arg1;
- (void)setY:(double)arg1;
- (void)setX:(double)arg1;
- (double)x;
- (id)GKRect;
- (BOOL)boundsContainsPoint:(struct CGPoint)arg1;
- (void)calculateAbsolutePoints;
- (struct CGRect)absoluteRect;
- (void)clearPositionCaches;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (id)initWithLayer:(id)arg1;
@end
