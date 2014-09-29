@interface FBBezierIntersection : NSObject
{
struct CGPoint _location;	// 8 = 0x8
FBBezierCurve *_curve1LeftBezier;	// 24 = 0x18
FBBezierCurve *_curve1RightBezier;	// 32 = 0x20
FBBezierCurve *_curve2LeftBezier;	// 40 = 0x28
FBBezierCurve *_curve2RightBezier;	// 48 = 0x30
BOOL _tangent;	// 56 = 0x38
BOOL _needToComputeCurve1;	// 57 = 0x39
BOOL _needToComputeCurve2;	// 58 = 0x3a
FBBezierCurve *_curve1;	// 64 = 0x40
double _parameter1;	// 72 = 0x48
FBBezierCurve *_curve2;	// 80 = 0x50
double _parameter2;	// 88 = 0x58
}
+ (id)intersectionWithCurve1:(id)arg1 parameter1:(double)arg2 curve2:(id)arg3 parameter2:(double)arg4;
@property(readonly, nonatomic) double parameter2; // @synthesize parameter2=_parameter2;
@property(readonly, nonatomic) FBBezierCurve *curve2; // @synthesize curve2=_curve2;
@property(readonly, nonatomic) double parameter1; // @synthesize parameter1=_parameter1;
@property(readonly, nonatomic) FBBezierCurve *curve1; // @synthesize curve1=_curve1;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateAliasesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAliasesOfCurve:(id)arg1 atParameter:(double)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)computeCurve2;
- (void)computeCurve1;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve) BOOL atEndPointOfCurve;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve2) BOOL atEndPointOfCurve2;
@property(readonly, nonatomic, getter=isAtStopOfCurve2) BOOL atStopOfCurve2;
@property(readonly, nonatomic, getter=isAtStartOfCurve2) BOOL atStartOfCurve2;
@property(readonly, nonatomic, getter=isAtEndPointOfCurve1) BOOL atEndPointOfCurve1;
@property(readonly, nonatomic, getter=isAtStopOfCurve1) BOOL atStopOfCurve1;
@property(readonly, nonatomic, getter=isAtStartOfCurve1) BOOL atStartOfCurve1;
- (double)curve2Threshold;
- (double)curve1Threshold;
- (double)curve2ExactThreshold;
- (double)curve1ExactThreshold;
- (double)curve2ThresholdWithWeight:(double)arg1 maximum:(double)arg2;
- (double)curve1ThresholdWithWeight:(double)arg1 maximum:(double)arg2;
@property(readonly, nonatomic) BOOL isAtExactStopOfCurve2;
@property(readonly, nonatomic) BOOL isAtExactStartOfCurve2;
@property(readonly, nonatomic) BOOL isAtExactStopOfCurve1;
@property(readonly, nonatomic) BOOL isAtExactStartOfCurve1;
@property(readonly, nonatomic) FBBezierCurve *curve2RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve2LeftBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1RightBezier;
@property(readonly, nonatomic) FBBezierCurve *curve1LeftBezier;
- (long long)curve2WindingCount;
- (long long)curve1WindingCount;
- (struct CGPoint)curve2Direction;
- (struct CGPoint)curve1Direction;
@property(readonly, nonatomic, getter=isTangent) BOOL tangent;
@property(readonly, nonatomic) struct CGPoint location;
- (id)initWithCurve1:(id)arg1 parameter1:(double)arg2 curve2:(id)arg3 parameter2:(double)arg4;
@end
