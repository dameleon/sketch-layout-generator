@interface MSBaseBooleanAction : MSBaseAction
{
}
- (id)tooltip;
- (void)resetSubPathsBooleanOperationsTo:(long long)arg1;
- (void)fixTransformForSelectedLayers;
- (void)booleanOperation:(long long)arg1;
- (id)validation;
- (BOOL)hasShapePartsSelected;
- (BOOL)validate;
@end
