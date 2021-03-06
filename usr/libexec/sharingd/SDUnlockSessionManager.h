/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDUnlockIDSControllerDelegate.h>

@protocol OS_dispatch_source;
@class SDUnlockIDSController, SDUnlockSecurityManager, NSObject, NSString;

@interface SDUnlockSessionManager : NSObject <SDUnlockIDSControllerDelegate> {

	long long _setupAuthSession;
	long long _unlockAuthSession;
	long long _stashBagSession;
	SDUnlockIDSController* _idsController;
	SDUnlockSecurityManager* _securityManager;
	NSObject*<OS_dispatch_source> _unlockTimer;

}

@property (assign) long long setupAuthSession;                             //@synthesize setupAuthSession=_setupAuthSession - In the implementation block
@property (assign) long long unlockAuthSession;                            //@synthesize unlockAuthSession=_unlockAuthSession - In the implementation block
@property (assign) long long stashBagSession;                              //@synthesize stashBagSession=_stashBagSession - In the implementation block
@property (retain) SDUnlockIDSController * idsController;                  //@synthesize idsController=_idsController - In the implementation block
@property (retain) SDUnlockSecurityManager * securityManager;              //@synthesize securityManager=_securityManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> unlockTimer;              //@synthesize unlockTimer=_unlockTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(void)debugInfoRequested:(id)arg1 ;
-(unsigned short)pairingCompatibilityState;
-(BOOL)deviceIsPaired;
-(id)generateDebugInfo;
-(void)disableUnlockPairing;
-(void)sendDisableMessage;
-(SDUnlockSecurityManager *)securityManager;
-(void)abortDevicePairingWithReason:(id)arg1 ;
-(void)handleDevicesDidFailToPair;
-(SDUnlockIDSController *)idsController;
-(unsigned)generateSessionID;
-(void)resetSetupState;
-(void)invalidateUnlockTimer;
-(void)logProtoBufReceived:(id)arg1 ;
-(void)resetAndClearState;
-(void)updateSecurityManager;
-(void)setSetupAuthSession:(long long)arg1 ;
-(long long)setupAuthSession;
-(void)enableUnlockPairing;
-(void)setUnlockAuthSession:(long long)arg1 ;
-(long long)unlockAuthSession;
-(void)sendResetMessage:(unsigned)arg1 ;
-(void)setStashBagSession:(long long)arg1 ;
-(long long)stashBagSession;
-(void)resetStashState;
-(void)logProtoBufSend:(id)arg1 ;
-(void)restartUnlockTimer:(unsigned long long)arg1 ;
-(id)activeDeviceName;
-(void)setSecurityManager:(SDUnlockSecurityManager *)arg1 ;
-(id)activeDeviceDescription;
-(void)devicesDidFailToPair:(id)arg1 ;
-(void)pairingStatusChanged:(id)arg1 ;
-(void)pairingDidBegin:(id)arg1 ;
-(void)deviceDidEnterConfigState:(id)arg1 ;
-(void)disableUnlockPairingForSecManager:(id)arg1 ;
-(BOOL)inConfigureState;
-(void)resetAll;
-(void)setIdsController:(SDUnlockIDSController *)arg1 ;
-(NSObject*<OS_dispatch_source>)unlockTimer;
-(void)setUnlockTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)activeDevice;
-(void)resetState;
-(void)disableUnlockWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)unlockEnabled;
-(id)pairingStorePath;
-(id)pairingID;
@end

