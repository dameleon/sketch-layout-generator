@interface MSStyledLayerCachedInsets : NSObject
{
double _top;	// 8 = 0x8
double _left;	// 16 = 0x10
double _bottom;	// 24 = 0x18
double _right;	// 32 = 0x20
}
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double top; // @synthesize top=_top;
@end
