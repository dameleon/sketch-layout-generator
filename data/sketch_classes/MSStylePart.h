@interface MSStylePart : _MSStylePart <NSCoding, NSCopying>
{
}
- (id)parentLayer;
- (id)parentStyle;
- (void)multiplyBy:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)transformDecodedObjectIfNecessary:(id)arg1 key:(id)arg2;
@end
