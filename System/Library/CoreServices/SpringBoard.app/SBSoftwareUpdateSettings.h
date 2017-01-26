/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:23 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSoftwareUpdateSettings : _UISettings {

	unsigned long long _defaultRepopDuration;
	unsigned long long _repopStrategyTest;

}

@property (assign,nonatomic) unsigned long long defaultRepopDuration;              //@synthesize defaultRepopDuration=_defaultRepopDuration - In the implementation block
@property (assign,nonatomic) unsigned long long repopStrategyTest;                 //@synthesize repopStrategyTest=_repopStrategyTest - In the implementation block
+(id)settingsControllerModule;
-(unsigned long long)repopStrategyTest;
-(void)setDefaultRepopDuration:(unsigned long long)arg1 ;
-(void)setRepopStrategyTest:(unsigned long long)arg1 ;
-(unsigned long long)defaultRepopDuration;
-(void)setDefaultValues;
@end
