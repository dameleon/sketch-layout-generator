@interface BCMagicWand : NSOperation
{
unsigned long long _width;	// 24 = 0x18
unsigned long long _height;	// 32 = 0x20
int _tolerance;	// 40 = 0x28
int _pushCounter;	// 44 = 0x2c
int _popCounter;	// 48 = 0x30
struct BCPixel _reference;	// 52 = 0x34
NSBitmapImageRep *_bitmap;	// 56 = 0x38
CDUnknownBlockType _wandCompletionBlock;	// 64 = 0x40
NSBitmapImageRep *_maskImage;	// 72 = 0x48
struct BCPixel *_pixels;	// 80 = 0x50
struct BCPixel *_mask;	// 88 = 0x58
char *_planned;	// 96 = 0x60
int *_nextVisits;	// 104 = 0x68
struct CGPoint _startPoint;	// 112 = 0x70
}
@property(nonatomic) int *nextVisits; // @synthesize nextVisits=_nextVisits;
@property(nonatomic) char *planned; // @synthesize planned=_planned;
@property(nonatomic) struct BCPixel reference; // @synthesize reference=_reference;
@property(nonatomic) int popCounter; // @synthesize popCounter=_popCounter;
@property(nonatomic) int pushCounter; // @synthesize pushCounter=_pushCounter;
@property(nonatomic) struct BCPixel *mask; // @synthesize mask=_mask;
@property(nonatomic) struct BCPixel *pixels; // @synthesize pixels=_pixels;
@property(retain, nonatomic) NSBitmapImageRep *maskImage; // @synthesize maskImage=_maskImage;
@property(copy, nonatomic) CDUnknownBlockType wandCompletionBlock; // @synthesize wandCompletionBlock=_wandCompletionBlock;
@property(retain, nonatomic) NSBitmapImageRep *bitmap; // @synthesize bitmap=_bitmap;
@property(nonatomic) int tolerance; // @synthesize tolerance=_tolerance;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (struct CGPoint)popVisit;
- (void)pushVisit:(struct CGPoint)arg1;
- (void)collectVisitsForPoint:(struct CGPoint)arg1;
- (BOOL)pointMatch:(struct CGPoint)arg1;
- (void)run;
- (void)setUpMaskImage;
- (void)main;
@end
