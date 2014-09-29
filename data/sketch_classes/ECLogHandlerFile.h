@interface ECLogHandlerFile : ECLogHandler
{
NSMutableDictionary *files;	// 16 = 0x10
NSURL *logFolder;	// 24 = 0x18
}
@property(retain, nonatomic) NSURL *logFolder; // @synthesize logFolder;
@property(retain, nonatomic) NSMutableDictionary *files; // @synthesize files;
- (void).cxx_destruct;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (void)logString:(id)arg1 forChannel:(id)arg2;
- (id)logFileForChannel:(id)arg1;
- (id)init;
@end
