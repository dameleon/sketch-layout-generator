@interface MSLayerListTuple : NSObject
{
MSLayer *_layer;	// 8 = 0x8
long long _level;	// 16 = 0x10
}
+ (id)tupleWithLayer:(id)arg1 level:(long long)arg2;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) MSLayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
@end
