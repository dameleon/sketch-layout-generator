@interface MSDocumentColorFinder : NSObject
{
}
+ (id)commonColorsForBasicFill:(id)arg1;
+ (id)commonColorsForStyle:(id)arg1;
+ (id)commonColorsForTextLayer:(id)arg1;
+ (id)commonColorsForGroup:(id)arg1;
+ (id)commonColorsForPage:(id)arg1;
+ (id)commonColorsForPages:(id)arg1;
+ (id)sortColorsByUsage:(id)arg1;
+ (id)flexibleColors:(id)arg1;
+ (void)findColorsInPages:(id)arg1 maxAmount:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)findColorsInPages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@end
