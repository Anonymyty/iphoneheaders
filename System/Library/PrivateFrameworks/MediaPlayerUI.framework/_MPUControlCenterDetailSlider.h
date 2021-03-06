/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <SpringBoardUI/SBUIControlCenterSlider.h>
#import <libobjc.A.dylib/MPDetailedScrubbing.h>
#import <libobjc.A.dylib/_MPUSliderScrubForwarding.h>

@class MPDetailScrubController, NSString;

@interface _MPUControlCenterDetailSlider : SBUIControlCenterSlider <MPDetailedScrubbing, _MPUSliderScrubForwarding> {

	MPDetailScrubController* _scrubController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) MPDetailScrubController * scrubController;              //@synthesize scrubController=_scrubController - In the implementation block
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrubController:(MPDetailScrubController *)arg1 ;
-(MPDetailScrubController *)scrubController;
-(CGRect)thumbHitRect;
@end

