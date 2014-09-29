@interface ECLogManagerMac : ECLogManager
{
}
- (void)assertNow:(id)arg1;
- (void)crashNow:(id)arg1;
- (void)saveSettings:(id)arg1;
- (void)shutdown;
- (void)startup;
- (id)installDebugSubmenuWithTitle:(id)arg1 class:(Class)arg2;
- (id)debugMenuItem;
@end
