@interface MSPresetPickerView : NSView
{
long long sourceDragIndex;	// 152 = 0x98
id <MSPresetPickerViewDelegate> _delegate;	// 160 = 0xa0
double _tileMargin;	// 168 = 0xa8
double _edgeMargin;	// 176 = 0xb0
unsigned long long _hoveringIndex;	// 184 = 0xb8
unsigned long long _currentIndex;	// 192 = 0xc0
struct CGSize _tileSize;	// 200 = 0xc8
}
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long hoveringIndex; // @synthesize hoveringIndex=_hoveringIndex;
@property(nonatomic) double edgeMargin; // @synthesize edgeMargin=_edgeMargin;
@property(nonatomic) double tileMargin; // @synthesize tileMargin=_tileMargin;
@property(nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) __weak id <MSPresetPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct MSPresetIteratorStruct)incrementIterator:(struct MSPresetIteratorStruct)arg1;
- (long long)columnCount;
- (struct MSPresetIteratorStruct)newIterator;
- (BOOL)allowsInternalDragDrop;
- (void)moveDraggedViewToRowAtIndex:(long long)arg1;
- (long long)hoverIndexForDraggingInfo:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)removePresetForButton:(id)arg1;
- (void)removePresetWithTag:(long long)arg1;
- (void)pickPresetForButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldShowMenuForButton:(id)arg1;
- (BOOL)drawFullContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (void)drawContentForButton:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)isInStackView;
- (void)stackIfPossible;
- (void)addPreset:(id)arg1;
- (id)addPresetButtonWithOffset:(struct CGPoint)arg1;
- (id)presetButtonForIndex:(unsigned long long)arg1 withOffset:(struct CGPoint)arg2;
- (BOOL)shouldShowAddButton;
- (void)reloadData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@end
