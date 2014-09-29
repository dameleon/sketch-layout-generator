@interface MSSelectionPathCollection : NSObject <NSCopying>
{
NSMutableArray *selectionPaths;	// 8 = 0x8
}
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addSelectionsFromCollection:(id)arg1;
- (id)lastSelectionPath;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (BOOL)containsSelectionPath:(id)arg1;
- (id)selectionPaths;
- (void)newSelection:(id)arg1;
- (void)clear;
- (void)toggleSelectionPath:(id)arg1;
- (void)removeSelectionPath:(id)arg1;
- (void)addSelectionPath:(id)arg1;
- (id)init;
@end
