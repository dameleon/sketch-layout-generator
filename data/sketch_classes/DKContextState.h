@interface DKContextState : NSObject <NSCopying>
{
NSMutableArray *_alphaStack;	// 8 = 0x8
DKContext *_parentContext;	// 16 = 0x10
}
@property(nonatomic) __weak DKContext *parentContext; // @synthesize parentContext=_parentContext;
@property(retain, nonatomic) NSMutableArray *alphaStack; // @synthesize alphaStack=_alphaStack;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)totalAlpha;
- (void)applyAlpha;
- (void)popAlpha;
- (void)pushAlpha:(double)arg1;
- (id)initWithParentContext:(id)arg1;
@end
