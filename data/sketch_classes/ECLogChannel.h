@interface ECLogChannel : NSObject
{
BOOL enabled;	// 8 = 0x8
BOOL setup;	// 9 = 0x9
NSString *name;	// 16 = 0x10
NSMutableSet *handlers;	// 24 = 0x18
int context;	// 32 = 0x20
NSNumber *level;	// 40 = 0x28
}
+ (id)cleanName:(const char *)arg1;
@property(nonatomic) BOOL setup; // @synthesize setup;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSNumber *level; // @synthesize level;
@property(retain, nonatomic) NSMutableSet *handlers; // @synthesize handlers;
@property(nonatomic) BOOL enabled; // @synthesize enabled;
@property(nonatomic) int context; // @synthesize context;
- (void).cxx_destruct;
- (void)selectHandlerWithIndex:(unsigned long long)arg1;
- (BOOL)tickHandlerWithIndex:(unsigned long long)arg1;
- (void)selectFlagWithIndex:(unsigned long long)arg1;
- (BOOL)tickFlagWithIndex:(unsigned long long)arg1;
- (id)stringFromContext:(CDStruct_5b5d1a5d *)arg1;
- (id)fileFromContext:(CDStruct_5b5d1a5d *)arg1;
- (BOOL)showContext:(int)arg1;
- (long long)caseInsensitiveCompare:(id)arg1;
- (BOOL)isHandlerEnabled:(id)arg1;
- (void)disableHandler:(id)arg1;
- (void)enableHandler:(id)arg1;
- (void)disable;
- (void)enable;
- (id)initWithName:(id)arg1;
@end
