@interface MSEventHandlerAction : MSBaseAction
{
}
- (BOOL)isSelectable;
- (id)eventHandlerKey;
- (BOOL)validate;
- (BOOL)isActive;
- (void)performAction:(id)arg1;
@end
