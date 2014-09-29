@interface MSArchiver : NSKeyedArchiver
{
BOOL _archiveObjectIDs;	// 144 = 0x90
NSMutableSet *_archivedImages;	// 152 = 0x98
}
+ (BOOL)archiveRootObject:(id)arg1 withObjectIDs:(BOOL)arg2 toURL:(id)arg3;
+ (id)archivedDataWithHeaderAndRootObject:(id)arg1 withObjectIDs:(BOOL)arg2;
+ (id)archivedDataWithRootObject:(id)arg1 withObjectIDs:(BOOL)arg2;
@property(retain, nonatomic) NSMutableSet *archivedImages; // @synthesize archivedImages=_archivedImages;
@property(nonatomic) BOOL archiveObjectIDs; // @synthesize archiveObjectIDs=_archiveObjectIDs;
- (void).cxx_destruct;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
@end
