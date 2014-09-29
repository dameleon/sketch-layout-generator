@interface MSTextLayerEventHandler : MSEventHandler <NSTextViewDelegate, NSTextStorageDelegate, NSWindowDelegate, MSTextLayerEditingDelegate>
{
MSTextLayerTextView *_textView;	// 128 = 0x80
MSTextWindow *_textViewWindow;	// 136 = 0x88
MSTextLayer *_textLayer;	// 144 = 0x90
}
@property(retain, nonatomic) MSTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) MSTextWindow *textViewWindow; // @synthesize textViewWindow=_textViewWindow;
@property(retain, nonatomic) MSTextLayerTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)undoManager;
- (BOOL)shouldDrawLayerSelection;
- (id)toolbarIdentifier;
- (void)doTextModification:(CDUnknownBlockType)arg1;
- (void)makeLowercase:(id)arg1;
- (void)makeUppercase:(id)arg1;
- (void)removeTextView;
- (void)handlerWillLoseFocus;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)selectAll:(id)arg1;
- (struct CGRect)windowFrameForDrawView;
- (struct CGRect)windowFrameForTextView;
- (void)zoomValueWillChangeTo:(double)arg1;
- (void)viewDidScroll:(id)arg1;
- (BOOL)mouseDown:(struct CGPoint)arg1 clickCount:(int)arg2 flags:(unsigned long long)arg3;
- (void)adjustTextViewFrame;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)adjustForegroundColor;
- (void)beginEditing;
- (struct CGRect)frameForTextViewOnCanvasBasedOnBaseFrame:(struct CGRect)arg1;
- (struct CGRect)frameForTextView;
- (void)makeTextWindow;
- (void)makeTextView;
- (void)addTextView;
- (void)handlerGotFocus;
@end
