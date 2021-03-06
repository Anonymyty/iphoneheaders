/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/CLIntersiloService.h>
#import <locationd/PSYSyncCoordinatorDelegate.h>
#import <locationd/CLAuthSyncManagerProtocol.h>
#import <locationd/SYServiceDelegate.h>
#import <locationd/SYSessionDelegate.h>

@protocol CLClientManagerProtocol;
@class NSString, SYService, NSMutableArray, NSMutableDictionary, PSYServiceSyncSession, PSYSyncCoordinator;

@interface CLAuthSyncManager : CLIntersiloService <PSYSyncCoordinatorDelegate, CLAuthSyncManagerProtocol, SYServiceDelegate, SYSessionDelegate> {

	BOOL _shouldConfirmHandlingPairingNotification;
	BOOL _shouldSendMoreDataInCurrentSyncSession;
	BOOL _resetRecoveryMode;
	BOOL _isThereAWatch;
	BOOL _isQuickSwitchInProgress;
	id<CLClientManagerProtocol> _clientManager;
	NSString* _fullPathForSyncState;
	SYService* _syncService;
	NSMutableArray* _fullSyncObjectsInCompanionQueue;
	NSMutableArray* _fullSyncObjectsInGizmoQueue;
	NSMutableArray* _deltaSyncObjectsInCompanionQueue;
	NSMutableArray* _deltaSyncObjectsInGizmoQueue;
	NSMutableArray* _notificationsInCompanionQueue;
	NSMutableArray* _notificationsInGizmoQueue;
	NSMutableDictionary* _authSyncStoreState;
	long long _numberOfConsecutiveSyncSessionRetries;
	PSYServiceSyncSession* _activeWatchSyncSession;
	PSYSyncCoordinator* _syncCoordinator;
	unsigned long long _syncRestriction;

}

