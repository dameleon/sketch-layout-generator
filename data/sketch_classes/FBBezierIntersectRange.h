@interface FBBezierIntersectRange : NSObject
{
FBBezierCurve *_curve1LeftBezier;	// 8 = 0x8
FBBezierCurve *_curve1MiddleBezier;	// 16 = 0x10
FBBezierCurve *_curve1RightBezier;	// 24 = 0x18
BOOL _needToComputeCurve1;	// 32 = 0x20
FBBezierCurve *_curve2LeftBezier;	// 40 = 0x28
FBBezierCurve *_curve2MiddleBezier;	// 48 = 0x30
FBBezierCurve *_curve2RightBezier;	// 56 = 0x38
BOOL _needToComputeCurve2;	// 64 = 0x40
BOOL _reversed;	// 65 = 0x41
FBBezierCurve *_curve1;	// 72 = 0x48
FBBezierCurve *_curve2;	// 80 = 0x50
struct FBRange _parameterRange1;	// 88 = 0x58
struct FBRange _parameterRange2;	// 104 = 0x68
}
+ (id)intersectRangeWithCurve1:(id)arg1 parameterRange1:(struct FBRange)arg2 curve2:(id)arg3 parameterRange2:(struct FBRange)arg4 reversed:(BOOL)arg5;
@property(readonly, nonatomic) BOOL reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) struct FBRange parameterRange2; // @synthesize parameterRange2=_parameterRange2;
@property(readonly, nonatomic) FBBezierCurve *curve2; // @synthesize curve2=_curve2;
@property(readonly, nonatomic) struct FBRange parameterRange1; // @synthesize parameterRange1=_parameterRange1;
@property(readonly, nonatomic) FBBezierCurve *curve1; // @synthesize curve1=_curve1;
- (void).cxx_destruct;
- (id)description;
- (void)clearCache;
- (void)merge:(id)arg1;
- (id)flip;
@property(readonly, nonatomic) FBBezierIntersection *middleIntersection;
@property(readonly, nonatomic, getter=isAtStopOfCurve2) BOOL atStopOfCurve2;
@property(readonly, nonatomic, getter=isAtStartOfCurve2) BOOL atStartOfCurve2;
@property(readonly, nonatomic, getter=isAtStopOfCurve1) BOOL atStopOfCurve1;
@property(readonly, nonatomic, getter=isAtStartOfCurve1) BOOL atStartOfCurve1;
- (void)computeCurve2;
- (void)computeCurve1;
@property(readonly, nonatomic) FBBezierCurve *curve2RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2OverlappingBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2LeftBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1OverlappingBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1LeftBezier;
- (id)initWithCurve1:(id)arg1 parameterRange1:(struct FBRange)arg2 curve2:(id)arg3 parameterRange2:(struct FBRange)arg4 reversed:(BOOL)arg5;
@end
