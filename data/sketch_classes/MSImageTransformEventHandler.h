@interface MSImageTransformEventHandler : MSTransformEventHandler
{
CIImage *originalImage;	// 232 = 0xe8
GKRect *_originalBounds;	// 240 = 0xf0
}
@property(retain, nonatomic) GKRect *originalBounds; // @synthesize originalBounds=_originalBounds;
- (void).cxx_destruct;
- (id)toolbarIdentifier;
- (void)dealloc;
- (id)NSImageFromImage:(id)arg1;
- (void)transformShape;
- (struct CGRect)newLayerRect;
- (id)perspectiveFilter;
- (id)bounds;
- (void)handlerGotFocus;
@end
