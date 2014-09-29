@interface MSBitmapLayer : _MSBitmapLayer
{
BOOL _lightweightTreatAsAlpha;	// 56 = 0x38
}
@property(nonatomic) BOOL lightweightTreatAsAlpha; // @synthesize lightweightTreatAsAlpha=_lightweightTreatAsAlpha;
- (BOOL)treatAsAlpha;
- (void)reduceImageSize;
- (struct CGSize)minimumSize;
- (id)handlerName;
- (void)prepareObjectCopy:(id)arg1;
- (id)defaultName;
- (void)encodeWithCoder:(id)arg1;
- (void)initEmptyObject;
- (void)setRawImage:(id)arg1 name:(id)arg2 convertColourspace:(BOOL)arg3 collection:(id)arg4;
- (void)fillInEmptyObjects;
- (void)initObjectWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 parentFrame:(id)arg2 name:(id)arg3;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (void)migratePropertiesFromV32OrEarlierWithCoder:(id)arg1;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
@end
