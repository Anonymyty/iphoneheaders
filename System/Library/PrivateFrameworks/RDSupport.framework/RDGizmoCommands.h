/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:15:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RDGizmoCommands : NSObject
-(void)reboot;
-(void)disableSleep;
-(void)enableSleep;
-(void)startPlayingDemoMovie;
-(void)resetNotificationCenterIfNecessary;
-(void)requestNotificationCenterCleanup;
-(void)resetBrightnessToDefaultValue;
-(void)resetFontSizeToDefaultValue;
-(void)resetHeySiri;
-(void)resetStopwatch;
-(void)stopPlayingDemoMovie;
-(void)disableMessageExpiration;
-(void)disableCalendarSync;
-(void)disableMusicSync;
-(id)getBacklightAssertionQueue;
-(void)renewBacklightAssertion;
@end
