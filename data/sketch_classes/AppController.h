@interface AppController : NSObject <NSApplicationDelegate, BITHockeyManagerDelegate, BITCrashManagerDelegate, NSWindowDelegate, NSMenuDelegate>
{
id shapesMenu;	// 8 = 0x8
NSMenuItem *pluginsMenuItem;	// 16 = 0x10
NSMenu *templatesMenu;	// 24 = 0x18
NSMenu *printMenu;	// 32 = 0x20
NSMenuItem *debugMenuItem;	// 40 = 0x28
MSIOSConnectionController *_connectionController;	// 48 = 0x30
NSTimer *_updateTimer;	// 56 = 0x38
MSReleaseNotesWindowController *_releaseNotesWindowController;	// 64 = 0x40
NSString *_scriptPath;	// 72 = 0x48
NSURL *_crashLogURL;	// 80 = 0x50
NSMutableArray *_crashLog;	// 88 = 0x58
id _lastRunPlugin;	// 96 = 0x60
}
@property(retain, nonatomic) id lastRunPlugin; // @synthesize lastRunPlugin=_lastRunPlugin;
@property(retain, nonatomic) NSMutableArray *crashLog; // @synthesize crashLog=_crashLog;
@property(retain, nonatomic) NSURL *crashLogURL; // @synthesize crashLogURL=_crashLogURL;
@property(nonatomic) NSString *scriptPath; // @synthesize scriptPath=_scriptPath;
@property(retain, nonatomic) MSReleaseNotesWindowController *releaseNotesWindowController; // @synthesize releaseNotesWindowController=_releaseNotesWindowController;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) MSIOSConnectionController *connectionController; // @synthesize connectionController=_connectionController;
- (void).cxx_destruct;
- (id)crashLogText;
- (void)addToCrashLog:(id)arg1;
- (void)refreshCurrentDocument;
- (void)visitDocumentation:(id)arg1;
- (void)openPluginsFolder:(id)arg1;
- (void)runLastScriptAction:(id)arg1;
- (void)runCustomScriptAction:(id)arg1;
- (void)revealPlugin:(id)arg1;
- (void)editPlugin:(id)arg1;
- (void)runPlugin:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)buyInAppStore:(id)arg1;
- (id)majorVersion;
- (id)subTextForRegistration;
- (void)showSupportPage:(id)arg1;
- (void)showOnlineHelp:(id)arg1;
- (void)feedback:(id)arg1;
- (void)openPreferencesWindow:(id)arg1;
- (void)documentWillClose:(id)arg1;
- (void)revealPluginsFolderInFinder:(id)arg1;
- (void)addTemplatesAtPath:(id)arg1 toMenu:(id)arg2;
- (id)templateLibraryPath;
- (void)updateTemplateMenu:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)openTemplateAtPath:(id)arg1;
- (void)openTemplateFile:(id)arg1;
- (void)checkDefaults;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)showReleaseNotesWindow:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)awakeFromNib;
- (void)welcomeToSketch:(id)arg1;
- (void)showMainApplicationWindow;
- (id)licensePlaceholderString;
- (BOOL)isAppStoreVersion;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (id)runPluginScript:(id)arg1;
- (id)runPluginAtURL:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (void)checkForUpdates:(id)arg1;
- (id)applicationLogForCrashManager:(id)arg1;
- (void)startHockeyAppTracking;
- (void)stopCheckingForUpdates;
- (void)checkForUpdatesAndCrashes;
@end
