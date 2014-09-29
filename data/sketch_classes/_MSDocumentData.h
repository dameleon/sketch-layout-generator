@interface _MSDocumentData : MSModelObject
{
BOOL _enableLayerInteraction;	// 8 = 0x8
BOOL _enableSliceInteraction;	// 9 = 0x9
unsigned long long _currentPageIndex;	// 16 = 0x10
MSImageCollection *_images;	// 24 = 0x18
MSSharedLayerStyleContainer *_layerStyles;	// 32 = 0x20
MSSharedLayerContainer *_layerSymbols;	// 40 = 0x28
MSSharedLayerTextStyleContainer *_layerTextStyles;	// 48 = 0x30
MSArray *_pages;	// 56 = 0x38
}
@property(retain, nonatomic) MSArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) MSSharedLayerTextStyleContainer *layerTextStyles; // @synthesize layerTextStyles=_layerTextStyles;
@property(retain, nonatomic) MSSharedLayerContainer *layerSymbols; // @synthesize layerSymbols=_layerSymbols;
@property(retain, nonatomic) MSSharedLayerStyleContainer *layerStyles; // @synthesize layerStyles=_layerStyles;
@property(retain, nonatomic) MSImageCollection *images; // @synthesize images=_images;
@property(nonatomic) BOOL enableSliceInteraction; // @synthesize enableSliceInteraction=_enableSliceInteraction;
@property(nonatomic) BOOL enableLayerInteraction; // @synthesize enableLayerInteraction=_enableLayerInteraction;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitivePages:(id)arg1;
- (id)primitivePages;
- (void)setPrimitiveLayerTextStyles:(id)arg1;
- (id)primitiveLayerTextStyles;
- (void)setPrimitiveLayerSymbols:(id)arg1;
- (id)primitiveLayerSymbols;
- (void)setPrimitiveLayerStyles:(id)arg1;
- (id)primitiveLayerStyles;
- (void)setPrimitiveImages:(id)arg1;
- (id)primitiveImages;
- (void)setPrimitiveEnableSliceInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableSliceInteraction;
- (void)setPrimitiveEnableLayerInteraction:(BOOL)arg1;
- (BOOL)primitiveEnableLayerInteraction;
- (void)setPrimitiveCurrentPageIndex:(unsigned long long)arg1;
- (unsigned long long)primitiveCurrentPageIndex;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
