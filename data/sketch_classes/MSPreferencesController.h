@interface MSPreferencesController : NSWindowController
{
NSButton *scaleDownForRetinaButton;	// 80 = 0x50
}
+ (id)sharedController;
- (void).cxx_destruct;
- (void)adjustColorsAction:(id)arg1;
- (void)scaleDownForRetinaAction:(id)arg1;
- (void)awakeFromNib;
@end
