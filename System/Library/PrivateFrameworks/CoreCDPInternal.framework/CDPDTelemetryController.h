/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDTelemetryController : NSObject
+(id)sharedInstance;
-(void)pcsAlreadyMigrated;
-(void)pcsMigrationSucceeded;
-(void)pcsMigrationFailed;
-(void)pcsRollbackSucceeded;
-(void)pcsRollbackFailed;
-(void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2 ;
-(void)signInFailedDueIncorrectICSCAttempts;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;
-(void)didLockAccount;
-(void)didUnlockAccount;
-(void)stateMachineStartedFromClient:(unsigned long long)arg1 ;
-(void)signInFailedDueToLockedAccount;
@end

