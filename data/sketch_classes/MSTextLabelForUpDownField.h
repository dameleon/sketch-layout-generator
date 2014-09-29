@interface MSTextLabelForUpDownField : NSTextField
{
BOOL didMouseDown;	// 200 = 0xc8
BOOL shouldOpenUndoGroupOnNextDrag;	// 201 = 0xc9
BOOL hasOpenedUndoGroupOnDrag;	// 202 = 0xca
double valueAtMouseDown;	// 208 = 0xd0
struct CGPoint mouseDownLocation;	// 216 = 0xd8
NSTextField<MSUpDownProtocol> *_upDownTextField;	// 232 = 0xe8
NSArray *_textFields;	// 240 = 0xf0
}
@property(copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak NSTextField<MSUpDownProtocol> *upDownTextField; // @synthesize upDownTextField=_upDownTextField;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)canScrub;
- (void)mouseDown:(id)arg1;
- (id)textField;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)awakeFromNib;
- (id)advancedUndoManager;
@end
