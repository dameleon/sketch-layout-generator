@interface FBCurveLocation : NSObject
{
FBBezierGraph *_graph;	// 8 = 0x8
FBBezierContour *_contour;	// 16 = 0x10
FBBezierCurve *_edge;	// 24 = 0x18
double _parameter;	// 32 = 0x20
double _distance;	// 40 = 0x28
}
+ (id)curveLocationWithEdge:(id)arg1 parameter:(double)arg2 distance:(double)arg3;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double parameter; // @synthesize parameter=_parameter;
@property(readonly, nonatomic) FBBezierCurve *edge; // @synthesize edge=_edge;
@property(retain, nonatomic) FBBezierContour *contour; // @synthesize contour=_contour;
@property(retain, nonatomic) FBBezierGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)initWithEdge:(id)arg1 parameter:(double)arg2 distance:(double)arg3;
@end
