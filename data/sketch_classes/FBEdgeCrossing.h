@interface FBEdgeCrossing : NSObject
{
BOOL _entry;	// 8 = 0x8
BOOL _processed;	// 9 = 0x9
BOOL _selfCrossing;	// 10 = 0xa
BOOL _fromCrossingOverlap;	// 11 = 0xb
BOOL _suspicious;	// 12 = 0xc
FBBezierCurve *_edge;	// 16 = 0x10
FBEdgeCrossing *_counterpart;	// 24 = 0x18
unsigned long long _index;	// 32 = 0x20
FBBezierIntersection *_intersection;	// 40 = 0x28
}
+ (id)crossingWithIntersection:(id)arg1;
@property(readonly, nonatomic) FBBezierIntersection *intersection; // @synthesize intersection=_intersection;
@property(nonatomic, getter=isSuspicious) BOOL suspicious; // @synthesize suspicious=_suspicious;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) BOOL fromCrossingOverlap; // @synthesize fromCrossingOverlap=_fromCrossingOverlap;
@property(nonatomic, getter=isSelfCrossing) BOOL selfCrossing; // @synthesize selfCrossing=_selfCrossing;
@property(nonatomic, getter=isProcessed) BOOL processed; // @synthesize processed=_processed;
@property(nonatomic, getter=isEntry) BOOL entry; // @synthesize entry=_entry;
@property(nonatomic) __weak FBEdgeCrossing *counterpart; // @synthesize counterpart=_counterpart;
@property(nonatomic) __weak FBBezierCurve *edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isAtEnd) BOOL atEnd;
@property(readonly, nonatomic, getter=isAtStart) BOOL atStart;
@property(readonly, nonatomic) FBBezierCurve *rightCurve;
@property(readonly, nonatomic) FBBezierCurve *leftCurve;
@property(readonly, nonatomic) FBBezierCurve *curve;
@property(readonly, nonatomic) struct CGPoint location;
@property(readonly, nonatomic) double parameter;
- (id)previousUsingNonself:(BOOL)arg1;
- (id)nextUsingNonself:(BOOL)arg1;
@property(readonly, nonatomic) FBEdgeCrossing *previous;
@property(readonly, nonatomic) FBEdgeCrossing *next;
@property(readonly, nonatomic) double order;
- (void)removeFromEdge;
- (id)initWithIntersection:(id)arg1;
@end
