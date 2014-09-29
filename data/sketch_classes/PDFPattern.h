@interface PDFPattern : NSObject
{
unsigned long long _shadingType;	// 8 = 0x8
PDFFunction *_function;	// 16 = 0x10
id _space;	// 24 = 0x18
NSArray *_coords;	// 32 = 0x20
}
+ (id)patternWithResource:(id)arg1;
@property(retain, nonatomic) NSArray *coords; // @synthesize coords=_coords;
@property(retain, nonatomic) id space; // @synthesize space=_space;
@property(retain, nonatomic) PDFFunction *function; // @synthesize function=_function;
@property(nonatomic) unsigned long long shadingType; // @synthesize shadingType=_shadingType;
- (void).cxx_destruct;
- (void)setupFromDictionary:(id)arg1;
- (void)setupFromStream:(id)arg1;
- (id)initWithResource:(id)arg1;
@end
