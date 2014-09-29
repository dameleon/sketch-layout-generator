@interface NSBezierPath (SVGBezierPath)
+ (id)bezierPathFromSVGFile:(id)arg1;
- (id)svgAttributes;
- (void)addSVGArcWithAngle:(double)arg1 radius:(struct CGSize)arg2 from:(struct CGPoint)arg3 to:(struct CGPoint)arg4 largeArc:(BOOL)arg5 sweep:(BOOL)arg6;
- (void)writeSVGToFile:(id)arg1;
@end
