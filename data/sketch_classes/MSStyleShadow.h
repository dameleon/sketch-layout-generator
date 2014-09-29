@interface MSStyleShadow : _MSStyleShadow
{
}
- (void)setOffsetY:(double)arg1;
- (void)setOffsetX:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setSpread:(double)arg1;
- (BOOL)isDefaultShadow;
- (BOOL)isDefaultGlow;
- (void)multiplyBy:(double)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)initEmptyObject;
- (id)CSSAttributeString;
- (id)transformDecodedObjectIfNecessary:(id)arg1 key:(id)arg2;
- (void)initLegacyWithCoder:(id)arg1;
- (id)shadowForContext:(id)arg1;
- (void)restoreBlendingWithContext:(id)arg1;
- (void)prepareForBlendingWithContext:(id)arg1;
- (void)_drawShadowForPath:(id)arg1 type:(unsigned long long)arg2 strokeType:(long long)arg3 fillShouldClip:(BOOL)arg4 lineWidth:(double)arg5 context:(id)arg6;
- (void)drawShadowForPath:(id)arg1 type:(unsigned long long)arg2 strokeType:(long long)arg3 fillShouldClip:(BOOL)arg4 lineWidth:(double)arg5 context:(id)arg6;
@end
