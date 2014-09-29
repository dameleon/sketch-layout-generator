@interface MSGroupCloser : NSObject
{
}
+ (void)doCloseGroup:(id)arg1;
+ (BOOL)shouldCloseGroup:(id)arg1;
+ (void)tryCloseSubgroupsOfGroup:(id)arg1;
+ (void)tryCloseGroup:(id)arg1;
+ (void)closeGroupsOnPage:(id)arg1;
@end
