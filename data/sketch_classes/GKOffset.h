@interface GKOffset : NSObject <NSCopying>
{
struct CGSize offset;	// 8 = 0x8
}
+ (id)offsetFromPoint:(id)arg1 toPoint:(id)arg2;
+ (id)offsetWithPoint:(struct CGPoint)arg1;
+ (id)offsetWithSize:(struct CGSize)arg1;
+ (id)offsetWithValue:(double)arg1;
@property struct CGSize offset; // @synthesize offset;
- (id)description;
- (BOOL)isSmallerThanOffset:(id)arg1;
@property struct CGPoint point; // @dynamic point;
@property double yOffset; // @dynamic yOffset;
@property double xOffset; // @dynamic xOffset;
- (id)invert;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(struct CGSize)arg1;
@end
