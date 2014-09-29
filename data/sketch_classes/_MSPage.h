@interface _MSPage : MSLayerGroup
{
MSSimpleGrid *_grid;	// 56 = 0x38
MSRulerData *_horizontalRulerData;	// 64 = 0x40
MSLayoutGrid *_layout;	// 72 = 0x48
MSRulerData *_verticalRulerData;	// 80 = 0x50
double _zoomValue;	// 88 = 0x58
struct CGPoint _scrollOrigin;	// 96 = 0x60
}
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(retain, nonatomic) MSRulerData *verticalRulerData; // @synthesize verticalRulerData=_verticalRulerData;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(retain, nonatomic) MSLayoutGrid *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) MSRulerData *horizontalRulerData; // @synthesize horizontalRulerData=_horizontalRulerData;
@property(retain, nonatomic) MSSimpleGrid *grid; // @synthesize grid=_grid;
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
- (void)setPrimitiveZoomValue:(double)arg1;
- (double)primitiveZoomValue;
- (void)setPrimitiveVerticalRulerData:(id)arg1;
- (id)primitiveVerticalRulerData;
- (void)setPrimitiveScrollOrigin:(struct CGPoint)arg1;
- (struct CGPoint)primitiveScrollOrigin;
- (void)setPrimitiveLayout:(id)arg1;
- (id)primitiveLayout;
- (void)setPrimitiveHorizontalRulerData:(id)arg1;
- (id)primitiveHorizontalRulerData;
- (void)setPrimitiveGrid:(id)arg1;
- (id)primitiveGrid;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
@end
