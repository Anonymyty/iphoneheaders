/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/assertiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKProcessAssertionDelegate;
@class NSString, NSLock;

@interface BKProcessAssertion : NSObject {

	id<BKProcessAssertionDelegate> _delegate;
	unsigned _reason;
	NSString* _identifier;
	NSString* _name;
	NSLock* _lock;
	int _ownerPID;
	unsigned _savedFlags;
	unsigned _preventSuspend : 1;
	unsigned _preventThrottleDownCPU : 1;
	unsigned _preventThrottleDownUI : 1;
	unsigned _preventIdleSleep : 1;
	unsigned _preventingIdleSleep : 1;
	unsigned _allowIdleSleepOverrideEnabled : 1;
	unsigned _wantsForegroundResourcePriority : 1;
	unsigned _preventSuspendOnSleep : 1;

}

@property (assign,nonatomic) id<BKProcessAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned reason;                                              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (readonly) double permittedBackgroundDuration; 
@property (getter=isTimeLimited,readonly) BOOL timeLimited; 
@property (readonly) BOOL hasFixedStartTime; 
@property (readonly) int ownerPID;                                                 //@synthesize ownerPID=_ownerPID - In the implementation block
@property (assign) BOOL preventSuspend; 
@property (assign) BOOL preventThrottleDownCPU; 
@property (assign) BOOL preventThrottleDownUI; 
@property (assign) BOOL preventIdleSleep; 
@property (assign) BOOL allowIdleSleepOverrideEnabled; 
@property (assign) BOOL wantsForegroundResourcePriority; 
@property (assign) BOOL preventSuspendOnSleep; 
+(BOOL)isRateLimitedReason:(unsigned)arg1 ;
+(double)GetTaskCompletionMustTerminateDuration;
+(BOOL)isEligibleForLoweredJetsamPriority:(unsigned)arg1 ;
+(BOOL)isValidProcessAssertionReason:(unsigned)arg1 ;
-(int)ownerPID;
-(void)setAllowIdleSleepOverrideEnabled:(BOOL)arg1 ;
-(BOOL)shouldReallyPreventIdleSleep;
-(BOOL)isTimeLimited;
-(double)permittedBackgroundDuration;
-(BOOL)hasFixedStartTime;
-(id)initWithIdentifier:(id)arg1 ownerPID:(int)arg2 reason:(unsigned)arg3 name:(id)arg4 flags:(unsigned)arg5 ;
-(void)setPreventIdleSleep:(BOOL)arg1 ;
-(BOOL)_lock_shouldActuallyPreventIdleSleep;
-(void)setPreventSuspend:(BOOL)arg1 ;
-(void)setPreventThrottleDownUI:(BOOL)arg1 ;
-(void)setPreventThrottleDownCPU:(BOOL)arg1 ;
-(void)setWantsForegroundResourcePriority:(BOOL)arg1 ;
-(void)setPreventSuspendOnSleep:(BOOL)arg1 ;
-(unsigned)_savedFlags;
-(BOOL)_hasSavedFlags;
-(void)_setSavedFlags:(unsigned)arg1 ;
-(id)initWithIdentifier:(id)arg1 reason:(unsigned)arg2 name:(id)arg3 ;
-(BOOL)preventSuspend;
-(BOOL)preventThrottleDownCPU;
-(BOOL)preventThrottleDownUI;
-(BOOL)allowIdleSleepOverrideEnabled;
-(BOOL)preventIdleSleep;
-(BOOL)wantsForegroundResourcePriority;
-(BOOL)wantsForegroundResourcePriority_withoutLocking;
-(BOOL)preventSuspendOnSleep;
-(void)saveFlagsAndApplyNewFlags:(unsigned)arg1 ;
-(void)restoreSavedFlags;
-(unsigned)assertionState;
-(void)setDelegate:(id<BKProcessAssertionDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<BKProcessAssertionDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isValid;
-(unsigned)reason;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

