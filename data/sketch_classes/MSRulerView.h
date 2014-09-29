@interface MSRulerView : NSView
{
MSContentDrawView *contentView;	// 152 = 0x98
MSDocument *document;	// 160 = 0xa0
BOOL didOpenUndoGroup;	// 168 = 0xa8
unsigned long long dragIndex;	// 176 = 0xb0
double baseOffset;	// 184 = 0xb8
double previousBase;	// 192 = 0xc0
NSNumberFormatter *metricsFormatter;	// 200 = 0xc8
MSRulerData *rulerData;	// 208 = 0xd0
}
@property(retain, nonatomic) MSDocument *document; // @synthesize document;
@property(retain, nonatomic) MSRulerData *rulerData; // @synthesize rulerData;
- (void).cxx_destruct;
- (void)endUndo;
- (void)beginUndo;
- (void)dealloc;
- (long long)rulerHeight;
- (long long)rulerLength;
- (double)zoomValue;
- (struct CGPoint)scrollOrigin;
- (void)drawLineAtPosition:(double)arg1 withOptions:(unsigned long long)arg2;
- (void)drawMetricsWithOptions:(long long)arg1;
- (void)drawBackgroundForLabel:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2 drawBackground:(BOOL)arg3;
- (void)drawMetric:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawMetrics;
- (void)drawBackground;
- (id)occupiedRegionForRect:(struct CGRect)arg1 withOffset:(long long)arg2 zoom:(double)arg3;
- (void)drawOccupiedRegions;
- (void)drawAlignmentGuides;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (id)lineColor;
- (id)bezierPathForLineAtPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (void)drawGuidesInRect:(struct CGRect)arg1;
- (double)baseLineIncludingScrollOrigin:(BOOL)arg1;
- (double)baseLine;
- (id)snapLineWithPosition:(double)arg1 inRect:(struct CGRect)arg2;
- (id)allSnapGuides;
- (struct CGPoint)mouseEventToPoint:(id)arg1;
- (void)refreshGuidesForGrid:(id)arg1;
- (void)refreshAllGuidesInDrawView;
- (void)refreshGuideInDrawViewAtIndex:(unsigned long long)arg1;
- (void)mouseUp:(id)arg1;
- (id)rulerBasedRectForLayer:(id)arg1;
- (double)snapGuideToSelectedLayers:(double)arg1;
- (id)rulerAxis;
- (double)guidePositionForMouse:(struct CGPoint)arg1;
- (void)showAppropriateCursorForMouse:(struct CGPoint)arg1;
- (void)dragSelectedGuideWithMouse:(struct CGPoint)arg1;
- (void)updateSelectedLayerOriginsInInspector;
- (void)dragRulerBaseWithMouse:(struct CGPoint)arg1;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (unsigned long long)indexOfGuideAtMousePoint:(struct CGPoint)arg1;
- (void)addNewGuideAtMousePoint:(struct CGPoint)arg1;
- (void)mouseDown:(struct CGPoint)arg1 clickCount:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)setNormalCursor;
- (void)setDragCursor;
- (void)setResizeCursor;
- (double)relevantAxisForPoint:(struct CGPoint)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)eventInView:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)awakeFromNib;
@end
