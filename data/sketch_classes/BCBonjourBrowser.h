@interface BCBonjourBrowser : NSObject <NSNetServiceBrowserDelegate>
{
CDUnknownBlockType _foundAction;	// 8 = 0x8
CDUnknownBlockType _removedAction;	// 16 = 0x10
NSNetServiceBrowser *_browser;	// 24 = 0x18
}
@property(retain, nonatomic) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(copy, nonatomic) CDUnknownBlockType removedAction; // @synthesize removedAction=_removedAction;
@property(copy, nonatomic) CDUnknownBlockType foundAction; // @synthesize foundAction=_foundAction;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)cleanup;
- (void)dealloc;
- (id)init;
@end
