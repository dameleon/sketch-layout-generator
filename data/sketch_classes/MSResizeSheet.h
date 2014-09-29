@interface MSResizeSheet : CHSheetController
{
double scale;	// 80 = 0x50
NSTextField *scalingField;	// 88 = 0x58
NSTextField *newWidthField;	// 96 = 0x60
NSTextField *newHeightField;	// 104 = 0x68
NSTextField *labelField;	// 112 = 0x70
MSDocument *_doc;	// 120 = 0x78
}
@property(retain, nonatomic) MSDocument *doc; // @synthesize doc=_doc;
@property(nonatomic) double scale; // @synthesize scale;
- (void).cxx_destruct;
- (id)selectedLayers;
- (struct CGPoint)midPointForScaling;
- (void)confirm:(id)arg1;
- (struct CGRect)oldRect;
- (void)didChangeValues;
- (void)willChangeValues;
@property(nonatomic) double height; // @dynamic height;
- (void)setNilValueForKey:(id)arg1;
@property(nonatomic) double width; // @dynamic width;
- (void)awakeFromNib;
@end
