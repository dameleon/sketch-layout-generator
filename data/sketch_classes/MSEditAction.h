@interface MSEditAction : MSBaseAction
{
}
- (id)tooltip;
- (BOOL)isSelectable;
- (void)performAction:(id)arg1;
- (void)edit:(id)arg1;
- (id)validation;
@end
