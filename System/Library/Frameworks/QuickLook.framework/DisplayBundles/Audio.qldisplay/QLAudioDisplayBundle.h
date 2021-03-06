/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Audio.qldisplay/Audio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLDisplayBundle.h>

@class QLAudioViewController;

@interface QLAudioDisplayBundle : QLDisplayBundle {

	QLAudioViewController* _audioViewController;

}
+(BOOL)needsAVControls;
+(double)allowedLoadingDelay;
-(void)_loadAudioControllerIfNeeded;
-(void)_updateAVState;
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPreviewItem:(id)arg1 ;
-(void)enterBackground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(void)audioSessionDidInterrupt;
-(BOOL)canBeCached;
-(void)enterForeground;
-(void)setNavigationBarVerticalOffset:(double)arg1 ;
-(BOOL)canCopyToPasteboard;
-(int)airPlayMode;
-(void)willStartSwiping:(BOOL)arg1 ;
-(void)didFinishSwiping;
@end

