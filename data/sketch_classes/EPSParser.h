@interface EPSParser : NSObject <PDFParser>
{
PDFParser *_parser;	// 8 = 0x8
}
@property(retain, nonatomic) PDFParser *parser; // @synthesize parser=_parser;
- (void).cxx_destruct;
- (void)debugConvertedFile:(id)arg1;
- (id)name;
- (void)parseWithProgress:(CDUnknownBlockType)arg1;
- (unsigned long long)pageCount;
- (void)loadDocumentFromData:(id)arg1;
- (void)loadDocumentFromURL:(id)arg1;
- (id)initWithScanner:(id)arg1;
@end
