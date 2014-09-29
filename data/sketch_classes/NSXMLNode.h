@interface NSXMLNode (SVG)
+ (id)attributeWithName:(id)arg1 percentageFractionalValue:(double)arg2;
+ (id)attributeWithName:(id)arg1 percentageValue:(double)arg2;
+ (id)attributeWithName:(id)arg1 numberValue:(double)arg2;
+ (id)attributeWithName:(id)arg1 pixelValue:(double)arg2;
+ (id)numbersFromString:(id)arg1 scale:(double)arg2;
+ (id)numberFromString:(id)arg1 scale:(double)arg2;
+ (double)doubleFromString:(id)arg1 scale:(double)arg2;
- (id)cssClassNamesWithBase:(id)arg1;
- (id)simplifyAttributesIgnoringElements:(id)arg1 attributes:(id)arg2;
- (id)numberValuesWithScale:(double)arg1;
- (id)numberValues;
- (struct CGRect)rectValue;
- (long long)integerValue;
- (double)doubleValueWithScale:(double)arg1;
- (double)doubleValue;
- (id)numberValueWithScale:(double)arg1;
- (id)numberValue;
- (double)doubleValueFromAttributeWithName:(id)arg1;
@end
