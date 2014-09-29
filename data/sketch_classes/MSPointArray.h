@interface MSPointArray : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
NSMutableArray *points;	// 8 = 0x8
}
+ (id)pointArray;
- (void).cxx_destruct;
- (id)treeAsDictionary;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (BOOL)pointAtIndex:(unsigned long long)arg1 isEqualToPoint:(struct CGPoint)arg2;
- (void)removeAllPoints;
- (void)replacePointAtIndex:(unsigned long long)arg1 withPoint:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setPoints:(id)arg1;
- (id)points;
- (unsigned long long)countOfPoints;
- (void)removePoint:(struct CGPoint)arg1;
- (void)removePointAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1;
- (void)insertPoint:(struct CGPoint)arg1 atIndex:(unsigned long long)arg2;
- (void)addPoint:(struct CGPoint)arg1;
- (id)init;
@end
