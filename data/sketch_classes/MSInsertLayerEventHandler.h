@interface MSInsertLayerEventHandler : MSDragRectEventHandler
{
BOOL _shouldApplyDefaultStyle;	// 128 = 0x80
MSLayer *_prototypeLayer;	// 136 = 0x88
CDUnknownBlockType _completionBlock;	// 144 = 0x90
MSLayer *_insertedLayer;	// 152 = 0x98
}
@property(retain, nonatomic) MSLayer *insertedLayer; // @synthesize insertedLayer=_insertedLayer;
@property(nonatomic) BOOL shouldApplyDefaultStyle; // @synthesize shouldApplyDefaultStyle=_shouldApplyDefaultStyle;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MSLayer *prototypeLayer; // @synthesize prototypeLayer=_prototypeLayer;
- (void).cxx_destruct;
- (void)flagsChanged:(id)arg1;
- (void)dealloc;
- (void)resizeLayer:(id)arg1 toRect:(struct CGRect)arg2;
- (void)insertNewLayerInCurrentGroup:(id)arg1;
- (id)insertAsNewLayer:(id)arg1;
- (id)performActionWithRect:(id)arg1;
- (void)drawRectPreview;
- (id)imageName;
- (void)handlerWillLoseFocus;
- (BOOL)mouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (void)handlerGotFocus;
- (id)initWithManager:(id)arg1;
@end
