@interface MSSharedLayerStyle : _MSSharedLayerStyle
{
}
- (unsigned long long)type;
- (id)newInstance;
@property(readonly, nonatomic) MSStyle *style;
- (id)defaultName;
- (void)migratePropertiesFromV23OrEarlierWithCoder:(id)arg1;
@end
