@interface FBEdgeOverlap : NSObject
{
FBBezierIntersectRange *_range;	// 8 = 0x8
FBBezierCurve *_edge1;	// 16 = 0x10
FBBezierCurve *_edge2;	// 24 = 0x18
}
+ (id)overlapWithRange:(id)arg1 edge1:(id)arg2 edge2:(id)arg3;
@property(readonly, nonatomic) FBBezierCurve *edge2; // @synthesize edge2=_edge2;
@property(readonly, nonatomic) FBBezierCurve *edge1; // @synthesize edge1=_edge1;
@property(readonly, nonatomic) FBBezierIntersectRange *range; // @synthesize range=_range;
- (void).cxx_destruct;
- (id)description;
- (BOOL)doesContainParameter:(double)arg1 onEdge:(id)arg2 startExtends:(BOOL)arg3 endExtends:(BOOL)arg4;
- (id)middleIntersection;
- (void)addMiddleCrossing;
- (BOOL)fitsAfter:(id)arg1;
- (BOOL)fitsBefore:(id)arg1;
- (id)initWithRange:(id)arg1 edge1:(id)arg2 edge2:(id)arg3;
@end
