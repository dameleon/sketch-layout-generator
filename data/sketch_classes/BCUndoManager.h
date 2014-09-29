@interface BCUndoManager : NSUndoManager
{
int _undoNameRegistrationDisabledCounter;	// 72 = 0x48
int _undCoalescingDisabledCounter;	// 76 = 0x4c
BOOL shouldOpenUndoGroup;	// 80 = 0x50
BOOL hasOpenedUndoGroup;	// 81 = 0x51
}
- (void)enableUndoCoalescing;
- (void)disableUndoCoalescing;
- (BOOL)shouldCoalesceOldAction:(id)arg1 withNewAction:(id)arg2;
- (void)redo;
- (void)undo;
- (id)redoActionName;
- (id)undoActionName;
- (void)setActionName:(id)arg1 sender:(id)arg2;
- (void)setAdvancedActionName:(id)arg1;
- (void)endUndoGrouping;
- (void)prepareForUndo;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)disableUndoNameRegistration;
- (void)enableUndoNameRegistration;
- (void)bc_openUndoGroupIfNecessary;
- (void)endMasterUndoGrouping;
- (void)beginMasterUndoGrouping;
@end
