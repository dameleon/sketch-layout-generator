@interface MSLayerPositionDrawing : NSObject
{
id <MSBasicDelegate> _delegate;	// 8 = 0x8
MSLayer *_hoverLayer;	// 16 = 0x10
double _zoomValue;	// 24 = 0x18
}
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) __weak MSLayer *hoverLayer; // @synthesize hoverLayer=_hoverLayer;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)willDraw;
- (void)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)clear;
- (void)drawDistanceToEnclosingFrame:(id)arg1 zoom:(double)arg2;
- (id)verticalRectBetweenRect:(id)arg1 andRect:(id)arg2;
- (id)horizontalRectBetweenRect:(id)arg1 andRect:(id)arg2;
- (double)dashesOffset;
- (void)applyDashPattern:(id)arg1;
- (void)drawHorizontalDashLinesBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawVerticalDashLinesBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawHeightBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawWidthBetweenRect:(id)arg1 andRect:(id)arg2;
- (void)drawOutlineForRect:(id)arg1;
- (void)drawDistanceFromSelectedLayersToLayer:(id)arg1;
- (id)selectedLayersRect;
- (id)enclosingGroupRectOrArtboard;
- (void)draw;
@end
