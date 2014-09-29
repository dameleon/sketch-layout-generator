@interface CSCustomField : NSObject
{
BOOL _clear;	// 8 = 0x8
BOOL _visibleInPreferenceCenter;	// 9 = 0x9
int _dataType;	// 12 = 0xc
NSString *_key;	// 16 = 0x10
NSString *_name;	// 24 = 0x18
NSArray *_options;	// 32 = 0x20
id _value;	// 40 = 0x28
}
+ (id)customFieldWithDictionary:(id)arg1;
+ (id)customFieldWithKey:(id)arg1 value:(id)arg2;
+ (id)customFieldWithKey:(id)arg1 name:(id)arg2 visibleInPreferenceCenter:(BOOL)arg3;
+ (id)customFieldWithName:(id)arg1 dataType:(int)arg2;
+ (id)customFieldWithName:(id)arg1 dataType:(int)arg2 options:(id)arg3;
+ (id)customFieldWithName:(id)arg1 key:(id)arg2 dataType:(int)arg3 options:(id)arg4;
+ (id)customFieldWithName:(id)arg1 key:(id)arg2 dataType:(int)arg3 options:(id)arg4 value:(id)arg5;
+ (id)customFieldWithName:(id)arg1 key:(id)arg2 dataType:(int)arg3 options:(id)arg4 value:(id)arg5 visibleInPreferenceCenter:(BOOL)arg6;
+ (void)initialize;
+ (id)dataTypeStringForDataType:(int)arg1;
+ (int)dataTypeForDataTypeString:(id)arg1;
@property BOOL visibleInPreferenceCenter; // @synthesize visibleInPreferenceCenter=_visibleInPreferenceCenter;
@property BOOL clear; // @synthesize clear=_clear;
@property(retain) id value; // @synthesize value=_value;
@property(retain) NSArray *options; // @synthesize options=_options;
@property int dataType; // @synthesize dataType=_dataType;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)dataTypeString;
@end
