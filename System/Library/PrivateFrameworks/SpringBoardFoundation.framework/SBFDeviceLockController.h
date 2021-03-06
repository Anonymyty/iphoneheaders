/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFDeviceLockModel;
#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class PCPersistentTimer, SBFPasscodeLockAssertionManager, SBFPasscodeLockDisableAssertion, NSString;

@interface SBFDeviceLockController : NSObject {

	int _lockState;
	BOOL _isBlockedForThermalCondition;
	double _lastLockDate;
	id<SBFDeviceLockModel> _lockoutModel;
	PCPersistentTimer* _deviceLockUnblockTimer;
	BOOL _cachedPasscodeLockedOrBlocked;
	BOOL _hasBeenUnlockedOnceSinceBoot;
	SBFPasscodeLockAssertionManager* _assertionManager;
	SBFPasscodeLockDisableAssertion* _transientPasscodeCheckingAssertion;
	BOOL _okToSendNotifications;
	NSString* _lastIncorrectPasscodeAttempt;
	BOOL _shouldFetchPasscodeLockState;
	BOOL _lastPasscodeLockStateWasLocked;
	CFRunLoopObserverRef _runLoopObserver;
	BOOL _deviceHasPasscodeSet;

}
+(id)_selectDeviceLockModel;
+(int)_extendedKeybagState;
+(BOOL)_shouldTreatExtendedKeybagStateAsLocked:(int)arg1 ;
+(BOOL)_isInBioUnlockState;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)synchronize;
-(BOOL)isPasscodeLockedOrBlocked;
-(void)_clearBlockedState;
-(void)deviceLockModelRequestsDeviceWipe:(id)arg1 ;
-(void)deviceLockStateMayHaveChangedForModel:(id)arg1 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)_scheduleUnblockTimer;
-(void)_updateDeviceHasPasscodeSetForLockState:(int)arg1 ;
-(void)_updateDeviceLockedStateLockingImmediatelyIfNecessary:(BOOL)arg1 ;
-(void)_notePasscodeLockedOrBlockedStateMayHaveChanged:(BOOL)arg1 ;
-(void)_clearUnblockTimer;
-(BOOL)isBlockedForThermalCondition;
-(BOOL)_permanentlyBlocked;
-(BOOL)_temporarilyBlocked;
-(void)_noteBlockedReasonsMayHaveChanged;
-(void)_unblockTimerFired;
-(void)_setupRunLoopObserverIfNecessary;
-(BOOL)isPasscodeLocked;
-(void)_enablePasscodeLockImmediately:(BOOL)arg1 ;
-(BOOL)deviceHasPasscodeSet;
-(BOOL)_unlockWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(void)_setLockState:(int)arg1 ;
-(void)_invalidateCachedPasscodeLockState;
-(BOOL)_shouldVetoPasscodeLock;
-(void)_lockStateChangedFrom:(int)arg1 to:(int)arg2 ;
-(BOOL)_shouldLockDeviceNow;
-(BOOL)attemptDeviceUnlockWithPassword:(id)arg1 appRequested:(BOOL)arg2 ;
-(void)_wipeDevice;
-(BOOL)isPermanentlyBlocked:(double*)arg1 ;
-(void)setBlockedForThermalCondition:(BOOL)arg1 ;
-(id)lastLockDate;
-(BOOL)isPasscodeLockedCached;
-(BOOL)deviceHasBeenPasscodeUnlockedOnceSinceBoot;
-(void)enablePasscodeLockIfNecessary;
-(void)enablePasscodeLockImmediatelyIfNecessary;
-(void)enablePasscodeLockImmediately;
-(void)_cachePassword:(id)arg1 ;
-(void)_uncachePasscodeIfNecessary;
-(void)_keybagLockStateChangedTo:(int)arg1 ;
-(BOOL)_shouldSuppressLockOnInit;
-(void)_notifyOfFirstUnlock;
-(void)setupUnblockTimerIfNeeded;
-(void)_addDeviceLockDisableAssertion:(id)arg1 ;
-(void)_removeDeviceLockDisableAssertion:(id)arg1 ;
-(BOOL)_isAssertionValid:(id)arg1 ;
-(BOOL)isBlocked;
@end

