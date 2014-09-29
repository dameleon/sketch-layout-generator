@interface MSImageCollection : _MSImageCollection
{
}
- (id)description;
- (id)imageWithSHA1:(id)arg1;
- (void)purgeImagesNotMatchingSHAs:(id)arg1;
- (id)imagesIndexedBySHAs:(id)arg1;
- (void)addImagesIndexedBySHA:(id)arg1;
- (void)addImageToIndex:(id)arg1;
- (id)addImage:(id)arg1 name:(id)arg2 convertColourspace:(BOOL)arg3;
- (unsigned long long)uniqueImageCount;
- (id)treeAsDictionary;
@end
