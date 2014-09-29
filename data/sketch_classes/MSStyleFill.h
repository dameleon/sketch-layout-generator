@interface MSStyleFill : _MSStyleFill
{
double _lightweightParentLayerCachedOpacity;	// 8 = 0x8
}
+ (id)defaultFillColor;
@property(nonatomic) double lightweightParentLayerCachedOpacity; // @synthesize lightweightParentLayerCachedOpacity=_lightweightParentLayerCachedOpacity;
- (BOOL)hasOpacity;
- (id)initWithCoder:(id)arg1;
- (void)setPatternTileScale:(double)arg1;
- (void)setPatternImage:(id)arg1;
- (id)defaultName;
- (void)initEmptyObject;
- (id)CSSAttributeString;
- (id)transformDecodedObjectIfNecessary:(id)arg1 key:(id)arg2;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
@end
