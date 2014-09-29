@interface MSStarShape : _MSStarShape <NSCoding>
{
}
- (BOOL)shouldResetPointsOnResize;
- (id)inspectorViewControllers;
- (void)resetPoints;
- (id)defaultName;
- (struct CGRect)boundsForCursorPreview;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
@end
