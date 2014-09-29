@interface MSNormalEventData : NSObject
{
struct CGPoint selectionStartPoint;	// 8 = 0x8
struct CGPoint selectionEndPoint;	// 24 = 0x18
BOOL hasMultipleTouches;	// 40 = 0x28
BOOL didMouseDown;	// 41 = 0x29
long long resizingCorner;	// 48 = 0x30
long long dragMode;	// 56 = 0x38
struct CGPoint mouseDown;	// 64 = 0x40
struct CGPoint midPoint;	// 80 = 0x50
struct CGPoint originalScrollOrigin;	// 96 = 0x60
NSMutableArray *snapHorizontalLines;	// 112 = 0x70
NSMutableArray *snapVerticalLines;	// 120 = 0x78
NSMutableArray *snapWidthLayers;	// 128 = 0x80
NSMutableArray *snapHeightLayers;	// 136 = 0x88
NSMutableArray *snapDistanceWidths;	// 144 = 0x90
NSMutableArray *snapDistanceHeights;	// 152 = 0x98
MSLayer *resizingLayer;	// 160 = 0xa0
NSArray *_backupSelection;	// 168 = 0xa8
}
@property(copy, nonatomic) NSArray *backupSelection; // @synthesize backupSelection=_backupSelection;
@property(retain, nonatomic) NSMutableArray *snapDistanceHeights; // @synthesize snapDistanceHeights;
@property(retain, nonatomic) NSMutableArray *snapDistanceWidths; // @synthesize snapDistanceWidths;
@property(retain, nonatomic) NSMutableArray *snapHeightLayers; // @synthesize snapHeightLayers;
@property(retain, nonatomic) NSMutableArray *snapWidthLayers; // @synthesize snapWidthLayers;
@property(nonatomic) BOOL hasMultipleTouches; // @synthesize hasMultipleTouches;
@property(retain, nonatomic) NSMutableArray *snapVerticalLines; // @synthesize snapVerticalLines;
@property(retain, nonatomic) NSMutableArray *snapHorizontalLines; // @synthesize snapHorizontalLines;
@property(nonatomic) long long dragMode; // @synthesize dragMode;
@property(nonatomic) long long resizingCorner; // @synthesize resizingCorner;
@property(retain, nonatomic) MSLayer *resizingLayer; // @synthesize resizingLayer;
@property(nonatomic) struct CGPoint originalScrollOrigin; // @synthesize originalScrollOrigin;
@property(nonatomic) struct CGPoint midPoint; // @synthesize midPoint;
@property(nonatomic) struct CGPoint mouseDown; // @synthesize mouseDown;
@property(nonatomic) BOOL didMouseDown; // @synthesize didMouseDown;
@property(nonatomic) struct CGPoint selectionEndPoint; // @synthesize selectionEndPoint;
@property(nonatomic) struct CGPoint selectionStartPoint; // @synthesize selectionStartPoint;
- (void).cxx_destruct;
- (id)init;
@end
