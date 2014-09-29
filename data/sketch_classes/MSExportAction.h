@interface MSExportAction : MSBaseAction
{
}
- (id)slices;
- (id)baseNameForSlice;
- (struct CGRect)rectForExportingEntirePage;
- (void)createInitialSlice;
- (void)showInspectorPanelIfNecessary;
- (BOOL)hasArtboardsWitNoExportSlizes;
- (void)performAction:(id)arg1;
- (BOOL)validate;
- (void)export:(id)arg1;
@end
