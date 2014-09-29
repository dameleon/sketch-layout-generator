@interface MSTileRemoveCollector : NSObject <MSTileDelegate>
{
long long _tilesToFinishRendering;	// 8 = 0x8
CALayer *_masterTile;	// 16 = 0x10
id <MSTileRemoveCollector> _delegate;	// 24 = 0x18
}
@property(nonatomic) __weak id <MSTileRemoveCollector> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CALayer *masterTile; // @synthesize masterTile=_masterTile;
- (void).cxx_destruct;
- (void)clear;
- (void)collectTiles:(id)arg1;
- (void)tileDidDraw:(id)arg1 page:(id)arg2;
@end
