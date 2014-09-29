@interface MSToggleLayoutAction : MSProAction
{
}
- (BOOL)validate;
- (BOOL)dynamicTitle;
- (id)label;
- (id)imageName;
- (void)performAction:(id)arg1;
- (void)toggleLayout:(id)arg1;
@end
