@interface BCPopoverContentView : NSView
{
NSColor *_backgroundColor;	// 152 = 0x98
unsigned long long _arrowEdge;	// 160 = 0xa0
double _arrowPosition;	// 168 = 0xa8
}
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(nonatomic) unsigned long long arrowEdge; // @synthesize arrowEdge=_arrowEdge;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)backgroundPath;
- (struct CGRect)availableContentRect;
- (BOOL)canBecomeKeyView;
- (void)cancelOperation:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
@end
