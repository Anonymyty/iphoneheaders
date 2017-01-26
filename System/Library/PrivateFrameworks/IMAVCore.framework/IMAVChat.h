/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, IMHandle, IMAVChatParticipant, NSMutableDictionary, NSNumber, NSDate, NSDictionary, IMTimingCollection, NSObject, NSData, NSError, IMPair, NSTimer, IMAccount, NSArray;

@interface IMAVChat : NSObject <IMSystemMonitorListener> {

	NSString* _GUID;
	NSString* _conferenceID;
	NSMutableArray* _participants;
	IMHandle* _initiator;
	IMAVChatParticipant* _localParticipant;
	NSMutableDictionary* _conferenceStateCache;
	NSNumber* _natType;
	NSMutableDictionary* _extraServerContext;
	NSDate* _dateCreated;
	NSDate* _dateStartedConnecting;
	NSDate* _dateConnected;
	NSDate* _dateEnded;
	NSDate* _dateReceivedRelayInitiate;
	NSDate* _dateReceivedRelayUpdate;
	NSDate* _interruptionBegan;
	NSDictionary* _pingTestResults;
	NSNumber* _frontCameraCaptureTime;
	NSNumber* _backCameraCaptureTime;
	NSNumber* _dataRate;
	NSNumber* _dataUploaded;
	NSNumber* _dataDownloaded;
	IMTimingCollection* _timingCollection;
	unsigned long long _localNetworkConnectionType;
	unsigned long long _remoteNetworkConnectionType;
	long long _pingTestResult;
	long long _networkCheckResult;
	NSDictionary* _callerProperties;
	NSObject*<OS_dispatch_queue> _conferenceQueue;
	NSData* _relayRemotePrimaryIdentifier;
	id _conferenceController;
	unsigned _sessionID;
	NSError* _error;
	unsigned _localState;
	unsigned _lastPostedState;
	IMPair* _pendingPreemptiveRelayInitate;
	NSString* _callStatisticsGUID;
	double _connectionTimeoutTime;
	double _invitationTimeoutTime;
	BOOL _hasGatheredInfo;
	BOOL _hasReceivedFirstFrame;
	BOOL _hasPendingAccept;
	BOOL _hasPendingInit;
	BOOL _isCaller;
	BOOL _isVideo;
	int _connectionType;
	BOOL _needsVideoRestart;
	BOOL _needsAudioRestart;
	BOOL _isVideoInterrupted;
	BOOL _isAudioInterrupted;
	BOOL _startedAudioSession;
	BOOL _connectionStarted;
	BOOL _wantsHoldMusic;
	BOOL _hasAudioInterruption;
	BOOL _relayed;
	BOOL _isCallUpgrade;
	BOOL _terminating;
	BOOL _didRemoteMute;
	BOOL _didRemotePause;
	BOOL _callUpgrade;
	BOOL _airplaneModeEnabled;
	BOOL _metadataFinalized;
	NSTimer* _inviteTimeoutTimer;
	NSDate* _inviteTimeoutTimerStart;
	NSTimer* _firstFrameTimeoutTimer;
	NSTimer* _connectionTimeoutTimer;
	NSTimer* _breakBeforeMakeTimeoutTimer;
	CGSize _portraitAspectRatios;
	CGSize _landscapeAspectRatios;

}

