/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimationSettings.h>

@interface SBIconZoomSettings : SBIconAnimationSettings {

	BOOL _labelAlphaWithZoom;

}

@property (assign) BOOL labelAlphaWithZoom;              //@synthesize labelAlphaWithZoom=_labelAlphaWithZoom - In the implementation block
+(id)settingsControllerModule;
-(void)setLabelAlphaWithZoom:(BOOL)arg1 ;
-(BOOL)labelAlphaWithZoom;
-(void)setDefaultValues;
@end
