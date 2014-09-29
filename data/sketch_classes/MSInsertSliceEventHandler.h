@interface MSInsertSliceEventHandler : MSInsertLayerEventHandler
{
NSArray *_allSlices;	// 128 = 0x80
MSLayer *_hoveringLayer;	// 136 = 0x88
}
@property(retain, nonatomic) MSLayer *hoveringLayer; // @synthesize hoveringLayer=_hoveringLayer;
@property(retain, nonatomic) NSArray *allSlices; // @synthesize allSlices=_allSlices;
- (void).cxx_destruct;
- (id)toolbarIdentifier;
- (void)drawInRect:(struct CGRect)arg1;
- (id)currentGroup;
- (struct CGPoint)alignMouseToGrid:(struct CGPoint)arg1;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (id)layersBelowPoint:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
@end
