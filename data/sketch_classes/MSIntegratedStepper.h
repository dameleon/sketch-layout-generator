@interface MSIntegratedStepper : NSView
{
BOOL _keepFiringTimer;	// 152 = 0x98
MSUpDownController *_target;	// 160 = 0xa0
NSTimer *_timer;	// 168 = 0xa8
NSTimer *_initialSlowTimer;	// 176 = 0xb0
long long _highlightMode;	// 184 = 0xb8
}
@property(nonatomic) BOOL keepFiringTimer; // @synthesize keepFiringTimer=_keepFiringTimer;
@property(nonatomic) long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(retain, nonatomic) NSTimer *initialSlowTimer; // @synthesize initialSlowTimer=_initialSlowTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak MSUpDownController *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)stepWithEvent:(id)arg1;
- (void)repeatStepEvent:(id)arg1;
- (id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
@end
