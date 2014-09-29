@interface MSImportInsert : NSObject
{
MSLayerGroup *_group;	// 8 = 0x8
id <MSImporter> _importer;	// 16 = 0x10
NSURL *_fileURL;	// 24 = 0x18
NSData *_data;	// 32 = 0x20
CHProgressSheet *_sheet;	// 40 = 0x28
NSUndoManager *_undoManager;	// 48 = 0x30
NSString *_name;	// 56 = 0x38
NSArray *_addedLayers;	// 64 = 0x40
}
+ (void)importFromData:(id)arg1 name:(id)arg2 inGroup:(id)arg3 importer:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)importFromURL:(id)arg1 inGroup:(id)arg2 importer:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSArray *addedLayers; // @synthesize addedLayers=_addedLayers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain, nonatomic) CHProgressSheet *sheet; // @synthesize sheet=_sheet;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) id <MSImporter> importer; // @synthesize importer=_importer;
@property(retain, nonatomic) MSLayerGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSContentDrawView *view; // @dynamic view;
- (BOOL)shouldExpandPages;
- (id)showProgressSheet;
- (void)importerDidFinish;
- (void)close;
- (void)collapseSinglePage;
- (BOOL)expandPages;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
@end
