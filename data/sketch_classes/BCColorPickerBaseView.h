@interface BCColorPickerBaseView : NSControl
{
id target;	// 176 = 0xb0
SEL action;	// 184 = 0xb8
}
@property SEL action; // @synthesize action;
@property __weak id target; // @synthesize target;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawMarkerInRect:(struct CGRect)arg1;
- (id)markerShadow;
- (void)drawCheckerboardPatternInRect:(struct CGRect)arg1;
- (void)drawContentInRect:(struct CGRect)arg1 dirtyRect:(struct CGRect)arg2;
- (struct CGRect)contentBounds;
- (id)undoManager;
- (id)lightShadow;
- (id)darkShadow;
- (void)drawRect:(struct CGRect)arg1;
- (id)initInBounds:(struct CGRect)arg1;
@end
