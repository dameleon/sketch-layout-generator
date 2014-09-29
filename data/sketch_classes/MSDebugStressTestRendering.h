@interface MSDebugStressTestRendering : NSObject
{
MSDocument *_document;	// 8 = 0x8
}
+ (void)stressTestDocument:(id)arg1;
@property(retain, nonatomic) MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)findRandomParent;
- (id)findRandomLayer;
- (void)runInBackground;
- (void)run;
@end
