@interface MSMaskWithShapeAction : MSBaseAction
{
}
- (id)label;
- (BOOL)showInToolbar;
- (void)disableSuperfluousStylesForMaskStyle:(id)arg1;
- (void)prepareShapeLayerForMask:(id)arg1;
- (id)makeGroupForMask;
- (void)finishGroupForMask:(id)arg1;
- (void)createMaskWithShape:(id)arg1 bitmap:(id)arg2;
- (void)performAction:(id)arg1;
- (void)maskWithShape:(id)arg1;
- (BOOL)validate;
@end
