/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBSetupManager : NSObject {

	BOOL _inSetupMode;

}

@property (getter=isInSetupMode,nonatomic,readonly) BOOL inSetupMode; 
+(id)sharedInstance;
-(BOOL)isInSetupMode;
-(BOOL)updateInSetupMode;
-(BOOL)_setInSetupMode:(BOOL)arg1 ;
-(BOOL)setupHasFinishedRestoringFromBackup;
-(BOOL)setupIsRunningForUpdateInstall;
-(id)init;
@end
