@interface MSTilePlacer : NSObject
{
MSContentDrawView *_contentView;	// 8 = 0x8
NSMutableDictionary *_tiles;	// 16 = 0x10
}
@property(retain, nonatomic) NSMutableDictionary *tiles; // @synthesize tiles=_tiles;
@property(nonatomic) __weak MSContentDrawView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allTileIDs;
- (id)allTiles;
- (id)idForTile:(id)arg1;
- (void)setPositionForTile:(id)arg1 withID:(id)arg2;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (id)tilesWithIDs:(id)arg1;
- (void)addTiles:(id)arg1 shouldRedraw:(BOOL)arg2;
- (void)addMissingTilesFrom:(id)arg1;
- (void)unregisterTilesWithIDs:(id)arg1;
- (void)removeTilesWithIDsFromSuperLayer:(id)arg1;
- (void)removeTilesWithIDs:(id)arg1;
- (void)removeTilesNotIncludedIn:(id)arg1;
- (struct CGPoint)originForFirstTile;
- (id)requiredTileIdentifiersWithExtraMargin:(BOOL)arg1;
- (void)repositionExistingTiles;
- (void)tile;
- (void)moveTiles;
- (id)init;
@end
