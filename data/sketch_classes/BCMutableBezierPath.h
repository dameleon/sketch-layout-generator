@interface BCMutableBezierPath : BCBezierPath
{
}
- (id)bezierPathWithLineWidth:(double)arg1;
- (id)joinedWith:(id)arg1;
- (id)reversedPath;
- (id)booleanOp:(long long)arg1 withPath:(id)arg2;
- (id)booleanExclusiveOrWith:(id)arg1;
- (id)booleanSubtractWith:(id)arg1;
- (id)booleanIntersectWith:(id)arg1;
- (id)booleanUnionWith:(id)arg1;
- (id)bezierPathByGrowingBy_deprecated:(double)arg1;
- (id)insetPathBy:(double)arg1;
- (id)outerPathOfSize:(double)arg1;
- (id)outlinePath;
- (id)outlinePathWithWidth:(double)arg1;
- (id)transformedPath:(id)arg1;
- (void)appendBezierPath:(id)arg1;
@property(copy, nonatomic) NSArray *dashPattern; // @dynamic dashPattern;
@property(nonatomic) unsigned long long lineJoinStyle; // @dynamic lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle; // @dynamic lineCapStyle;
@property(nonatomic) unsigned long long windingRule; // @dynamic windingRule;
@property(nonatomic) double lineWidth; // @dynamic lineWidth;
@end
