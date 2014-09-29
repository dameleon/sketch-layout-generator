@interface BCPopover : NSObject <NSWindowDelegate>
{
BOOL dontSendNextPopoverWindowSizeNotification;	// 8 = 0x8
BOOL _constrainToScreenSize;	// 9 = 0x9
NSViewController<BCPopoverContentController> *_contentViewController;	// 16 = 0x10
id <BCPopoverDelegate> _delegate;	// 24 = 0x18
BCPopoverWindow *_window;	// 32 = 0x20
NSView *_attachedToView;	// 40 = 0x28
unsigned long long _preferredEdge;	// 48 = 0x30
}
@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(nonatomic) BOOL constrainToScreenSize; // @synthesize constrainToScreenSize=_constrainToScreenSize;
@property(retain, nonatomic) NSView *attachedToView; // @synthesize attachedToView=_attachedToView;
@property(retain, nonatomic) BCPopoverWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <BCPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSViewController<BCPopoverContentController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)close;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)windowRectForViewSize:(struct CGSize)arg1 above:(struct CGRect)arg2 pointingTo:(struct CGPoint)arg3 edge:(unsigned long long)arg4;
- (struct CGPoint)pointAtEdge:(unsigned long long)arg1 ofRect:(struct CGRect)arg2;
- (void)attachedViewDidMove:(id)arg1;
- (struct CGPoint)attachToPointInScreenCoordinates;
- (struct CGRect)screenAnchorRect;
- (struct CGRect)popoverWindowFrame;
- (struct CGRect)screenFrame;
- (double)popoverArrowPosition;
- (void)otherPopoverDidShow:(id)arg1;
- (void)contentViewDidResizeNotification:(id)arg1;
- (void)configureNotifications:(id)arg1;
- (void)move;
- (void)showRelativeToView:(id)arg1 preferredEdge:(unsigned long long)arg2;
- (id)init;
@end
