@interface MSFontList : NSObject
{
unsigned long long _cachingIndex;	// 8 = 0x8
NSArray *_commonFonts;	// 16 = 0x10
NSArray *_systemFonts;	// 24 = 0x18
NSArray *_allFonts;	// 32 = 0x20
NSArray *_filterFonts;	// 40 = 0x28
}
+ (void)initialize;
@property(retain, nonatomic) NSArray *filterFonts; // @synthesize filterFonts=_filterFonts;
@property(retain, nonatomic) NSArray *allFonts; // @synthesize allFonts=_allFonts;
@property(retain, nonatomic) NSArray *systemFonts; // @synthesize systemFonts=_systemFonts;
@property(retain, nonatomic) NSArray *commonFonts; // @synthesize commonFonts=_commonFonts;
- (void).cxx_destruct;
- (void)stopCachingFonts;
- (void)startCachingFonts;
- (void)clearFilter;
- (void)filter:(id)arg1;
- (id)fontForFontAtIndex:(unsigned long long)arg1;
- (id)nameOfFontAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFonts;
- (void)findCommonFontsInDocument:(id)arg1;
- (void)findSystemFonts;
- (void)prepareList:(id)arg1;
@end