@property (nonatomic,retain) id<CLClientManagerProtocol> clientManager;                      //@synthesize clientManager=_clientManager - In the implementation block
@property (nonatomic,retain) NSString * fullPathForSyncState;                                //@synthesize fullPathForSyncState=_fullPathForSyncState - In the implementation block
@property (nonatomic,retain) SYService * syncService;                                        //@synthesize syncService=_syncService - In the implementation block
@property (nonatomic,retain) NSMutableArray * fullSyncObjectsInCompanionQueue;               //@synthesize fullSyncObjectsInCompanionQueue=_fullSyncObjectsInCompanionQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * fullSyncObjectsInGizmoQueue;                   //@synthesize fullSyncObjectsInGizmoQueue=_fullSyncObjectsInGizmoQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * deltaSyncObjectsInCompanionQueue;              //@synthesize deltaSyncObjectsInCompanionQueue=_deltaSyncObjectsInCompanionQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * deltaSyncObjectsInGizmoQueue;                  //@synthesize deltaSyncObjectsInGizmoQueue=_deltaSyncObjectsInGizmoQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationsInCompanionQueue;                 //@synthesize notificationsInCompanionQueue=_notificationsInCompanionQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationsInGizmoQueue;                     //@synthesize notificationsInGizmoQueue=_notificationsInGizmoQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldConfirmHandlingPairingNotification;                  //@synthesize shouldConfirmHandlingPairingNotification=_shouldConfirmHandlingPairingNotification - In the implementation block
@property (assign,nonatomic) BOOL shouldSendMoreDataInCurrentSyncSession;                    //@synthesize shouldSendMoreDataInCurrentSyncSession=_shouldSendMoreDataInCurrentSyncSession - In the implementation block
@property (assign,nonatomic) BOOL resetRecoveryMode;                                         //@synthesize resetRecoveryMode=_resetRecoveryMode - In the implementation block
@property (assign,nonatomic) BOOL isThereAWatch;                                             //@synthesize isThereAWatch=_isThereAWatch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authSyncStoreState;                       //@synthesize authSyncStoreState=_authSyncStoreState - In the implementation block
@property (assign,nonatomic) BOOL isQuickSwitchInProgress;                                   //@synthesize isQuickSwitchInProgress=_isQuickSwitchInProgress - In the implementation block
@property (assign,nonatomic) long long numberOfConsecutiveSyncSessionRetries;                //@synthesize numberOfConsecutiveSyncSessionRetries=_numberOfConsecutiveSyncSessionRetries - In the implementation block
@property (nonatomic,retain) PSYServiceSyncSession * activeWatchSyncSession;                 //@synthesize activeWatchSyncSession=_activeWatchSyncSession - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * syncCoordinator;                           //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (assign,nonatomic) unsigned long long syncRestriction;                             //@synthesize syncRestriction=_syncRestriction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(BOOL)isSupported;
-(void)sendNotification:(int)arg1 withGlobalAuthStatus:(int)arg2 ;
-(void)watchNeedsFullSync;
-(void)sendGlobalAuthStatus:(int)arg1 ;
-(void)setClientManager:(id<CLClientManagerProtocol>)arg1 ;
-(id<CLClientManagerProtocol>)clientManager;
-(void)setSyncService:(SYService *)arg1 ;
-(SYService *)syncService;
-(void)setFullSyncObjectsInCompanionQueue:(NSMutableArray *)arg1 ;
-(void)setFullSyncObjectsInGizmoQueue:(NSMutableArray *)arg1 ;
-(void)setDeltaSyncObjectsInCompanionQueue:(NSMutableArray *)arg1 ;
-(void)setDeltaSyncObjectsInGizmoQueue:(NSMutableArray *)arg1 ;
-(void)setNotificationsInCompanionQueue:(NSMutableArray *)arg1 ;
-(void)setNotificationsInGizmoQueue:(NSMutableArray *)arg1 ;
-(void)setShouldSendMoreDataInCurrentSyncSession:(BOOL)arg1 ;
-(void)setShouldConfirmHandlingPairingNotification:(BOOL)arg1 ;
-(void)setIsThereAWatch:(BOOL)arg1 ;
-(void)setIsQuickSwitchInProgress:(BOOL)arg1 ;
-(void)setAuthSyncStoreState:(NSMutableDictionary *)arg1 ;
-(void)setNumberOfConsecutiveSyncSessionRetries:(long long)arg1 ;
-(void)setSyncRestriction:(unsigned long long)arg1 ;
-(void)checkForWatches;
-(BOOL)isThereAWatch;
-(NSString *)fullPathForSyncState;
-(NSMutableDictionary *)authSyncStoreState;
-(void)updateActivePairedWatchInfo;
-(void)handleZeroActiveWatch;
-(void)createSyncStoreState;
-(void)updateSyncStoreState;
-(void)checkAllNotificationStatuses;
-(void)checkResetNotificationStatus;
-(void)setResetRecoveryMode:(BOOL)arg1 ;
-(void)setFullPathForSyncState:(NSString *)arg1 ;
-(void)checkSyncStoreState;
-(BOOL)resetRecoveryMode;
-(NSMutableArray *)fullSyncObjectsInCompanionQueue;
-(NSMutableArray *)fullSyncObjectsInGizmoQueue;
-(NSMutableArray *)deltaSyncObjectsInCompanionQueue;
-(NSMutableArray *)deltaSyncObjectsInGizmoQueue;
-(NSMutableArray *)notificationsInCompanionQueue;
-(NSMutableArray *)notificationsInGizmoQueue;
-(BOOL)shouldConfirmHandlingPairingNotification;
-(PSYServiceSyncSession *)activeWatchSyncSession;
-(BOOL)isQuickSwitchInProgress;
-(long long)numberOfConsecutiveSyncSessionRetries;
-(void)updateSyncStoreStateForVersionedKey:(id)arg1 ;
-(void)handlePairing;
-(void)handleUnpairing;
-(BOOL)shouldSendMoreDataInCurrentSyncSession;
-(void)prepareToDoFullSync;
-(void)handleError:(id)arg1 inSyncSession:(id)arg2 ;
-(void)fullSyncDidComplete;
-(void)deltaSyncDidComplete;
-(void)setActiveWatchSyncSession:(PSYServiceSyncSession *)arg1 ;
-(void)handleQuickSwitch;
-(void)applyAddMessage:(id)arg1 ;
-(void)applyUpdateMessage:(id)arg1 ;
-(void)applyDeleteMessage:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)beginService;
-(void)endService;
-(id)initInSilo:(id)arg1 ;
-(void)setSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3 ;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(unsigned long long)syncRestriction;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(void)deleteObject:(id)arg1 ;
@end

