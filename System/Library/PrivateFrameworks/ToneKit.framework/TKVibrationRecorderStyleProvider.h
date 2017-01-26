/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, UIScreen, UIFont, UIImage;


@protocol TKVibrationRecorderStyleProvider <NSObject>
@property (nonatomic,readonly) UIColor * vibrationRecorderBarsBackgroundColor; 
@property (nonatomic,retain) UIScreen * screen; 
@property (nonatomic,readonly) UIFont * vibrationRecorderInstructionsLabelFont; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelTextColor; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor; 
@property (nonatomic,readonly) UIOffset vibrationRecorderInstructionsLabelPositionOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarVerticalOffset; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarAdditionalHeight; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) double vibrationRecorderProgressToolbarVerticalOffset; 
@property (nonatomic,readonly) double vibrationRecorderProgressToolbarAdditionalHeight; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderProgressViewTrackColor; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewDotHorizontalInset; 
@property (nonatomic,readonly) UIImage * vibrationRecorderProgressViewResizableDotImage; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderRippleViewBackgroundColor; 
@property (nonatomic,readonly) double vibrationRecorderRippleRingLineWidth; 
@property (nonatomic,readonly) double vibrationRecorderRippleInitialRadius; 
@property (nonatomic,readonly) double vibrationRecorderRippleFinalRadius; 
@property (nonatomic,readonly) double vibrationRecorderRippleFingerStillSpeed; 
@property (nonatomic,readonly) double vibrationRecorderRippleFingerMovingSpeed; 
@required
-(UIScreen *)screen;
-(void)setScreen:(id)arg1;
-(UIImage *)vibrationRecorderProgressViewResizableDotImage;
-(UIColor *)vibrationRecorderBarsBackgroundColor;
-(UIFont *)vibrationRecorderInstructionsLabelFont;
-(UIColor *)vibrationRecorderInstructionsLabelTextColor;
-(UIColor *)vibrationRecorderInstructionsLabelBackgroundColor;
-(UIOffset)vibrationRecorderInstructionsLabelPositionOffset;
-(UIEdgeInsets)vibrationRecorderInstructionsLabelEdgeInsets;
-(double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
-(double)vibrationRecorderControlsToolbarVerticalOffset;
-(double)vibrationRecorderControlsToolbarAdditionalHeight;
-(double)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
-(double)vibrationRecorderProgressToolbarVerticalOffset;
-(double)vibrationRecorderProgressToolbarAdditionalHeight;
-(double)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
-(double)vibrationRecorderProgressViewHeight;
-(UIColor *)vibrationRecorderProgressViewTrackColor;
-(double)vibrationRecorderProgressViewDotHorizontalInset;
-(double)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
-(UIColor *)vibrationRecorderRippleViewBackgroundColor;
-(double)vibrationRecorderRippleRingLineWidth;
-(double)vibrationRecorderRippleInitialRadius;
-(double)vibrationRecorderRippleFinalRadius;
-(double)vibrationRecorderRippleFingerStillSpeed;
-(double)vibrationRecorderRippleFingerMovingSpeed;

@end
