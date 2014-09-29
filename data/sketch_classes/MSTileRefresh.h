@interface MSTileRefresh : NSObject
{
MSPage *_page;	// 8 = 0x8
NSColorSpace *_colorSpace;	// 16 = 0x10
NSArray *_artboardFrames;	// 24 = 0x18
struct CGRect _contentRect;	// 32 = 0x20
}
@property(retain, nonatomic) NSArray *artboardFrames; // @synthesize artboardFrames=_artboardFrames;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
- (void).cxx_destruct;
@end
