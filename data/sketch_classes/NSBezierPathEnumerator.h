@interface NSBezierPathEnumerator : NSObject <NSFastEnumeration>
{
NSBezierPath *bezierPath;	// 8 = 0x8
BOOL reverse;	// 16 = 0x10
}
@property(nonatomic) BOOL reverse; // @synthesize reverse;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath;
- (void).cxx_destruct;
- (id)pathItems;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@end
