@interface _MSArtboardGroup : MSLayerGroup
{
BOOL _hasBackgroundColor;	// 56 = 0x38
BOOL _includeBackgroundColorInExport;	// 57 = 0x39
MSColor *_backgroundColor;	// 64 = 0x40
MSSimpleGrid *_grid;	// 72 = 0x48
MSRulerData *_horizontalRulerData;	// 80 = 0x50
MSLayoutGrid *_layout;	// 88 = 0x58
MSRulerData *_verticalRulerData;	// 96 = 0x60
}
@property(copy, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(nonatomic) BOOL includeBackgroundColorInExport; // @synthesize includeBackgroundColorInExport=_includeBackgroundColorInExport;
@property(copy, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
@property(copy, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
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
- (void)setPrimitiveVerticalRulerData:(id)arg1;
- (id)primitiveVerticalRulerData;
- (void)setPrimitiveLayout:(id)arg1;
- (id)primitiveLayout;
- (void)setPrimitiveIncludeBackgroundColorInExport:(BOOL)arg1;
- (BOOL)primitiveIncludeBackgroundColorInExport;
- (void)setPrimitiveHorizontalRulerData:(id)arg1;
- (id)primitiveHorizontalRulerData;
- (void)setPrimitiveHasBackgroundColor:(BOOL)arg1;
- (BOOL)primitiveHasBackgroundColor;
- (void)setPrimitiveGrid:(id)arg1;
- (id)primitiveGrid;
- (void)setPrimitiveBackgroundColor:(id)arg1;
- (id)primitiveBackgroundColor;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
