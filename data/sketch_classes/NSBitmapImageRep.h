@interface NSBitmapImageRep (DrawKit)
+ (id)bitmapImageRepWithSize:(struct CGSize)arg1 flags:(unsigned long long)arg2 colorSpace:(id)arg3 drawingBlock:(CDUnknownBlockType)arg4;
- (id)bitSafeBitmapImageRep;
- (id)bitmapImageRepByFlippingVerticalFlags:(unsigned long long)arg1;
- (id)bitmapImageRepByCroppingToRect:(struct CGRect)arg1;
- (struct CGRect)bitSafeFastRectForTrimming;
- (struct CGRect)rectForTrimming;
@end
