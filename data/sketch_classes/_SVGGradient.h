@interface _SVGGradient : SVGElement
{
BOOL _absolute;	// 8 = 0x8
BOOL _radial;	// 9 = 0x9
NSSet *_linkedFrom;	// 16 = 0x10
SVGGradient *_linkedTo;	// 24 = 0x18
NSSet *_usedByFills;	// 32 = 0x20
NSSet *_usedByStrokes;	// 40 = 0x28
double _fromX;	// 48 = 0x30
double _fromY;	// 56 = 0x38
double _toX;	// 64 = 0x40
double _toY;	// 72 = 0x48
NSAffineTransform *_transform;	// 80 = 0x50
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSAffineTransform *transform; // @synthesize transform=_transform;
@property(nonatomic) double toY; // @synthesize toY=_toY;
@property(nonatomic) double toX; // @synthesize toX=_toX;
@property(nonatomic) BOOL radial; // @synthesize radial=_radial;
@property(nonatomic) double fromY; // @synthesize fromY=_fromY;
@property(nonatomic) double fromX; // @synthesize fromX=_fromX;
@property(nonatomic) BOOL absolute; // @synthesize absolute=_absolute;
@property(retain, nonatomic) NSSet *usedByStrokes; // @synthesize usedByStrokes=_usedByStrokes;
@property(retain, nonatomic) NSSet *usedByFills; // @synthesize usedByFills=_usedByFills;
@property(retain, nonatomic) SVGGradient *linkedTo; // @synthesize linkedTo=_linkedTo;
@property(retain, nonatomic) NSSet *linkedFrom; // @synthesize linkedFrom=_linkedFrom;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByStrokesObject:(id)arg1;
- (void)primitiveAddUsedByStrokesObject:(id)arg1;
- (void)removeUsedByStrokesObject:(id)arg1;
- (void)addUsedByStrokesObject:(id)arg1;
- (void)primitiveRemoveUsedByFillsObject:(id)arg1;
- (void)primitiveAddUsedByFillsObject:(id)arg1;
- (void)removeUsedByFillsObject:(id)arg1;
- (void)addUsedByFillsObject:(id)arg1;
- (void)primitiveSetLinkedTo:(id)arg1;
- (void)primitiveRemoveLinkedFromObject:(id)arg1;
- (void)primitiveAddLinkedFromObject:(id)arg1;
- (void)removeLinkedFromObject:(id)arg1;
- (void)addLinkedFromObject:(id)arg1;
@end
