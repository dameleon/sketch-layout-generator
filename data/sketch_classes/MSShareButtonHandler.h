@interface MSShareButtonHandler : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
NSWindow *_window;	// 8 = 0x8
MSLayer *_sliceLayer;	// 16 = 0x10
MSContentDrawView *_canvas;	// 24 = 0x18
}
@property(retain, nonatomic) MSContentDrawView *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) MSLayer *sliceLayer; // @synthesize sliceLayer=_sliceLayer;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)imagesFromSlice:(id)arg1;
- (void)showShareMenuForLayer:(id)arg1 sender:(id)arg2 canvas:(id)arg3;
@end
