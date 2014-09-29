@interface KBPopUpToolbarItem : NSToolbarItem
{
NSImage *smallImage;	// 152 = 0x98
NSImage *normalImage;	// 160 = 0xa0
}
@property(retain, nonatomic) NSImage *normalImage; // @synthesize normalImage;
@property(retain, nonatomic) NSImage *smallImage; // @synthesize smallImage;
- (void).cxx_destruct;
- (void)setDelayMenu:(BOOL)arg1;
- (BOOL)delayMenu;
- (void)validate;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)menu;
- (void)setMenu:(id)arg1;
- (id)popupCell;
- (id)menuButtonWithSize:(unsigned long long)arg1;
- (id)initWithItemIdentifier:(id)arg1 size:(unsigned long long)arg2;
@end
