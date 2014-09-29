@interface BCScreenGrab : NSObject
{
unsigned int _displayID;	// 8 = 0x8
NSImage *_image;	// 16 = 0x10
NSBitmapImageRep *_bitmapRep;	// 24 = 0x18
NSColorSpace *_colorSpace;	// 32 = 0x20
}
+ (id)screenGrabForDisplay:(unsigned int)arg1;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) NSBitmapImageRep *bitmapRep; // @synthesize bitmapRep=_bitmapRep;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
- (void).cxx_destruct;
- (id)currentScreen;
- (BOOL)isRetinaScreen;
@property(readonly, nonatomic) struct CGRect screenFrame; // @dynamic screenFrame;
@end
