@interface MSInsertShapeEventHandler : MSDragRectEventHandler
{
NSMutableArray *insertedShapes;	// 128 = 0x80
NSCursor *shapeCursor;	// 136 = 0x88
MSShapePathLayer *_prototypeLayer;	// 144 = 0x90
}
@property(retain, nonatomic) MSShapePathLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (void)flagsChanged:(id)arg1;
- (void)dealloc;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (void)drawRectPreview;
- (id)insertShapeAsNewLayer:(id)arg1;
- (id)insertShapeAsSubPathOfShape:(id)arg1 inRect:(id)arg2;
- (id)parentShapeForInsertingSubPath;
- (id)performActionWithRect:(id)arg1;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (BOOL)mouseMovedEvent:(id)arg1;
- (void)selectAppropriateToolbarItem;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;
@end
