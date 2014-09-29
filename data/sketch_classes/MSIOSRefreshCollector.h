@interface MSIOSRefreshCollector : NSObject
{
NSTimer *_timer;	// 8 = 0x8
NSMapTable *_dirtyRectsPerArtboard;	// 16 = 0x10
MSIOSRefreshRenderer *_refreshRenderer;	// 24 = 0x18
MSIOSConnectionController *_connectionController;	// 32 = 0x20
}
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
@property(retain, nonatomic) MSIOSRefreshRenderer *refreshRenderer; // @synthesize refreshRenderer=_refreshRenderer;
@property(retain, nonatomic) NSMapTable *dirtyRectsPerArtboard; // @synthesize dirtyRectsPerArtboard=_dirtyRectsPerArtboard;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)totalRectForArtboard:(id)arg1;
- (void)timerFired:(id)arg1;
- (id)dirtyRectsForArtboard:(id)arg1;
- (void)collectRefreshRect:(struct CGRect)arg1 onArtboard:(id)arg2;
- (void)collectRefreshRect:(struct CGRect)arg1 page:(id)arg2;
- (BOOL)shouldCollectRefreshes;
- (void)scheduleTimerWithInterval:(double)arg1;
- (void)dealloc;
- (id)init;
@end
