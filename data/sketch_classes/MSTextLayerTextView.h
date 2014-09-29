@interface MSTextLayerTextView : NSTextView
{
NSTimer *_hideSelectionTimer;	// 160 = 0xa0
NSDictionary *_selectedTextAttributesBackup;	// 168 = 0xa8
}
@property(copy, nonatomic) NSDictionary *selectedTextAttributesBackup; // @synthesize selectedTextAttributesBackup=_selectedTextAttributesBackup;
@property(retain, nonatomic) NSTimer *hideSelectionTimer; // @synthesize hideSelectionTimer=_hideSelectionTimer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeSelection:(id)arg1;
- (void)didChangeText;
- (void)selectSimilar:(id)arg1;
- (void)hideSelectionTimerFired:(id)arg1;
- (id)makeHideSelectionTimer;
- (void)paste:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)hideSelectionTemporarily;
- (void)mouseDown:(id)arg1;
- (BOOL)hitTestFromEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@end
