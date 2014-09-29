@interface BCFontSearchField : NSSearchField <NSTextViewDelegate>
{
NSTableView *_searchResults;	// 216 = 0xd8
}
@property(nonatomic) __weak NSTableView *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)moveFocusToTableView;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
@end
