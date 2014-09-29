@interface MSRulerGuides : NSObject
{
}
+ (id)absoluteFrameOfSelectedLayers:(id)arg1;
+ (id)localVerticalRulerGuidesForGrid:(id)arg1 ruler:(id)arg2 forDrawing:(BOOL)arg3 inRect:(struct CGRect)arg4;
+ (id)verticalRulerGuidesWithDelegate:(id)arg1 forDrawing:(BOOL)arg2 inRect:(struct CGRect)arg3;
+ (id)verticalRulerGuidesWithDelegate:(id)arg1 forDrawing:(BOOL)arg2;
+ (id)localHorizontalRulerGuidesForGrid:(id)arg1 ruler:(id)arg2 forDrawing:(BOOL)arg3 inRect:(struct CGRect)arg4;
+ (id)horizontalRulerGuidesWithDelegate:(id)arg1 forDrawing:(BOOL)arg2 inRect:(struct CGRect)arg3;
+ (id)horizontalRulerGuidesWithDelegate:(id)arg1 forDrawing:(BOOL)arg2;
@end
