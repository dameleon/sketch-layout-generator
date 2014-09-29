@interface PDFFunction : NSObject
{
NSData *_samples;	// 8 = 0x8
NSDictionary *_parameters;	// 16 = 0x10
unsigned long long _numberOfInputComponents;	// 24 = 0x18
unsigned long long _numberOfOutputComponents;	// 32 = 0x20
unsigned long long _bitsPerSample;	// 40 = 0x28
unsigned long long _bytesPerSampleComponent;	// 48 = 0x30
unsigned long long _bytesPerSample;	// 56 = 0x38
unsigned long long _numberOfSamples;	// 64 = 0x40
NSArray *_range;	// 72 = 0x48
NSArray *_domain;	// 80 = 0x50
}
+ (id)functionWithInfo:(id)arg1;
@property(retain, nonatomic) NSArray *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSArray *range; // @synthesize range=_range;
@property(nonatomic) unsigned long long numberOfSamples; // @synthesize numberOfSamples=_numberOfSamples;
@property(nonatomic) unsigned long long bytesPerSample; // @synthesize bytesPerSample=_bytesPerSample;
@property(nonatomic) unsigned long long bytesPerSampleComponent; // @synthesize bytesPerSampleComponent=_bytesPerSampleComponent;
@property(nonatomic) unsigned long long bitsPerSample; // @synthesize bitsPerSample=_bitsPerSample;
@property(nonatomic) unsigned long long numberOfOutputComponents; // @synthesize numberOfOutputComponents=_numberOfOutputComponents;
@property(nonatomic) unsigned long long numberOfInputComponents; // @synthesize numberOfInputComponents=_numberOfInputComponents;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSData *samples; // @synthesize samples=_samples;
- (void).cxx_destruct;
- (void)mapInputs:(double [16])arg1 toOutputs:(double [16])arg2;
- (void)setupStitchedWithDictionary:(id)arg1;
- (double)valueForX:(double)arg1 c0:(double)arg2 c1:(double)arg3 n:(double)arg4;
- (void)setupExponentialWithDictionary:(id)arg1;
- (void)extractParameters:(id)arg1;
- (void)setupSampledWithDictionary:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (void)setupWithStream:(id)arg1;
- (id)initWithInfo:(id)arg1;
@end