@property (nonatomic,readonly) BOOL _allParticipantsUsingICE; 
@property (assign,setter=setPaused:,nonatomic) BOOL isPaused; 
@property (nonatomic,readonly) BOOL hasReceivedFirstFrame; 
@property (assign,nonatomic) BOOL isSendingVideo; 
@property (nonatomic,readonly) BOOL didRemotePause; 
@property (assign,setter=setMute:,nonatomic) BOOL isMute; 
@property (assign,setter=setRemoteMute:,nonatomic) BOOL isRemoteMute; 
@property (assign,nonatomic) BOOL isSendingAudio; 
@property (nonatomic,readonly) BOOL didRemoteMute; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
@property (nonatomic,readonly) unsigned sessionID;                                                                                 //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * conferenceID;                                                                              //@synthesize conferenceID=_conferenceID - In the implementation block
@property (getter=UID,nonatomic,retain) NSString * GUID;                                                                           //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * initiatorIMHandle;                                                                //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,retain,readonly) IMAccount * account; 
@property (nonatomic,retain,readonly) IMAVChatParticipant * initiatorParticipant; 
@property (nonatomic,retain,readonly) IMAVChatParticipant * localParticipant;                                                      //@synthesize localParticipant=_localParticipant - In the implementation block
@property (nonatomic,retain,readonly) NSArray * participants;                                                                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) unsigned state;                                                                                     //@synthesize localState=_localState - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isStateFinal; 
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,retain,readonly) NSDate * dateCreated;                                                                        //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateConnected;                                                                      //@synthesize dateConnected=_dateConnected - In the implementation block
@property (nonatomic,retain,readonly) NSDate * dateEnded;                                                                          //@synthesize dateEnded=_dateEnded - In the implementation block
@property (nonatomic,readonly) BOOL isCaller;                                                                                      //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,readonly) BOOL isVideo;                                                                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,readonly) BOOL isUsingWifi; 
@property (assign,getter=isRelayed,nonatomic) BOOL relayed;                                                                        //@synthesize relayed=_relayed - In the implementation block
@property (assign,nonatomic) BOOL hasAudioInterruption;                                                                            //@synthesize hasAudioInterruption=_hasAudioInterruption - In the implementation block
@property (retain,readonly) NSDictionary * _extraServerContext;                                                                    //@synthesize extraServerContext=_extraServerContext - In the implementation block
@property (setter=_setCallStatisticsGUID:,nonatomic,retain) NSString * _callStatisticsGUID;                                        //@synthesize callStatisticsGUID=_callStatisticsGUID - In the implementation block
@property (assign,setter=_setConferenceController:,nonatomic) id _conferenceController;                                            //@synthesize conferenceController=_conferenceController - In the implementation block
@property (setter=_setNatType:,nonatomic,retain) NSNumber * _natType;                                                              //@synthesize natType=_natType - In the implementation block
@property (nonatomic,readonly) NSNumber * _remoteNatType; 
@property (nonatomic,readonly) NSNumber * _currentNatType; 
@property (assign,setter=_setConnectionType:,nonatomic) int _connectionType;                                                       //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) long long _bustedCallID; 
@property (nonatomic,readonly) NSNumber * _connectDuration; 
@property (nonatomic,readonly) NSNumber * _callDuration; 
@property (nonatomic,readonly) NSNumber * _relayConnectDuration; 
@property (nonatomic,readonly) BOOL _usesRelay; 
@property (nonatomic,readonly) BOOL _isProxy; 
@property (setter=_setRelayRemotePrimaryIdentifier:,nonatomic,retain) NSData * _relayRemotePrimaryIdentifier;                      //@synthesize relayRemotePrimaryIdentifier=_relayRemotePrimaryIdentifier - In the implementation block
@property (setter=_setInterruptionBegan:,nonatomic,retain) NSDate * _interruptionBegan;                                            //@synthesize interruptionBegan=_interruptionBegan - In the implementation block
@property (setter=_setFrontCameraCaptureTime:,nonatomic,retain) NSNumber * _frontCameraCaptureTime;                                //@synthesize frontCameraCaptureTime=_frontCameraCaptureTime - In the implementation block
@property (setter=_setBackCameraCaptureTime:,nonatomic,retain) NSNumber * _backCameraCaptureTime;                                  //@synthesize backCameraCaptureTime=_backCameraCaptureTime - In the implementation block
@property (setter=setDataRate:,nonatomic,retain) NSNumber * dataRate;                                                              //@synthesize dataRate=_dataRate - In the implementation block
@property (setter=setDataUploaded:,nonatomic,retain) NSNumber * dataUploaded;                                                      //@synthesize dataUploaded=_dataUploaded - In the implementation block
@property (setter=setDataDownloaded:,nonatomic,retain) NSNumber * dataDownloaded;                                                  //@synthesize dataDownloaded=_dataDownloaded - In the implementation block
@property (assign,setter=_setIsVideoInterrupted:,nonatomic) BOOL _isVideoInterrupted;                                              //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,setter=_setIsAudioInterrupted:,nonatomic) BOOL _isAudioInterrupted;                                              //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,setter=_setIsCallUpgrade:,nonatomic) BOOL _isCallUpgrade;                                                        //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,setter=_setStartedAudioSession:,nonatomic) BOOL _startedAudioSession;                                            //@synthesize startedAudioSession=_startedAudioSession - In the implementation block
@property (assign,setter=_setLocalNetworkConnectionType:,nonatomic) unsigned long long _localNetworkConnectionType;                //@synthesize localNetworkConnectionType=_localNetworkConnectionType - In the implementation block
@property (assign,setter=_setRemoteNetworkConnectionType:,nonatomic) unsigned long long _remoteNetworkConnectionType;              //@synthesize remoteNetworkConnectionType=_remoteNetworkConnectionType - In the implementation block
@property (assign,setter=_setNeedsAudioRestart:,nonatomic) BOOL _needsAudioRestart;                                                //@synthesize needsAudioRestart=_needsAudioRestart - In the implementation block
@property (assign,setter=_setNeedsVideoRestart:,nonatomic) BOOL _needsVideoRestart;                                                //@synthesize needsVideoRestart=_needsVideoRestart - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _conferenceQueue;                                                        //@synthesize conferenceQueue=_conferenceQueue - In the implementation block
@property (setter=_setPingTestResults:,nonatomic,retain) NSDictionary * _pingTestResults;                                          //@synthesize pingTestResults=_pingTestResults - In the implementation block
@property (assign,setter=_setPingTestResult:,nonatomic) long long _pingTestResult;                                                 //@synthesize pingTestResult=_pingTestResult - In the implementation block
@property (assign,setter=_setNetworkCheckResult:,nonatomic) long long _networkCheckResult;                                         //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (setter=_setCallerProperties:,nonatomic,retain) NSDictionary * callerProperties;                                         //@synthesize callerProperties=_callerProperties - In the implementation block
@property (assign,setter=_setConnectionStarted:,nonatomic) BOOL _connectionStarted;                                                //@synthesize connectionStarted=_connectionStarted - In the implementation block
@property (nonatomic,retain,readonly) NSArray * _imHandles; 
@property (assign,setter=_setWantsHoldMusic:,nonatomic) BOOL wantsHoldMusic;                                                       //@synthesize wantsHoldMusic=_wantsHoldMusic - In the implementation block
@property (setter=_setInviteTimeoutTimer:,nonatomic,retain) NSTimer * inviteTimeoutTimer;                                          //@synthesize inviteTimeoutTimer=_inviteTimeoutTimer - In the implementation block
@property (setter=_setInviteTimeoutTimerStart:,nonatomic,retain) NSDate * inviteTimeoutTimerStart;                                 //@synthesize inviteTimeoutTimerStart=_inviteTimeoutTimerStart - In the implementation block
@property (setter=_setFirstFrameTimeoutTimer:,nonatomic,retain) NSTimer * firstFrameTimeoutTimer;                                  //@synthesize firstFrameTimeoutTimer=_firstFrameTimeoutTimer - In the implementation block
@property (setter=_setConnectionTimeoutTimer:,nonatomic,retain) NSTimer * connectionTimeoutTimer;                                  //@synthesize connectionTimeoutTimer=_connectionTimeoutTimer - In the implementation block
@property (setter=_setBreakBeforeMakeTimeoutTimer:,nonatomic,retain) NSTimer * breakBeforeMakeTimeoutTimer;                        //@synthesize breakBeforeMakeTimeoutTimer=_breakBeforeMakeTimeoutTimer - In the implementation block
@property (assign,setter=_setPortraitAspectRatios:,nonatomic) CGSize portraitAspectRatios;                                         //@synthesize portraitAspectRatios=_portraitAspectRatios - In the implementation block
@property (assign,setter=_setLandscapeAspectRatios:,nonatomic) CGSize landscapeAspectRatios;                                       //@synthesize landscapeAspectRatios=_landscapeAspectRatios - In the implementation block
@property (assign,setter=_setTerminating:,getter=isTerminating,nonatomic) BOOL terminating;                                        //@synthesize terminating=_terminating - In the implementation block
@property (assign,setter=_setDidRemoteMute:,nonatomic) BOOL didRemoteMute;                                                         //@synthesize didRemoteMute=_didRemoteMute - In the implementation block
@property (assign,setter=_setDidRemotePause:,nonatomic) BOOL didRemotePause;                                                       //@synthesize didRemotePause=_didRemotePause - In the implementation block
@property (assign,setter=_setCallUpgrade:,getter=isCallUpgrade,nonatomic) BOOL callUpgrade;                                        //@synthesize callUpgrade=_callUpgrade - In the implementation block
@property (assign,setter=_setAirplaneModeEnabled:,nonatomic) BOOL airplaneModeEnabled;                                             //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (assign,setter=_setMetadataFinalized:,nonatomic) BOOL metadataFinalized;                                                 //@synthesize metadataFinalized=_metadataFinalized - In the implementation block
+(id)_imHandleFromProxyRepresentation:(id)arg1 ;
+(id)_proxyRepresentationForIMHandle:(id)arg1 ;
+(id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)_avChatWithConferenceID:(id)arg1 ;
+(id)_avChatConnectingFromIMHandle:(id)arg1 ;
+(id)_activeChat;
+(id)_nonFinalChat;
+(id)_connectedChat;
+(id)_avChatArray;
+(id)_incomingInvitations;
+(id)_outgoingInvitations;
+(id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned)arg3 properties:(id)arg4 ;
+(id)_avChatWithGUID:(id)arg1 ;
+(id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ;
+(id)_connectingChats;
+(id)_connectedChats;
+(id)_chatListLock;
+(id)_chatList;
+(id)activeChat;
+(id)chatList;
+(id)chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)connectingChats;
+(id)connectedChats;
+(id)_chatsWithIMAVChatState:(unsigned)arg1 ;
+(id)_chatWithSessionID:(unsigned)arg1 ;
+(id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2 ;
+(id)connectedChat;
+(id)nonFinalChat;
+(id)acceptedChats;
+(id)avChatWithGUID:(id)arg1 ;
+(id)_acceptedChats;
+(id)outgoingInvitations;
+(id)incomingInvitations;
+(double)defaultConnectionTimeoutTime;
+(double)defaultInvitationTimeoutTime;
+(void)setDefaultInvitationTimeoutTime:(double)arg1 ;
+(void)setDefaultConnectionTimeoutTime:(double)arg1 ;
+(int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3 ;
-(void)_submitCallEndedLoggingWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)_submitCallConnectedLogging;
-(void)_submitCallInterruptionBeganLogging;
-(void)_submitCallInterruptionEndedLogging;
-(void)__sendEndCallMetricToAWDWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(void)__sendEndCallMetricToViceroyWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(id)_proxyRepresentation;
-(void)setMetadataFinalized;
-(id)_proxyRepresentationForIMAVChatParticipant:(id)arg1 ;
-(NSArray *)remoteParticipants;
-(void)_peerID:(id)arg1 changedTo:(id)arg2 ;
-(void)_initParticipantsWithIMHandles:(id)arg1 ;
-(BOOL)_participantsCheckOut;
-(IMAVChatParticipant *)initiatorParticipant;
-(void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_participantMatchingVCPartyID:(id)arg1 ;
-(void)_updateIMHandleInBuddyList:(id)arg1 ;
-(BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned)arg2 inCount:(unsigned)arg3 ;
-(BOOL)_allParticipantsUsingICE;
-(BOOL)isActive;
-(void)_airplaneModeChanged:(id)arg1 ;
-(void)_entitlementsChanged:(id)arg1 ;
-(void)_postStateToDelegateIfNecessary;
-(void)_setActiveConference;
-(void)participant:(id)arg1 changedFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(BOOL)isStateFinal;
-(void)_resumeAudioState;
-(void)_resumeVideoState;
-(void)_saveVideoRestartState;
-(void)_saveAudioRestartState;
-(void)systemApplicationWillEnterForeground;
-(void)systemWillShutdown;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)notificationCenterWillAppear;
-(void)notificationCenterDidDisappear;
-(void)systemDidFastUserSwitchOut;
-(void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 ;
-(void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isSendingVideo;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(BOOL)hasReceivedFirstFrame;
-(void)togglePaused;
-(BOOL)isPaused;
-(BOOL)isSendingAudio;
-(void)setIsSendingAudio:(BOOL)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(BOOL)isMute;
-(void)toggleMute;
-(void)setRemoteMute:(BOOL)arg1 ;
-(BOOL)isRemoteMute;
-(void)_vccInitDidFinish:(id)arg1 ;
-(void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2 ;
-(void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2 ;
-(void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2 ;
-(void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(BOOL)arg2 ;
-(void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2 ;
-(void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2 ;
-(void)_clearConnectionTimeoutTimer;
-(void)_clearFirstFrameTimeoutTimer;
-(void)_clearInvitationTimeoutTimer;
-(void)_clearBreakBeforeMakeTimer;
-(void)_reduceInvitationTimeoutTime;
-(void)_setBreakBeforeMakeTimer;
-(void)_setInvitationTimeoutTimer;
-(void)_setConnectionTimeoutTimer;
-(void)_connectionTimeout:(id)arg1 ;
-(void)_invitationTimeout:(id)arg1 ;
-(void)_firstFrameTimeout:(id)arg1 ;
-(void)_breakBeforeMakeTimer:(id)arg1 ;
-(void)_setFirstFrameTimeoutTimer;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(double)invitationTimeoutTime;
-(double)connectionTimeoutTime;
-(CGSize)localAspectRatioForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(BOOL)stopPreview;
-(void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned)arg2 cameraType:(unsigned)arg3 ;
-(BOOL)startPreviewWithError:(id*)arg1 ;
-(void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned)arg6 orientation:(unsigned)arg7 aspect:(CGSize)arg8 ;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(unsigned)cameraOrientation;
-(void)setCameraType:(unsigned)arg1 ;
-(unsigned)cameraType;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 ;
-(void)setRemoteVideoPresentationState:(unsigned)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned)state;
-(BOOL)isVideo;
-(unsigned)sessionID;
-(void)_applicationWillTerminate:(id)arg1 ;
-(BOOL)wantsHoldMusic;
-(IMHandle *)otherIMHandle;
-(NSNumber *)dataUploaded;
-(NSNumber *)dataDownloaded;
-(void)resetWantsHoldMusic;
-(void)setDataRate:(NSNumber *)arg1 ;
-(unsigned)endedReason;
-(NSNumber *)dataRate;
-(BOOL)isCallUpgrade;
-(void)_setGUID:(id)arg1 ;
-(void)acceptInvitation;
-(void)declineInvitation;
-(BOOL)isTerminating;
-(id)participantMatchingIMHandle:(id)arg1 ;
-(IMAVChatParticipant *)localParticipant;
-(id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3 ;
-(void)_setConferenceID:(id)arg1 ;
-(BOOL)_isVideoUpgradeTo:(id)arg1 ;
-(void)_setIsCallUpgrade:(BOOL)arg1 ;
-(void)beginChat;
-(void)cancelInvitation;
-(void)endChat;
-(void)declineInvitationWithResponse:(unsigned)arg1 ;
-(void)_responseToVCInvite:(id)arg1 ;
-(void)_cancelInvitationWithReason:(unsigned)arg1 error:(int)arg2 ;
-(void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 ;
-(IMHandle *)initiatorIMHandle;
-(id)_timings;
-(id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4 ;
-(void)acceptInvitationWithHoldMusic;
-(void)acceptInvitationWithSource:(id)arg1 ;
-(void)endChatWithReason:(unsigned)arg1 ;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(void)setRelayed:(BOOL)arg1 ;
-(void)_handleAVError:(id)arg1 ;
-(id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned)arg3 isRelayed:(BOOL)arg4 GUID:(id)arg5 video:(BOOL)arg6 extraProperties:(id)arg7 ;
-(BOOL)_isCallUpgrade;
-(void)_setCreationDate;
-(id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6 ;
-(void)_setCallerProperties:(id)arg1 ;
-(id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 ;
-(id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4 ;
-(void)_endChatWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(BOOL)_isCallUpgradeTo:(id)arg1 ;
-(void)_breakCallsIfNecessary:(BOOL)arg1 ;
-(void)_setWantsHoldMusic:(BOOL)arg1 ;
-(void)endChatWithReason:(unsigned)arg1 error:(int)arg2 ;
-(int)endedError;
-(BOOL)_processVCResponseDict:(id)arg1 ;
-(void)__responseToVCInvite:(id)arg1 ;
-(void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned)arg2 userInfo:(id)arg3 handled:(BOOL)arg4 ;
-(NSNumber *)_natType;
-(NSDate *)dateConnected;
-(NSDate *)dateEnded;
-(int)_connectionType;
-(unsigned long long)_localNetworkConnectionType;
-(void)_setDateConnected;
-(id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)endChatWithError:(int)arg1 ;
-(id)inviteesInfo;
-(void)invite:(id)arg1 ;
-(void)_setStateDisconnected;
-(id)participantWithAVConferenceCallID:(long long)arg1 ;
-(id)participantWithID:(id)arg1 ;
-(id)vcPartyIDForIMHandle:(id)arg1 ;
-(void)_setHasAudioInterruption:(BOOL)arg1 ;
-(BOOL)_isProxy;
-(long long)_bustedCallID;
-(BOOL)isConferenceSilent;
-(NSNumber *)_remoteNatType;
-(NSNumber *)_currentNatType;
-(NSNumber *)_connectDuration;
-(NSNumber *)_callDuration;
-(NSNumber *)_relayConnectDuration;
-(BOOL)_usesRelay;
-(BOOL)isUsingWifi;
-(NSArray *)_imHandles;
-(void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3 ;
-(void)_noteFirstFrame;
-(void)_cacheBool:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)_hasCachedBoolForKey:(id)arg1 ;
-(BOOL)_cachedBoolForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_conferenceQueue;
-(void)set_conferenceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setConnectionType:(int)arg1 ;
-(NSString *)_callStatisticsGUID;
-(void)_setCallStatisticsGUID:(id)arg1 ;
-(BOOL)_startedAudioSession;
-(void)_setStartedAudioSession:(BOOL)arg1 ;
-(NSDictionary *)callerProperties;
-(void)_setNatType:(id)arg1 ;
-(void)_setLocalNetworkConnectionType:(unsigned long long)arg1 ;
-(unsigned long long)_remoteNetworkConnectionType;
-(void)_setRemoteNetworkConnectionType:(unsigned long long)arg1 ;
-(BOOL)_needsAudioRestart;
-(void)_setNeedsAudioRestart:(BOOL)arg1 ;
-(BOOL)_needsVideoRestart;
-(void)_setNeedsVideoRestart:(BOOL)arg1 ;
-(NSDate *)_interruptionBegan;
-(void)_setInterruptionBegan:(id)arg1 ;
-(NSNumber *)_frontCameraCaptureTime;
-(void)_setFrontCameraCaptureTime:(id)arg1 ;
-(NSNumber *)_backCameraCaptureTime;
-(void)_setBackCameraCaptureTime:(id)arg1 ;
-(void)setDataUploaded:(NSNumber *)arg1 ;
-(void)setDataDownloaded:(NSNumber *)arg1 ;
-(BOOL)_isVideoInterrupted;
-(void)_setIsVideoInterrupted:(BOOL)arg1 ;
-(BOOL)_isAudioInterrupted;
-(void)_setIsAudioInterrupted:(BOOL)arg1 ;
-(BOOL)_connectionStarted;
-(void)_setConnectionStarted:(BOOL)arg1 ;
-(NSData *)_relayRemotePrimaryIdentifier;
-(void)_setRelayRemotePrimaryIdentifier:(id)arg1 ;
-(BOOL)hasAudioInterruption;
-(BOOL)isRelayed;
-(id)_conferenceController;
-(void)_setConferenceController:(id)arg1 ;
-(NSDictionary *)_extraServerContext;
-(NSDictionary *)_pingTestResults;
-(void)_setPingTestResults:(id)arg1 ;
-(long long)_pingTestResult;
-(void)_setPingTestResult:(long long)arg1 ;
-(long long)_networkCheckResult;
-(void)_setNetworkCheckResult:(long long)arg1 ;
-(NSTimer *)inviteTimeoutTimer;
-(void)_setInviteTimeoutTimer:(id)arg1 ;
-(NSDate *)inviteTimeoutTimerStart;
-(void)_setInviteTimeoutTimerStart:(id)arg1 ;
-(NSTimer *)firstFrameTimeoutTimer;
-(void)_setFirstFrameTimeoutTimer:(id)arg1 ;
-(NSTimer *)connectionTimeoutTimer;
-(void)_setConnectionTimeoutTimer:(id)arg1 ;
-(NSTimer *)breakBeforeMakeTimeoutTimer;
-(void)_setBreakBeforeMakeTimeoutTimer:(id)arg1 ;
-(CGSize)portraitAspectRatios;
-(void)_setPortraitAspectRatios:(CGSize)arg1 ;
-(CGSize)landscapeAspectRatios;
-(void)_setLandscapeAspectRatios:(CGSize)arg1 ;
-(void)_setTerminating:(BOOL)arg1 ;
-(BOOL)didRemoteMute;
-(void)_setDidRemoteMute:(BOOL)arg1 ;
-(BOOL)didRemotePause;
-(void)_setDidRemotePause:(BOOL)arg1 ;
-(void)_setCallUpgrade:(BOOL)arg1 ;
-(BOOL)airplaneModeEnabled;
-(void)_setAirplaneModeEnabled:(BOOL)arg1 ;
-(BOOL)metadataFinalized;
-(void)_setMetadataFinalized:(BOOL)arg1 ;
-(IMAccount *)account;
-(NSDate *)dateCreated;
-(NSString *)conferenceID;
-(BOOL)isCaller;
-(void)_clearCache;
-(NSArray *)participants;
-(NSString *)GUID;
@end
