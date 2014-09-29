@interface _SVGPathShape : SVGDrawableElement
{
BOOL _closed;	// 8 = 0x8
NSBezierPath *_path;	// 16 = 0x10
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
- (void).cxx_destruct;
@end
