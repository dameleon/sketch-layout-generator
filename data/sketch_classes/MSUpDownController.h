@interface MSUpDownController : NSResponder
{
BOOL hasOpenedUndoGroup;	// 16 = 0x10
BOOL didChangeTextDuringEditing;	// 17 = 0x11
NSTextField<MSUpDownProtocol> *_textField;	// 24 = 0x18
MSIntegratedStepper *_stepper;	// 32 = 0x20
double _incrementValue;	// 40 = 0x28
double _forcedMinimum;	// 48 = 0x30
}
@property(nonatomic) double forcedMinimum; // @synthesize forcedMinimum=_forcedMinimum;
@property(nonatomic) double incrementValue; // @synthesize incrementValue=_incrementValue;
@property(retain, nonatomic) MSIntegratedStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSTextField<MSUpDownProtocol> *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (BOOL)hasValidFirstResponder;
- (double)floatValue;
- (id)advancedUndoManager;
- (double)incrementValueAccountingForModifierFlags;
- (double)adjustValueForMinimum:(double)arg1;
- (void)decrement;
- (double)adjustValueForMaximum:(double)arg1;
- (void)increment;
- (void)keyUp;
- (void)setFloatValueAndNotifyBindings:(double)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)cancelTextEditingForInvalidReplacementString:(id)arg1;
- (BOOL)doCommandBySelector:(SEL)arg1;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing;
- (BOOL)becomeFirstResponder;
- (BOOL)eventIsInsideView:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)hideStepper;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)makeStepper;
- (id)initWithTextField:(id)arg1 incrementValue:(double)arg2 createStepper:(BOOL)arg3 minimumValue:(double)arg4;
@end
