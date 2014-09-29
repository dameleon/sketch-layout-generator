@interface PDFStream : NSObject
{
int _format;	// 8 = 0x8
struct CGPDFStream *_stream;	// 16 = 0x10
NSData *_data;	// 24 = 0x18
NSDictionary *_dictionary;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) struct CGPDFStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)initWithStream:(struct CGPDFStream *)arg1;
@end
