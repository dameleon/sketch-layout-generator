@interface MSKeyBindings : CHSingletonObject
{
NSDictionary *_keyBindings;	// 8 = 0x8
}
+ (unsigned short)keyBindingsFromAction:(SEL)arg1;
+ (unsigned short)keyBindingForPreviewAtActualSize;
@property(retain, nonatomic) NSDictionary *keyBindings; // @synthesize keyBindings=_keyBindings;
- (void).cxx_destruct;
- (void)copyKeyBindingsToLibraryIfNecessary;
- (id)presetsPath;
- (id)init;
@end
