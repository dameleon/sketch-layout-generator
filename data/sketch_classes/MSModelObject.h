@interface MSModelObject : NSObject <NSCoding, NSCopying>
{
unsigned char _flags;	// 8 = 0x8
MSModelObject *_akParentObject;	// 16 = 0x10
id _objectID;	// 24 = 0x18
MSDocumentData *_documentData;	// 32 = 0x20
MSModelObject *_akLightweightCopy;	// 40 = 0x28
NSCache *_cache;	// 48 = 0x30
}
+ (void)performWithoutUpdateEvents:(CDUnknownBlockType)arg1;
+ (void)clearInstanceCount;
+ (void)printInstanceCount:(id)arg1;
@property(nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MSModelObject *akLightweightCopy; // @synthesize akLightweightCopy=_akLightweightCopy;
@property(nonatomic) __weak MSDocumentData *documentData; // @synthesize documentData=_documentData;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
@property(copy, nonatomic) id objectID; // @synthesize objectID=_objectID;
- (id)rootModelObject;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (BOOL)hasObjectID;
- (void)generateObjectID;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)sendMessageToRootObject:(unsigned long long)arg1;
- (void)childDidChangeNotification:(id)arg1;
- (void)notifyParentsOfPropertyChange:(id)arg1;
- (id)undoManager;
- (id)undoManagerWithoutCaching;
- (BOOL)isUndoing;
- (id)parentGroup;
- (void)setAsParentOnChildren;
- (void)propertyDidChange:(id)arg1;
@property(nonatomic) __weak MSModelObject *akParentObject; // @synthesize akParentObject=_akParentObject;
- (void)objectDidInit;
- (void)fillInEmptyObjects;
- (void)initEmptyObject;
- (id)initWithNoSetup;
- (id)init;
- (void)clearCachedValueForKey:(id)arg1;
- (void)clearCache;
- (void)updateCachedValue:(id)arg1 forKey:(id)arg2;
- (id)cachedValueForKey:(id)arg1 setUsingBlock:(CDUnknownBlockType)arg2;
- (id)cachedValueForKey:(id)arg1;
- (id)description;
- (id)treeAsDictionary;
- (id)simpleTreeStructure;
- (id)treeStructure;
- (void)appendTreeStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)appendSimpleStructureToString:(id)arg1 withIndent:(unsigned long long)arg2;
- (void)recordDeallocation;
- (void)recordAllocation;
- (id)migrationsInList:(SEL *)arg1;
- (SEL *)migrationListForClass:(Class)arg1;
- (SEL *)allocateMigrationListForClass:(Class)arg1;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)decodePropertiesUsingMigrationWithCoder:(id)arg1;
- (void)performMigrationsWithCoder:(id)arg1;
- (void)enumerateMigrations:(SEL *)arg1 fromVersion:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL isDecoding;
- (void)encodeObjectIDWithCoder:(id)arg1;
- (void)didCatchException:(id)arg1 duringEncodeWithCoder:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (id)copyEmpty;
- (void)prepareCopy:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyIncludingObjectIDS;
- (id)makeLightweightCopy;
- (id)copyLightweight;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
@property(nonatomic) BOOL isLightweightCopy;
- (Class)arrayClassForConvertingArrayPropertyWithName:(id)arg1;
- (BOOL)shouldConvertArrayPropertyWithName:(id)arg1;
- (void)setDecodedValue:(id)arg1 forKey:(id)arg2;
- (id)transformDecodedObjectIfNecessary:(id)arg1 key:(id)arg2;
- (id)decodeObjectWithPossibleConversionForKey:(id)arg1 coder:(id)arg2;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (id)archivingKeyForProperty:(id)arg1;
- (void)decodeObjectWithKey:(id)arg1 fromCoder:(id)arg2;
- (void)initLegacyWithCoder:(id)arg1;
- (void)decodePropertiesUsingLegacyMethodWithCoder:(id)arg1;
@end
