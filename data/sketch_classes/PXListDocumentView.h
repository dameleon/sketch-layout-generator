@interface PXListDocumentView : NSView
{
PXListView *_listView;	// 152 = 0x98
unsigned long long _dropHighlight;	// 160 = 0xa0
}
@property(nonatomic) unsigned long long dropHighlight; // @synthesize dropHighlight=_dropHighlight;
@property(nonatomic) __weak PXListView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
@end
