@interface BCFlexibleColor : NSObject
{
double _red;	// 8 = 0x8
double _green;	// 16 = 0x10
double _blue;	// 24 = 0x18
double _hue;	// 32 = 0x20
double _sat;	// 40 = 0x28
double _light;	// 48 = 0x30
double _alpha;	// 56 = 0x38
}
+ (id)colorWithHue:(double)arg1 sat:(double)arg2 light:(double)arg3 alpha:(double)arg4;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double light; // @synthesize light=_light;
@property(nonatomic) double sat; // @synthesize sat=_sat;
@property(nonatomic) double hue; // @synthesize hue=_hue;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)colorForColorSpace:(id)arg1;
@end
