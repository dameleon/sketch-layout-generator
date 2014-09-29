@interface _SVGElement : NSObject
{
NSSet *_children;	// 8 = 0x8
NSSet *_linked;	// 16 = 0x10
SVGElement *_parent;	// 24 = 0x18
NSString *_desc;	// 32 = 0x20
NSString *_identifier;	// 40 = 0x28
long long _index;	// 48 = 0x30
NSString *_title;	// 56 = 0x38
NSString *_type;	// 64 = 0x40
}
+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) SVGElement *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSSet *linked; // @synthesize linked=_linked;
@property(retain, nonatomic) NSSet *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (void)primitiveSetParent:(id)arg1;
- (void)primitiveRemoveLinkedObject:(id)arg1;
- (void)primitiveAddLinkedObject:(id)arg1;
- (void)removeLinkedObject:(id)arg1;
- (void)addLinkedObject:(id)arg1;
- (void)primitiveRemoveChildrenObject:(id)arg1;
- (void)primitiveAddChildrenObject:(id)arg1;
- (void)removeChildrenObject:(id)arg1;
- (void)addChildrenObject:(id)arg1;
@end
