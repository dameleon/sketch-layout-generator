@interface MSSliceExportOptions : NSViewController
{
NSView *_optionsViewJPG;	// 104 = 0x68
NSView *_optionsViewSaveForWeb;	// 112 = 0x70
}
+ (id)exportOptions;
@property(retain, nonatomic) NSView *optionsViewSaveForWeb; // @synthesize optionsViewSaveForWeb=_optionsViewSaveForWeb;
@property(retain, nonatomic) NSView *optionsViewJPG; // @synthesize optionsViewJPG=_optionsViewJPG;
- (void).cxx_destruct;
- (void)setExtensions:(id)arg1;
@end
