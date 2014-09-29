@interface MSParagraphStyleViewController : NSViewController <BCPopoverContentController>
{
MSTextLayerSection *_textSection;	// 104 = 0x68
NSArray *_layers;	// 112 = 0x70
NSSegmentedControl *_decorationButton;	// 120 = 0x78
NSPopUpButton *_listPopUpButton;	// 128 = 0x80
}
@property(retain, nonatomic) NSPopUpButton *listPopUpButton; // @synthesize listPopUpButton=_listPopUpButton;
@property(retain, nonatomic) NSSegmentedControl *decorationButton; // @synthesize decorationButton=_decorationButton;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(nonatomic) __weak MSTextLayerSection *textSection; // @synthesize textSection=_textSection;
- (void).cxx_destruct;
- (id)firstOccurrenceOfAttributeWithName:(id)arg1;
- (void)changeFontPropertiesOfTextObjectsInBlock:(CDUnknownBlockType)arg1;
- (long long)indexForBulletListName:(id)arg1;
- (id)markerForBulletListIndex:(long long)arg1;
- (void)listPopUpAction:(id)arg1;
- (void)decorationButtonAction:(id)arg1;
- (void)prepareBulletListPopUpButton;
- (void)prepareDecorationButton;
- (void)awakeFromNib;
- (id)init;
@end
