@interface MSActionValidation : NSObject
{
NSMutableArray *supportedHandlers;	// 8 = 0x8
NSMutableArray *unsupportedHandlers;	// 16 = 0x10
NSMutableArray *supportedLayers;	// 24 = 0x18
NSMutableArray *unsupportedLayers;	// 32 = 0x20
unsigned long long _layerCountComparison;	// 40 = 0x28
unsigned long long _layerCount;	// 48 = 0x30
id <MSBasicDelegate> _delegate;	// 56 = 0x38
NSString *_currentHandlerKey;	// 64 = 0x40
}
@property(copy, nonatomic) NSString *currentHandlerKey; // @synthesize currentHandlerKey=_currentHandlerKey;
@property(nonatomic) __weak id <MSBasicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long layerCount; // @synthesize layerCount=_layerCount;
@property(nonatomic) unsigned long long layerCountComparison; // @synthesize layerCountComparison=_layerCountComparison;
- (void).cxx_destruct;
- (void)dealloc;
- (id)or;
- (id)doesNotSupportLayers:(id)arg1;
- (id)requiresLayers:(id)arg1;
- (id)requiresNormalHandler;
- (id)handler:(id)arg1;
- (id)layerCountAtLeast:(unsigned long long)arg1;
- (BOOL)unsupportedHandlersIsValid;
- (BOOL)supportedHandlersIsValid;
- (BOOL)layerIsUnsupported:(id)arg1;
- (BOOL)layerIsSupported:(id)arg1;
- (BOOL)selectedLayersIsValid;
- (BOOL)layerCountIsValid;
- (BOOL)validateWithDelegate:(id)arg1 handler:(id)arg2;
- (id)init;
@end
