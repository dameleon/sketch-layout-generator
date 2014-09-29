@interface BCBezierPath : NSObject <NSCopying, NSMutableCopying>
{
NSBezierPath *_path;	// 8 = 0x8
}
+ (id)bezierPathWithRect:(struct CGRect)arg1;
+ (id)bezierPathWithPaths:(id)arg1;
+ (id)bezierPathWithNSBezierPath:(id)arg1;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)controlPointBounds;
- (struct CGRect)safeBounds;
- (struct CGRect)bounds;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (unsigned long long)elementAtIndex:(long long)arg1;
- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;
@property(readonly, nonatomic) struct CGPoint lastPoint; // @dynamic lastPoint;
@property(readonly, nonatomic) struct CGPoint firstPoint; // @dynamic firstPoint;
@property(readonly, nonatomic) BOOL isEmpty; // @dynamic isEmpty;
@property(readonly, nonatomic) unsigned long long lineJoinStyle; // @dynamic lineJoinStyle;
@property(readonly, nonatomic) unsigned long long lineCapStyle; // @dynamic lineCapStyle;
@property(readonly, nonatomic) double length; // @dynamic length;
@property(readonly, nonatomic) unsigned long long elementCount; // @dynamic elementCount;
@property(readonly, nonatomic) unsigned long long windingRule; // @dynamic windingRule;
- (void)setLineWidth:(double)arg1;
@property(readonly, nonatomic) double lineWidth; // @dynamic lineWidth;
- (void)clipInBlock:(CDUnknownBlockType)arg1;
- (void)addClip;
- (void)strokeWithWidth:(double)arg1;
- (void)fillNonZero;
- (void)fillEvenOdd;
- (void)fill;
@property(readonly, nonatomic) NSBezierPath *bezierPath; // @dynamic bezierPath;
- (id)subPaths;
- (id)unCachedBezierPathWithSquareLineCapStyle;
- (id)bezierPathWithSquareLineCapStyle;
- (id)bezierPathWithLineWidth:(double)arg1;
- (id)joinedWith:(id)arg1;
- (id)bezierPathByFlatteningPath;
- (id)reversedPath;
- (id)booleanOp:(long long)arg1 withPath:(id)arg2;
- (id)booleanExclusiveOrWith:(id)arg1;
- (id)booleanSubtractWith:(id)arg1;
- (id)booleanIntersectWith:(id)arg1;
- (id)booleanUnionWith:(id)arg1;
- (id)unCachedOuterPathWithRect:(struct CGRect)arg1;
- (id)outerPathWithRect:(struct CGRect)arg1;
- (id)unCachedInsetPathBy:(double)arg1;
- (id)insetPathBy:(double)arg1;
- (id)bezierPathByGrowingBy_deprecated:(double)arg1;
- (id)unCachedOuterPathOfSize:(double)arg1;
- (id)outerPathOfSize:(double)arg1;
- (id)outlinePath;
- (id)unCachedOutlinePathWithWidth:(double)arg1;
- (id)outlinePathWithWidth:(double)arg1;
- (id)unCachedTransformedPath:(id)arg1;
- (id)transformedPath:(id)arg1;
@end
