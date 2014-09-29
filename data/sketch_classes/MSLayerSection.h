@interface MSLayerSection : CHViewController <MSSectionProtocol>
{
NSArray *layers;	// 104 = 0x68
}
@property(copy, nonatomic) NSArray *layers; // @synthesize layers;
- (void).cxx_destruct;
- (id)views;
- (id)initWithLayer:(id)arg1;
@end
