@interface MSTextLayer : _MSTextLayer <NSTextStorageDelegate>
{
NSLayoutManager *layout;	// 56 = 0x38
NSTextContainer *container;	// 64 = 0x40
BOOL isEditingText;	// 72 = 0x48
int ignoreDelegateNotificationsCounter;	// 76 = 0x4c
long long heightBeforeResizing;	// 80 = 0x50
NSTextStorage *storageBeforeDragging;	// 88 = 0x58
NSBezierPath *cachedBezierRepresentation;	// 96 = 0x60
struct CGRect previousRectCache;	// 104 = 0x68
id <MSTextLayerEditingDelegate> _editingDelegate;	// 136 = 0x88
NSBezierPath *_lightweightFirstUnderlyingShapePath;	// 144 = 0x90
double _lightweightFontSize;	// 152 = 0x98
}
@property(nonatomic) double lightweightFontSize; // @synthesize lightweightFontSize=_lightweightFontSize;
@property(retain, nonatomic) NSBezierPath *lightweightFirstUnderlyingShapePath; // @synthesize lightweightFirstUnderlyingShapePath=_lightweightFirstUnderlyingShapePath;
@property(nonatomic) id <MSTextLayerEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(readonly, nonatomic) long long heightBeforeResizing; // @synthesize heightBeforeResizing;
@property(copy, nonatomic) NSTextStorage *storageBeforeDragging; // @synthesize storageBeforeDragging;
@property(nonatomic) struct CGRect previousRectCache; // @synthesize previousRectCache;
@property(retain, nonatomic) NSBezierPath *cachedBezierRepresentation; // @synthesize cachedBezierRepresentation;
- (void).cxx_destruct;
- (BOOL)constrainProportions;
- (id)usedFontNames;
- (void)drawHoverWithZoom:(double)arg1;
- (void)resizeToFitNewWidthComingFrom:(double)arg1;
- (void)resizeTextToFitNewHeight:(long long)arg1;
- (void)replaceTextStorageTextBy:(id)arg1;
- (void)makeLowercase:(id)arg1;
- (void)makeUppercase:(id)arg1;
- (void)multiplyBy:(double)arg1;
- (id)attributeForKey:(id)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2;
- (void)addAttributes:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)setAttributes:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 forRange:(struct _NSRange)arg3;
- (void)ignoreDelegateNotificationsInBlock:(CDUnknownBlockType)arg1;
- (id)inspectorViewControllerNames;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (BOOL)isFrameEqualForSync:(id)arg1;
- (BOOL)textStorageIsEqual:(id)arg1;
- (void)syncTextStorageTo:(id)arg1;
- (void)copyTextStorageTo:(id)arg1;
- (void)prepareObjectCopy:(id)arg1;
- (void)layerStyleDidChange;
- (BOOL)isEmpty;
- (BOOL)shouldUseCachedBezierRepresentation;
- (void)changeColor:(id)arg1;
@property(copy, nonatomic) NSDictionary *styleAttributes; // @dynamic styleAttributes;
- (void)setNilValueForKey:(id)arg1;
@property(copy, nonatomic) MSColor *textColor; // @dynamic textColor;
@property(nonatomic) double lineSpacing; // @dynamic lineSpacing;
- (double)baseLineHeight;
@property(nonatomic) double characterSpacing; // @dynamic characterSpacing;
@property(retain, nonatomic) NSString *fontPostscriptName; // @dynamic fontPostscriptName;
- (void)setFont:(id)arg1;
@property(nonatomic) double fontSize; // @dynamic fontSize;
- (void)changeTextColorTo:(id)arg1;
@property(nonatomic) unsigned long long textAlignment; // @dynamic textAlignment;
- (void)setLeading:(double)arg1;
- (double)leading;
- (id)paragraphStyle;
- (void)setKerning:(float)arg1;
- (float)kerning;
- (struct CGRect)dirtyRectForBounds;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)recordRelativeRect;
- (id)_bezierPathInBounds;
- (id)_bezierPath;
- (id)bezierPath;
- (id)bezierPathWithTransforms;
- (double)startingPositionOnPath:(id)arg1;
- (double)defaultLineHeight;
- (id)font;
- (void)changeFont:(id)arg1;
- (id)handlerName;
- (BOOL)shouldDrawSelection;
- (unsigned long long)selectionCornerMask;
- (struct CGRect)affectedFrameOfLayer;
- (id)layoutManager;
- (id)firstUnderlyingShape;
- (void)setIsEditingText:(BOOL)arg1;
- (BOOL)isEditingText;
- (void)prepareForUndo;
- (void)setStorageContents:(id)arg1;
- (id)container;
- (void)adjustFrameToFit;
- (void)finishEditing;
- (void)startEditing;
- (void)refreshForPropertyChanged:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)syncTextStyleAttributes;
- (struct CGSize)textContainerSize;
- (id)createTextContainer;
- (id)createLayoutManager;
- (void)recreateTextObjects;
- (void)setUpText;
- (void)rectWidthDidChange:(id)arg1;
- (void)layerSizeDidChangeFromCorner:(long long)arg1;
- (void)setContainerSize:(struct CGSize)arg1;
- (void)adjustContainerWidthTo:(double)arg1;
- (void)setupBehaviour:(BOOL)arg1;
- (void)setTextBehaviour:(long long)arg1;
- (id)defaultName;
- (void)sanityCheckText;
- (void)setStyle:(id)arg1;
- (void)initObjectWithCoder:(id)arg1;
- (void)objectDidInit;
- (void)initEmptyObject;
- (id)initWithFrame:(struct CGRect)arg1 attributes:(id)arg2 type:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)CSSAttributes;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (BOOL)shouldRenderInTransparencyLayer;
- (unsigned long long)decodingConversionForProperty:(id)arg1;
- (void)migratePropertiesFromV30OrEarlierWithCoder:(id)arg1;
- (void)migratePropertiesFromV34OrEarlierWithCoder:(id)arg1;
- (void)initLegacyWithCoder:(id)arg1;
- (Class)rendererClass;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (id)elementForSpan:(id)arg1 origin:(struct CGPoint)arg2 exporter:(id)arg3 text:(id)arg4;
- (id)spanInfoForRun:(struct _NSRange)arg1 charAttributes:(id)arg2 text:(id)arg3;
- (void)addSVGAttributes:(id)arg1 forCharacterAttributes:(id)arg2 forExporter:(id)arg3 origin:(struct CGPoint *)arg4;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)svgStyle;
@end
