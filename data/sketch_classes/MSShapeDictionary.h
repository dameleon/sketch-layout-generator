@interface MSShapeDictionary : NSObject
{
NSMutableSet *pairs;	// 8 = 0x8
}
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)each:(CDUnknownBlockType)arg1;
- (id)allShapes;
- (void)removeAllValues;
- (void)setValue:(id)arg1 forShape:(id)arg2;
- (id)valueForShape:(id)arg1;
- (id)init;
@end
