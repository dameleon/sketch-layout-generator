@interface MSExportRequest : NSObject
{
BOOL _shouldTrim;	// 8 = 0x8
BOOL _saveForWeb;	// 9 = 0x9
BOOL _progressive;	// 10 = 0xa
BOOL _compact;	// 11 = 0xb
BOOL _includeArtboardBackground;	// 12 = 0xc
NSString *_name;	// 16 = 0x10
unsigned long long _options;	// 24 = 0x18
NSSet *_includedLayerIDs;	// 32 = 0x20
MSColor *_backgroundColor;	// 40 = 0x28
double _scale;	// 48 = 0x30
MSPage *_page;	// 56 = 0x38
NSString *_format;	// 64 = 0x40
double _compression;	// 72 = 0x48
id _rootLayerID;	// 80 = 0x50
struct CGRect _rect;	// 88 = 0x58
}
+ (id)requestWithRect:(struct CGRect)arg1 scale:(double)arg2;
+ (id)requestWithName:(id)arg1 rect:(struct CGRect)arg2;
@property(copy, nonatomic) id rootLayerID; // @synthesize rootLayerID=_rootLayerID;
@property(nonatomic) BOOL includeArtboardBackground; // @synthesize includeArtboardBackground=_includeArtboardBackground;
@property(nonatomic) BOOL compact; // @synthesize compact=_compact;
@property(nonatomic) BOOL progressive; // @synthesize progressive=_progressive;
@property(nonatomic) double compression; // @synthesize compression=_compression;
@property(nonatomic) BOOL saveForWeb; // @synthesize saveForWeb=_saveForWeb;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) MSPage *page; // @synthesize page=_page;
@property(nonatomic) BOOL shouldTrim; // @synthesize shouldTrim=_shouldTrim;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) MSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSSet *includedLayerIDs; // @synthesize includedLayerIDs=_includedLayerIDs;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (void).cxx_destruct;
- (BOOL)layerIsIncluded:(id)arg1;
- (id)init;
@end
