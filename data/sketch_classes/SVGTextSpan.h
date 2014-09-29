@interface SVGTextSpan : NSObject
{
NSString *_text;	// 8 = 0x8
NSDictionary *_attributes;	// 16 = 0x10
struct CGRect _rect;	// 24 = 0x18
}
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@end
