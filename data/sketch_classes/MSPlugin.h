@interface MSPlugin : NSObject
{
BOOL _skipNextLog;	// 8 = 0x8
NSURL *_url;	// 16 = 0x10
NSString *_script;	// 24 = 0x18
NSString *_processedScript;	// 32 = 0x20
NSURL *_root;	// 40 = 0x28
ECASLClient *_logger;	// 48 = 0x30
NSMutableString *_log;	// 56 = 0x38
NSString *_name;	// 64 = 0x40
COScript *_session;	// 72 = 0x48
}
+ (id)pluginsURL;
+ (void)initialisePlugins;
@property(nonatomic) BOOL skipNextLog; // @synthesize skipNextLog=_skipNextLog;
@property(retain, nonatomic) COScript *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSMutableString *log; // @synthesize log=_log;
@property(retain, nonatomic) ECASLClient *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSURL *root; // @synthesize root=_root;
@property(retain, nonatomic) NSString *processedScript; // @synthesize processedScript=_processedScript;
@property(retain, nonatomic) NSString *script; // @synthesize script=_script;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)error:(id)arg1;
- (void)print:(id)arg1;
- (void)save;
- (void)coscript:(id)arg1 hadError:(id)arg2 onLineNumber:(long long)arg3 atSourceURL:(id)arg4;
- (void)removeFinishedPlugins;
- (void)registerAsRunning;
- (id)run;
- (id)scriptWithExpandedImports:(id)arg1 path:(id)arg2;
- (void)processScript;
- (void)setup;
- (id)initWithScript:(id)arg1 name:(id)arg2;
- (id)initWithURL:(id)arg1;
@end
