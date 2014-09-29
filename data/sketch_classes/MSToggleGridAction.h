@interface MSToggleGridAction : MSProAction
{
}
- (BOOL)validate;
- (BOOL)dynamicTitle;
- (id)label;
- (id)imageName;
- (void)performAction:(id)arg1;
- (void)toggleGrid:(id)arg1;
@end
