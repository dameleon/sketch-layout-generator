@interface MSMenuBuilder : NSObject
{
id _target;	// 8 = 0x8
SEL _action;	// 16 = 0x10
id <MSBasicDelegate> _delegate;	// 24 = 0x18
}
+ (id)menuBuilderWithTarget:(id)arg1 delegate:(id)arg2;
+ (id)menuBuilderWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)menuBuilderWithTarget:(id)arg1;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;
@end
