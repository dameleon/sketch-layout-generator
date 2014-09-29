@interface BCBaseMagnifierButton : NSButton
{
BCFlexibleColor *_chosenColor;	// 176 = 0xb0
}
@property(retain, nonatomic) BCFlexibleColor *chosenColor; // @synthesize chosenColor=_chosenColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)color;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
@end
