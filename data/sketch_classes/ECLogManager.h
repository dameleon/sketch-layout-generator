@interface ECLogManager : NSObject
{
NSMutableDictionary *_channels;	// 8 = 0x8
NSMutableDictionary *_handlers;	// 16 = 0x10
NSMutableArray *_defaultHandlers;	// 24 = 0x18
NSMutableDictionary *_settings;	// 32 = 0x20
int _defaultContextFlags;	// 40 = 0x28
NSArray *_handlersSorted;	// 48 = 0x30
}
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *defaultHandlers; // @synthesize defaultHandlers=_defaultHandlers;
@property(retain, nonatomic) NSMutableDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSArray *handlersSorted; // @synthesize handlersSorted=_handlersSorted;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(nonatomic) int defaultContextFlags; // @synthesize defaultContextFlags=_defaultContextFlags;
@property(retain, nonatomic) NSMutableDictionary *channels; // @synthesize channels=_channels;
- (void).cxx_destruct;
- (void)handler:(id)arg1 setDefault:(BOOL)arg2;
- (BOOL)handlerIsDefault:(id)arg1;
- (id)handlersSortedByName;
- (unsigned long long)handlerCount;
- (id)handlerNameForIndex:(unsigned long long)arg1;
- (id)handlerForIndex:(unsigned long long)arg1;
- (unsigned long long)contextFlagCount;
- (int)contextFlagValueForIndex:(unsigned long long)arg1;
- (id)contextFlagNameForIndex:(unsigned long long)arg1;
- (id)channelsSortedByName;
- (void)resetAllSettings;
- (void)resetAllChannels;
- (void)resetChannel:(id)arg1;
- (void)disableAllChannels;
- (void)enableAllChannels;
- (void)logFromChannel:(id)arg1 withObject:(id)arg2 arguments:(struct __va_list_tag [1])arg3 context:(CDStruct_5b5d1a5d *)arg4;
- (id)optionsSettings;
- (void)saveChannelSettings;
- (void)loadChannelSettings;
- (void)loadSettings;
- (id)defaultSettings;
- (void)shutdown;
- (void)startup;
- (id)init;
- (void)registerHandlers;
- (id)registerChannel:(id)arg1;
- (void)applySettings:(id)arg1 toChannel:(id)arg2;
- (void)postUpdateNotification;
- (id)registerChannelWithName:(id)arg1 options:(id)arg2;
- (id)registerChannelWithRawName:(const char *)arg1 options:(id)arg2;
@end
