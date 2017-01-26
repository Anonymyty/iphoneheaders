/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TUCallModelState, NSArray, TUCall;

@interface TUCallCenter : NSObject {

	TUCallModelState* _callModelState;

}

@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,retain,readonly) TUCall * incomingCall; 
@property (nonatomic,retain,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,retain,readonly) TUCall * activeVideoCall; 
@property (nonatomic,retain,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,retain,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (nonatomic,retain) TUCallModelState * callModelState;                                //@synthesize callModelState=_callModelState - In the implementation block
+(id)sharedInstance;
+(BOOL)isInCallServiceProcess;
+(void*)sharedAddressBook;
+(BOOL)emergencyCallBackModeIsActive;
+(id)_sharedInstanceWithDaemonDelegate:(id)arg1 ;
-(void)dealloc;
-(NSArray *)currentCalls;
-(BOOL)isMergeable;
-(int)ambiguityState;
-(BOOL)isTakingCallsPrivateAllowed;
-(BOOL)isHardPauseAvailable;
-(BOOL)isEndAndAnswerAllowed;
-(BOOL)isSendToVoicemailAllowed;
-(id)displayedCallFromCalls:(id)arg1 ;
-(TUCall *)incomingCall;
-(void)handleCallModelStateChanged:(id)arg1 ;
-(BOOL)isSwappable;
-(BOOL)isHoldAllowed;
-(BOOL)isAddCallAllowed;
-(BOOL)isHoldAndAnswerAllowed;
-(unsigned long long)currentCallCount;
-(unsigned long long)currentVideoCallCount;
-(id)callWithCallUUID:(id)arg1 ;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(NSArray *)conferenceParticipantCalls;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(id)_allCalls;
-(void)_handleCallControlFailure:(id)arg1 ;
-(TUCallModelState *)callModelState;
-(id)dialWithRequest:(id)arg1 ;
-(void)swapCalls;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)pullRelayingCallsFromClient;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(void)pushHostedCallsToPairedClientDevice;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)enteredBackgroundForAllCalls;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pullThumperCallFromClientUsingInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TUCall *)activeVideoCall;
-(TUCall *)incomingVideoCall;
-(id)displayedCall;
-(id)initWithDaemonDelegate:(id)arg1 ;
-(void)_callStatusChangedInternal:(id)arg1 ;
-(void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(/*^block*/id)arg2 forCallsPassingTest:(/*^block*/id)arg3 ;
-(id)callsPassingTest:(/*^block*/id)arg1 returningNilForEmpty:(BOOL)arg2 ;
-(void)enumerateCallsInvokingBlock:(/*^block*/id)arg1 forCallsPassingTest:(/*^block*/id)arg2 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(id)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)currentVideoCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(id)callWithStatus:(int)arg1 ;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)currentCallGroups;
-(id)_dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canInitiateCalls;
-(BOOL)canInitiateCallForService:(int)arg1 ;
-(BOOL)canInitiateVoicemailCall;
-(BOOL)canUseThumperOverRelayForIncomingAndOutgoingCalls;
-(void)disconnectNonRelayingCalls;
-(id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 ;
-(id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 uniqueProxyIdentifier:(id)arg5 ;
-(id)_dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 dialType:(long long)arg5 uniqueProxyIdentifier:(id)arg6 ;
-(id)dialEmergency:(id)arg1 sourceIdentifier:(id)arg2 ;
-(id)dialVoicemailWithSourceIdentifier:(id)arg1 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(BOOL)arg3 ;
-(void)disconnectCall:(id)arg1 withReason:(int)arg2 ;
-(void)answerCall:(id)arg1 ;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(void)endActiveAndAnswerCall:(id)arg1 ;
-(void)endHeldAndAnswerCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(NSArray *)displayedCalls;
-(NSArray *)callsHostedElsewhere;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)incomingCalls;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(id)callsWithStatus:(int)arg1 ;
-(TUCall *)currentVideoCall;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)frontmostCall;
-(id)frontmostAudioOrVideoCall;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)dial:(id)arg1 service:(int)arg2 ;
-(id)dialEmergency:(id)arg1 ;
-(id)dialVoicemail;
-(void)sendFieldModeDigits:(id)arg1 ;
-(void)answerCallWithHoldMusic:(id)arg1 ;
-(void)holdActiveAndAnswerCall:(id)arg1 ;
-(void)endActiveOrHeldAndAnswerCall:(id)arg1 ;
-(void)resumeCall:(id)arg1 ;
-(void)pushRelayingCallsToHost;
-(void)disconnectRelayingCalls;
-(void)enteredForegroundForCall:(id)arg1 ;
-(BOOL)canMergeCalls;
-(void)endEmergencyCallBackMode;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
-(BOOL)isAmbiguous;
-(unsigned long long)currentAudioAndVideoCallCount;
@end
