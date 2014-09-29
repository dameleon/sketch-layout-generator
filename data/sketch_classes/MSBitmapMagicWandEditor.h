@interface MSBitmapMagicWandEditor : MSBitmapEditor
{
BOOL _didDrag;	// 8 = 0x8
NSBitmapImageRep *_mask;	// 16 = 0x10
NSBitmapImageRep *_cachedBitSafeRep;	// 24 = 0x18
NSOperationQueue *_queue;	// 32 = 0x20
struct CGPoint _mouseDownPoint;	// 40 = 0x28
struct CGPoint _mouseEndPoint;	// 56 = 0x38
}
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(retain, nonatomic) NSBitmapImageRep *cachedBitSafeRep; // @synthesize cachedBitSafeRep=_cachedBitSafeRep;
@property(retain, nonatomic) NSBitmapImageRep *mask; // @synthesize mask=_mask;
@property(nonatomic) struct CGPoint mouseEndPoint; // @synthesize mouseEndPoint=_mouseEndPoint;
@property(nonatomic) struct CGPoint mouseDownPoint; // @synthesize mouseDownPoint=_mouseDownPoint;
- (void).cxx_destruct;
- (BOOL)isValidRect:(struct CGRect)arg1;
- (void)drawOvals;
- (void)drawMask;
- (void)draw;
- (void)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (double)tolerance;
- (void)magicWandWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)mouseDragged:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)init;
@end
