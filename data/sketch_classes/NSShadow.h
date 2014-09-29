@interface NSShadow (DrawKit)
- (struct CGRect)boundingBoxForRect:(struct CGRect)arg1 withSpread:(double)arg2;
- (id)shadowWithXOffset:(double)arg1 context:(id)arg2;
- (void)transparencyLayerForRect:(struct CGRect)arg1 context:(id)arg2 inBlock:(CDUnknownBlockType)arg3;
- (void)drawInnerShadowForPath:(id)arg1 spread:(double)arg2 context:(id)arg3;
- (double)lineWidthForStrokeType:(long long)arg1 spread:(double)arg2 lineWidth:(double)arg3;
- (void)drawShadowWithTransparencyLayerForPath:(id)arg1 strokeType:(long long)arg2 spread:(double)arg3 lineWidth:(double)arg4;
- (void)drawShadowFillAndStrokeForPath:(id)arg1 strokeType:(long long)arg2 spread:(double)arg3 lineWidth:(double)arg4;
- (void)drawShadowStrokeForPath:(id)arg1 strokeType:(long long)arg2 spread:(double)arg3 lineWidth:(double)arg4;
- (void)drawShadowFillForPath:(id)arg1 spread:(double)arg2;
- (void)drawShadowForPath:(id)arg1 type:(unsigned long long)arg2 strokeType:(long long)arg3 fillShouldClip:(BOOL)arg4 spread:(double)arg5 lineWidth:(double)arg6 context:(id)arg7;
- (void)drawShadowForBlock:(CDUnknownBlockType)arg1 rect:(struct CGRect)arg2 spread:(double)arg3 context:(id)arg4;
@end
