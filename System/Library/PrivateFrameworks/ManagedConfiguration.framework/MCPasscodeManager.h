/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCPasscodeManager : NSObject
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg1 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 ;
+(BOOL)isDeviceUnlocked;
+(int)defaultNewPasscodeEntrySimplePasscodeType;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(int)unlockScreenTypeForRestrictions:(id)arg1 outSimplePasscodeType:(int*)arg2 ;
+(BOOL)passcode:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 checkHistory:(BOOL)arg3 outError:(id*)arg4 ;
+(id)characteristicsDictionaryFromPasscode:(id)arg1 ;
+(BOOL)_passcodeCharacteristics:(id)arg1 compliesWithPolicyFromRestrictions:(id)arg2 outError:(id*)arg3 ;
+(id)deviceLockedError;
+(id)hashForPasscode:(id)arg1 usingMethod:(int)arg2 salt:(id)arg3 ;
+(id)generateSalt;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)arg1 ;
+(id)sharedManager;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg1 outError:(id*)arg2 ;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(BOOL)passcode:(id)arg1 compliesWithPolicyCheckHistory:(BOOL)arg2 outError:(id*)arg3 ;
-(void)passcodeExpiryDateCompletionBlock:(/*^block*/id)arg1 ;
-(int)currentUnlockScreenType;
-(int)currentUnlockSimplePasscodeType;
-(void)lockDevice;
-(id)_wrongPasscodeError;
-(id)_privatePasscodeDict;
-(id)_publicPasscodeDict;
-(BOOL)_checkPasscode:(id)arg1 againstHistoryWithRestrictions:(id)arg2 outError:(id*)arg3 ;
-(id)_passcodeCharacteristics;
-(id)localizedDescriptionOfPasscodePolicy;
-(BOOL)isCurrentPasscodeCompliantOutError:(id*)arg1 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(int)newPasscodeEntryScreenType;
-(int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1 ;
-(BOOL)isPasscodeSet;
-(BOOL)isDeviceLocked;
@end

