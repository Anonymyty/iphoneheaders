/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>

@class UIView, NSTimer, UISlider, MPVolumeController, NSString;

@interface MPUMediaControlsVolumeView : UIView <MPVolumeControllerDelegate> {

	UIView* _warningView;
	BOOL _warningIndicatorBlinking;
	NSTimer* _warningBlinkTimer;
	NSTimer* _volumeCommitTimer;
	double _timeStoppedTracking;
	long long _style;
	UISlider* _slider;
	MPVolumeController* _volumeController;

}

@property (nonatomic,readonly) long long style;                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UISlider * slider;                                  //@synthesize slider=_slider - In the implementation block
@property (nonatomic,readonly) MPVolumeController * volumeController;              //@synthesize volumeController=_volumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)_beginBlinkingWarningView;
-(void)_blinkWarningView;
-(void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2 ;
-(id)_createVolumeSliderView;
-(void)_volumeSliderBeganChanging:(id)arg1 ;
-(void)_volumeSliderValueChanged:(id)arg1 ;
-(void)_volumeSliderStoppedChanging:(id)arg1 ;
-(void)updateSystemVolumeLevel;
-(void)_stopBlinkingWarningView;
-(void)_stopVolumeCommitTimer;
-(BOOL)_shouldStartBlinkingVolumeWarningIndicator;
-(void)_beginVolumeCommitTimer;
-(BOOL)_volumeSliderDynamicsEnabled;
-(void)_removeVolumeSliderInertia;
-(void)_commitCurrentVolumeValue;
-(id)_warningTrackImage;
-(MPVolumeController *)volumeController;
-(void)_layoutVolumeWarningView;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(UISlider *)slider;
@end

