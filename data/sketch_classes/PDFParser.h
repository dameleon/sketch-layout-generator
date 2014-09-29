@interface PDFParser : NSObject <PDFParser>
{
NSString *_name;	// 8 = 0x8
PDFScanner *_scanner;	// 16 = 0x10
struct CGPDFDocument *_document;	// 24 = 0x18
}
@property(nonatomic) struct CGPDFDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) PDFScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)parseWithProgress:(CDUnknownBlockType)arg1;
- (unsigned long long)pageCount;
- (void)loadDocumentFromData:(id)arg1;
- (void)loadDocumentFromURL:(id)arg1;
- (id)initWithScanner:(id)arg1;
@end
