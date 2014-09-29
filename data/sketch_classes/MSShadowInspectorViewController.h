@interface MSShadowInspectorViewController : MSStylePartInspectorViewController
{
NSString *_type;	// 112 = 0x70
MSUpDownTextField *_xOffsetField;	// 120 = 0x78
MSUpDownTextField *_yOffsetField;	// 128 = 0x80
MSUpDownTextField *_blurRadiusField;	// 136 = 0x88
MSUpDownTextField *_spreadField;	// 144 = 0x90
MSColorPreviewButton *_colorButton;	// 152 = 0x98
}
@property(retain, nonatomic) MSColorPreviewButton *colorButton; // @synthesize colorButton=_colorButton;
@property(retain, nonatomic) MSUpDownTextField *spreadField; // @synthesize spreadField=_spreadField;
@property(retain, nonatomic) MSUpDownTextField *blurRadiusField; // @synthesize blurRadiusField=_blurRadiusField;
@property(retain, nonatomic) MSUpDownTextField *yOffsetField; // @synthesize yOffsetField=_yOffsetField;
@property(retain, nonatomic) MSUpDownTextField *xOffsetField; // @synthesize xOffsetField=_xOffsetField;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didGetAddedToInspector;
- (id)sectionTitle;
- (id)title;
- (id)keyPath;
- (BOOL)isSpreadFieldAvailable;
- (void)prepare;
@end
