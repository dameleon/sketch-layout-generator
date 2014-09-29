@interface MSFillStyleCollection : MSStylePartCollection
{
}
- (id)gradientFillForInserting;
- (id)colorFillForInserting;
- (id)stylePartForInserting;
- (void)migratePropertiesFromV31OrEarlierWithCoder:(id)arg1;
@end
