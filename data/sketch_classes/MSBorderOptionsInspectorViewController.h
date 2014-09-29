@interface MSBorderOptionsInspectorViewController : MSStylePartInspectorViewController <BCPopoverContentController>
{
NSPopUpButton *startDecorationButton;	// 112 = 0x70
NSPopUpButton *endDecorationButton;	// 120 = 0x78
NSTextField *dashField1;	// 128 = 0x80
NSTextField *dashField2;	// 136 = 0x88
NSTextField *dashField3;	// 144 = 0x90
NSTextField *dashField4;	// 152 = 0x98
NSArray *_layers;	// 160 = 0xa0
NSSegmentedControl *_capSegmentedControl;	// 168 = 0xa8
NSSegmentedControl *_joinSegmentedControl;	// 176 = 0xb0
}
@property(retain, nonatomic) NSSegmentedControl *joinSegmentedControl; // @synthesize joinSegmentedControl=_joinSegmentedControl;
@property(retain, nonatomic) NSSegmentedControl *capSegmentedControl; // @synthesize capSegmentedControl=_capSegmentedControl;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)decorationForArrowType:(unsigned long long)arg1;
- (void)fillDashPlaceholderFields;
- (void)fillDashFields;
- (void)dashPatternAction:(id)arg1;
- (void)joinAction:(id)arg1;
- (void)capAction:(id)arg1;
- (void)evaluateCapJoinButtons;
- (void)prepareDecorationButtons;
- (void)endDecorationAction:(id)arg1;
- (void)startDecorationAction:(id)arg1;
- (void)flipDecoration:(id)arg1;
- (void)removeDecorationForLayer:(id)arg1 atPosition:(long long)arg2;
- (void)reloadData;
@end
