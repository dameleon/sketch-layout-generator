@interface MSRotatedRectSnapper : NSObject
{
MSLayer *_layer;	// 8 = 0x8
}
+ (id)rotatedFrameOfLayer:(id)arg1;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (id)GKRect;
- (struct CGRect)rect;
@property(readonly, nonatomic) double height; // @dynamic height;
@property(readonly, nonatomic) double width; // @dynamic width;
@property(nonatomic) double y; // @dynamic y;
@property(nonatomic) double x; // @dynamic x;
@end
