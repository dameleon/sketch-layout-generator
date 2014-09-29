@interface MSUpDownTextField : NSTextField <NSTextViewDelegate, MSUpDownProtocol>
{
id _refreshDelegate;	// 200 = 0xc8
MSUpDownController *_upDownController;	// 208 = 0xd0
}
@property(retain, nonatomic) MSUpDownController *upDownController; // @synthesize upDownController=_upDownController;
@property(nonatomic) __weak id refreshDelegate; // @synthesize refreshDelegate=_refreshDelegate;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (void)textDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)keyUp:(id)arg1;
- (double)incrementValue;
- (void)awakeFromNib;
@end
