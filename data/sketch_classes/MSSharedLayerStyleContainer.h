@interface MSSharedLayerStyleContainer : _MSSharedLayerStyleContainer
{
NSDictionary *_legacyLayerStylesForUpgrading;	// 8 = 0x8
}
@property(retain, nonatomic) NSDictionary *legacyLayerStylesForUpgrading; // @synthesize legacyLayerStylesForUpgrading=_legacyLayerStylesForUpgrading;
- (void).cxx_destruct;
- (void)registerInstance:(id)arg1 withSharedStyle:(id)arg2;
- (unsigned long long)numberOfSharedStyles;
- (long long)indexOfSharedStyle:(id)arg1;
- (id)sharedStyleAtIndex:(unsigned long long)arg1;
- (id)sharedStyleWithID:(id)arg1;
- (id)sharedStyleForInstance:(id)arg1;
- (BOOL)isSharedStyleForInstance:(id)arg1;
- (void)removeSharedStyle:(id)arg1;
- (id)mergeSharedStyleWithName:(id)arg1 sharedStyleID:(id)arg2 instance:(id)arg3;
- (id)addSharedStyleWithName:(id)arg1 firstInstance:(id)arg2;
- (void)enumeratePotentialInstancesInLayer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)validStyleType;
- (Class)sharedObjectClass;
- (void)upgradeWithDocument:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
@end
