@interface MSNormalMultipleResizeEventHandler : MSNormalBaseEventHandler
{
struct CGPoint midPoint;	// 128 = 0x80
struct CGPoint oppositePoint;	// 144 = 0x90
NSArray *layers;	// 160 = 0xa0
long long resizingCorner;	// 168 = 0xa8
MSRect *originalRect;	// 176 = 0xb0
NSArray *originalLayerRects;	// 184 = 0xb8
}
@property(copy, nonatomic) NSArray *layers; // @synthesize layers;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner;
- (void).cxx_destruct;
- (BOOL)mouseDraggedOutsideViewShouldMoveScrollOrigin;
- (id)oppositeCorner;
- (void)handlerWillLoseFocus;
- (BOOL)mouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)placeRectInOppositeCorner:(id)arg1;
- (void)makeRectConform:(id)arg1 toProportions:(BOOL)arg2;
- (BOOL)mouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)refresh;
- (void)calculateOppositePoint;
- (void)calculateMidPoint;
- (void)displayResizeCursor;
- (void)storeCurrentLayerFrame;
- (void)pushTransformsDown:(id)arg1;
- (void)flattenRotatedShapes;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
@end
