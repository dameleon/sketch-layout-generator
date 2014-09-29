@interface MSPagesPopoverCell : NSTableCellView <NSMenuDelegate>
{
NSView *_placeholderImageView;	// 200 = 0xc8
id <MSPagesPopoverCellDelegate> _delegate;	// 208 = 0xd0
id _pageObjectID;	// 216 = 0xd8
CALayer *_imageLayer;	// 224 = 0xe0
CALayer *_selectionLayer;	// 232 = 0xe8
}
@property(retain, nonatomic) CALayer *selectionLayer; // @synthesize selectionLayer=_selectionLayer;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(copy, nonatomic) id pageObjectID; // @synthesize pageObjectID=_pageObjectID;
@property(nonatomic) __weak id <MSPagesPopoverCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pageNameEditAction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (id)layerForSelectionHighlight:(id)arg1;
- (void)deletePage:(id)arg1;
- (void)duplicatePage:(id)arg1;
- (void)renamePage:(id)arg1;
- (void)removeCellHighlight;
- (void)highlightCell;
- (void)menuDidClose:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)awakeFromNib;
@end
