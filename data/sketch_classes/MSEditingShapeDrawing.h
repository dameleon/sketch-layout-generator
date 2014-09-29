@interface MSEditingShapeDrawing : NSObject
{
MSShapePathLayer *shape;	// 8 = 0x8
MSSelectionPathCollection *selectedPoints;	// 16 = 0x10
MSSelectionPath *hoveringPoint;	// 24 = 0x18
struct CGRect dirtyRect;	// 32 = 0x20
struct CGPoint scrollOrigin;	// 64 = 0x40
double zoomValue;	// 80 = 0x50
long long hoveringBeforeIndex;	// 88 = 0x58
}
@property(nonatomic) long long hoveringBeforeIndex; // @synthesize hoveringBeforeIndex;
@property(nonatomic) double zoomValue; // @synthesize zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin;
@property(nonatomic) struct CGRect dirtyRect; // @synthesize dirtyRect;
@property(retain, nonatomic) MSSelectionPath *hoveringPoint; // @synthesize hoveringPoint;
@property(retain, nonatomic) MSSelectionPathCollection *selectedPoints; // @synthesize selectedPoints;
@property(retain, nonatomic) MSShapePathLayer *shape; // @synthesize shape;
- (void).cxx_destruct;
- (void)drawLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (void)drawOutlinePointAtSelectionPath:(id)arg1 isSelected:(BOOL)arg2 selectionCount:(long long)arg3 transformStruct:(struct _CHTransformStruct)arg4;
- (void)drawOutlinePoints;
- (void)drawBetweenPoints;
- (void)draw;
- (id)init;
@end
