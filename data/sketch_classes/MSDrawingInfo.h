@interface MSDrawingInfo : NSObject
{
BOOL _isDragging;	// 8 = 0x8
}
+ (id)sharedController;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@end
