@interface MSReorderingContainerView : NSView
{
long long sourceDragIndex;	// 152 = 0x98
long long direction;	// 160 = 0xa0
id <MSReorderingContainerDelegate> _delegate;	// 168 = 0xa8
NSArray *_subViewDestinationFrames;	// 176 = 0xb0
}
@property(retain, nonatomic) NSArray *subViewDestinationFrames; // @synthesize subViewDestinationFrames=_subViewDestinationFrames;
@property(nonatomic) __weak id <MSReorderingContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long direction; // @synthesize direction;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (double)startOffsetForStacking;
- (id)destinationFramesForSubviewsForAxis:(id)arg1;
- (void)reorderSubviewsAnimated:(BOOL)arg1;
- (id)draggingView;
- (unsigned long long)numberOfReorderableSubviews;
- (long long)hoverIndexForDraggingInfo:(id)arg1;
- (void)moveDraggedViewToRowAtIndex:(long long)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@end
