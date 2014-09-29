@interface MSContentTileRefreshCollector : NSObject
{
BOOL isCoalescingRefreshes;	// 8 = 0x8
BOOL isFirstRefresh;	// 9 = 0x9
struct CGRect refreshRect;	// 16 = 0x10
MSContentTile *_contentTile;	// 48 = 0x30
}
@property(retain, nonatomic) MSContentTile *contentTile; // @synthesize contentTile=_contentTile;
- (void).cxx_destruct;
- (void)endRefreshCoalescing;
- (void)beginRefreshCoalescing;
- (void)coalesceRefreshRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(id)arg1;
@end
