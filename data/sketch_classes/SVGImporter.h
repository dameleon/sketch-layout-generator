@interface SVGImporter : NSObject
{
Class _defaultElementClass;	// 8 = 0x8
NSDictionary *_elementClasses;	// 16 = 0x10
SVGElement *_root;	// 24 = 0x18
NSString *_source;	// 32 = 0x20
NSMutableDictionary *_references;	// 40 = 0x28
NSMutableDictionary *_styles;	// 48 = 0x30
NSURL *_url;	// 56 = 0x38
unsigned long long _drawableElementCount;	// 64 = 0x40
}
@property(nonatomic) unsigned long long drawableElementCount; // @synthesize drawableElementCount=_drawableElementCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableDictionary *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSMutableDictionary *references; // @synthesize references=_references;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) SVGElement *root; // @synthesize root=_root;
@property(retain, nonatomic) NSDictionary *elementClasses; // @synthesize elementClasses=_elementClasses;
@property(nonatomic) Class defaultElementClass; // @synthesize defaultElementClass=_defaultElementClass;
- (void).cxx_destruct;
- (id)styleAttributesForElement:(id)arg1 defaults:(id)arg2;
- (void)registerStyles:(id)arg1 forKeys:(id)arg2;
- (void)addedDrawableElement:(id)arg1;
- (id)relativeURLForLink:(id)arg1;
- (void)processReferences:(id)arg1 withElement:(id)arg2;
- (void)addReferenceToIdentifier:(id)arg1 type:(id)arg2 target:(id)arg3 property:(id)arg4;
- (void)registerElementWithIdentifier:(id)arg1 type:(id)arg2 element:(id)arg3;
- (id)referenceEntriesForType:(id)arg1;
- (id)elementOfType:(id)arg1 xml:(id)arg2 parent:(id)arg3;
- (void)processFile;
- (id)importObjectGraph;
- (id)initWithXMLString:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
@end
