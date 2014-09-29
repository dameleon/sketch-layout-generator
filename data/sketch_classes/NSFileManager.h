@interface NSFileManager (CHFileManagerExtensions)
- (BOOL)fileIsFolder:(id)arg1;
- (id)shallowSubpathsOfDirectoryAtURL:(id)arg1;
- (id)visibleSubpathsOfDirectoryWithoutGoingIntoPackages:(id)arg1;
- (id)visibleSubpathsOfDirectoryAtURLWithoutGoingIntoPackages:(id)arg1;
- (BOOL)createDirectoryIfNecessary:(id)arg1;
- (id)visibleSubpathsOfDirectory:(id)arg1;
@end
