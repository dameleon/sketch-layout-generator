@interface MSLayerSnapper : NSObject
{
id <MSBasicDelegate> _delegate;	// 8 = 0x8
MSNormalEventData *_eventData;	// 16 = 0x10
double _zoomValue;	// 24 = 0x18
}
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSNormalEventData *eventData; // @synthesize eventData=_eventData;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)topLineForTextLayer:(id)arg1;
- (double)baseLineForTextLayer:(id)arg1;
- (id)snapsForTextLayer:(id)arg1;
- (id)snapsForLine:(id)arg1;
- (id)snapsForFrame:(struct CGRect)arg1;
- (id)snapsForLayer:(id)arg1;
- (id)snapsForLayers:(id)arg1 skipLayers:(id)arg2;
- (void)snapTextLayer:(id)arg1 toLines:(id)arg2 visible:(BOOL)arg3 snap:(BOOL)arg4 resize:(BOOL)arg5 edges:(long long)arg6;
- (void)_snapLayer:(id)arg1 toLines:(id)arg2 visible:(BOOL)arg3 snap:(BOOL)arg4 resize:(BOOL)arg5 edges:(unsigned long long)arg6;
- (void)snapLayer:(id)arg1 toLines:(id)arg2 visible:(BOOL)arg3 snap:(BOOL)arg4 resize:(BOOL)arg5 edges:(unsigned long long)arg6;
- (void)changeFrame:(id)arg1 forLine:(id)arg2 visible:(BOOL)arg3 direction:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)snapLayer:(id)arg1 snap:(BOOL)arg2 resize:(BOOL)arg3 edges:(unsigned long long)arg4;
- (void)cleanupSnaps;
- (void)refreshSnaps;
- (void)drawSnaps;
- (void)snapLayerResize:(id)arg1 edges:(id)arg2;
- (void)snapsMouseDraggedHook:(id)arg1;
- (void)snapsMouseUpHook;
- (void)cleanupDistanceSnaps;
- (BOOL)rect:(struct CGRect)arg1 isOnLineWithRect:(struct CGRect)arg2 inDirection:(long long)arg3;
- (void)refreshDistances;
- (void)drawSnapDistances;
- (void)snapLayer:(id)arg1 againstLayers:(id)arg2 inDirection:(id)arg3 resize:(BOOL)arg4;
- (id)distanceRectangleBetweenLayer:(id)arg1 andLayer:(id)arg2 inDirection:(id)arg3;
- (id)distanceRectanglesBetweenLayers:(id)arg1 inDirection:(id)arg2;
- (id)layersOnLineFromLayer:(id)arg1 inDirection:(id)arg2 order:(long long)arg3;
- (void)snapLayer:(id)arg1 onAxis:(id)arg2 resize:(BOOL)arg3;
- (BOOL)snapLayerDistance:(id)arg1 edges:(long long)arg2 resize:(BOOL)arg3;
- (void)drawSnapLayerWidths;
- (void)refreshSnapLayers;
- (void)cleanupLayerSizeSnaps;
- (BOOL)snapLayerSize:(id)arg1 snap:(BOOL)arg2 edges:(long long)arg3;
@end
