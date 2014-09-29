@interface MSIOSRefreshRendererOperation : NSOperation
{
MSArtboardGroup *_artboardCopy;	// 24 = 0x18
MSPage *_pageCopy;	// 32 = 0x20
struct CGRect _rect;	// 40 = 0x28
}
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) MSPage *pageCopy; // @synthesize pageCopy=_pageCopy;
@property(retain, nonatomic) MSArtboardGroup *artboardCopy; // @synthesize artboardCopy=_artboardCopy;
- (void).cxx_destruct;
- (id)sliceForArtboard:(id)arg1;
- (void)main;
@end
