@interface MSActionsController : NSObject
{
NSMutableDictionary *actions;	// 8 = 0x8
NSString *actionNameForActiveToolbarItem;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *actionNameForActiveToolbarItem; // @synthesize actionNameForActiveToolbarItem;
- (void).cxx_destruct;
- (void)dealloc;
- (id)actions;
- (id)actionWithName:(id)arg1;
- (id)allActions;
- (void)createActionForDocument:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;
- (id)actionClassNames;
@end
