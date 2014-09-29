@interface CSTemplate : NSObject
{
NSString *_templateID;	// 8 = 0x8
NSString *_name;	// 16 = 0x10
NSString *_previewPage;	// 24 = 0x18
NSString *_screenshotPage;	// 32 = 0x20
}
+ (id)templateWithDictionary:(id)arg1;
@property(copy) NSString *screenshotPage; // @synthesize screenshotPage=_screenshotPage;
@property(copy) NSString *previewPage; // @synthesize previewPage=_previewPage;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
@end
