@interface MSSelectionPath : NSObject <NSCopying>
{
long long pointIndex;	// 8 = 0x8
unsigned long long curveIndex;	// 16 = 0x10
}
+ (id)selectionWithPoint:(long long)arg1 curve:(long long)arg2;
+ (id)emptySelection;
@property(nonatomic) unsigned long long curveIndex; // @synthesize curveIndex;
@property(nonatomic) long long pointIndex; // @synthesize pointIndex;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isLike:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@end
