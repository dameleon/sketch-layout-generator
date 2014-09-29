@interface MSInsertVectorAction : MSBaseAction
{
}
- (BOOL)isSelectable;
- (BOOL)isActive;
- (unsigned short)shortcutCharacter;
- (id)tooltip;
- (BOOL)validate;
- (id)rootForShapeHandler;
- (void)performAction:(id)arg1;
- (void)insertVector:(id)arg1;
@end
