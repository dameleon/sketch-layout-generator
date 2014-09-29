@interface FBTangentIterator : NSObject
{
double _leftBaseOffset;	// 8 = 0x8
double _rightBaseOffset;	// 16 = 0x10
FBBezierCurve *_leftCurve;	// 24 = 0x18
FBBezierCurve *_rightCurve;	// 32 = 0x20
double _offset;	// 40 = 0x28
double _offsetStep;	// 48 = 0x30
double _offsetMaximum;	// 56 = 0x38
}
+ (id)tangentIteratorWithIntersection:(id)arg1 onCurve:(id)arg2;
@property(nonatomic) double offsetMaximum; // @synthesize offsetMaximum=_offsetMaximum;
@property(nonatomic) double offsetStep; // @synthesize offsetStep=_offsetStep;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) FBBezierCurve *rightCurve; // @synthesize rightCurve=_rightCurve;
@property(retain, nonatomic) FBBezierCurve *leftCurve; // @synthesize leftCurve=_leftCurve;
- (void).cxx_destruct;
- (void)updateCurves;
@property(readonly, nonatomic) double rightOffset;
@property(readonly, nonatomic) double leftOffset;
- (BOOL)next:(struct CGPoint [2])arg1;
- (void)sync:(id)arg1;
- (void)commonInit;
- (id)initWithIntersection:(id)arg1 onCurve:(id)arg2;
@end
