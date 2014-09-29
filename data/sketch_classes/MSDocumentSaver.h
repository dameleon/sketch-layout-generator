@interface MSDocumentSaver : MSCommand
{
MSDocument *_document;	// 8 = 0x8
}
@property(nonatomic) __weak MSDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)fileWrapper;
- (id)run;
@end
