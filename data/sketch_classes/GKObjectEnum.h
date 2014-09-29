@interface GKObjectEnum : NSObject <NSCopying>
{
long long type;	// 8 = 0x8
}
- (id)description;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1;
@end
