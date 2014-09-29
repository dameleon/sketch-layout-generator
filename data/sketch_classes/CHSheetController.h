@interface CHSheetController : NSWindowController
{
id _object;	// 80 = 0x50
id _delegate;	// 88 = 0x58
}
+ (id)runForWindow:(id)arg1 withObject:(id)arg2 delegate:(id)arg3;
+ (id)runForWindow:(id)arg1 withObject:(id)arg2;
+ (id)runForWindow:(id)arg1;
+ (id)runWithObject:(id)arg1;
+ (id)run;
@property __weak id delegate; // @synthesize delegate=_delegate;
@property(retain) id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (void)_sheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)_init;
- (id)windowNibName;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
@end
