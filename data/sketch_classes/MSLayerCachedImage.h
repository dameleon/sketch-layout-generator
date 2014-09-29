@interface MSLayerCachedImage : NSObject
{
NSBitmapImageRep *_image;	// 8 = 0x8
struct CGRect _rect;	// 16 = 0x10
}
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSBitmapImageRep *image; // @synthesize image=_image;
- (void).cxx_destruct;
@end
