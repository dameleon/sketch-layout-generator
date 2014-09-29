@interface DKContextAttributes : NSObject
{
BOOL _pageHasBlending;	// 8 = 0x8
BOOL _shouldFlipShadows;	// 9 = 0x9
NSColor *_backgroundColor;	// 16 = 0x10
id _rootObject;	// 24 = 0x18
double _shadowScale;	// 32 = 0x20
}
@property(nonatomic) BOOL shouldFlipShadows; // @synthesize shouldFlipShadows=_shouldFlipShadows;
@property(nonatomic) double shadowScale; // @synthesize shadowScale=_shadowScale;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL pageHasBlending; // @synthesize pageHasBlending=_pageHasBlending;
- (void).cxx_destruct;
- (id)init;
@end
