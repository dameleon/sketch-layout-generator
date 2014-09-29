@interface MSMultipleInnerShadowInspectorViewController : MSMultipleShadowInspectorViewController
{
}
- (void)awakeFromNib;
- (id)nibName;
- (BOOL)shouldHideAddStylePartButton;
- (id)stylePartKeyPath;
@end
