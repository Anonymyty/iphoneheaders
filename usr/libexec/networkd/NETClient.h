/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/networkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <networkd/networkd-Structs.h>
#import <networkd/NETWaldoClient.h>
#import <networkd/NETLedBellyTap.h>

@protocol OS_xpc_object, OS_dispatch_source;
@class NSObject, NSUUID, NSString, NSMutableSet, NETWaldo;

@interface NETClient : NSObject <NETWaldoClient, NETLedBellyTap> {

	BOOL _watchingFallback;
	BOOL _suspended;
	unsigned long long _fallbackConnectionCount;
	BOOL _hasPowerNapEntitlement;
	BOOL _cellularBlocked;
	BOOL _sleepAsserting;
	BOOL _waldoClient;
	BOOL _powerNapScheduled;
	int _pid;
	unsigned _auditPort;
	unsigned _bootstrap;
	unsigned _powerAssertion;
	unsigned _darkWakePowerAssertion;
	int _ccpTapFd;
	int _pendingFallbackActivityNotification;
	int _pendingPowerNapSchedule;
	NSObject*<OS_xpc_object> _xname;
	NSUUID* _uuid;
	NSString* _bundle;
	NSObject*<OS_xpc_object> _connection;
	NSMutableSet* _endpoints;
	NSMutableSet* _sleepAssertEndpoints;
	NSMutableSet* _darkWakeAssertEndpoints;
	unsigned long long _lastRequestTime;
	NSObject*<OS_dispatch_source> _idleTimer;
	unsigned long long _transactionCount;
	NETWaldo* _waldo;
	NSMutableSet* _waldoWaiting;
	SCD_Struct_NE2 _auditToken;

}

@property (assign) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) const char* name; 
@property (retain) NSObject*<OS_xpc_object> xname;                          //@synthesize xname=_xname - In the implementation block
@property (retain) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * bundle;                                       //@synthesize bundle=_bundle - In the implementation block
@property (assign) BOOL watchingFallback; 
@property (assign) BOOL hasPowerNapEntitlement;                             //@synthesize hasPowerNapEntitlement=_hasPowerNapEntitlement - In the implementation block
@property (assign) BOOL cellularBlocked;                                    //@synthesize cellularBlocked=_cellularBlocked - In the implementation block
@property (assign) BOOL suspended; 
@property (assign) unsigned long long fallbackConnectionCount; 
@property (retain) NSObject*<OS_xpc_object> connection;                     //@synthesize connection=_connection - In the implementation block
@property (retain) NSMutableSet * endpoints;                                //@synthesize endpoints=_endpoints - In the implementation block
@property (retain) NSMutableSet * sleepAssertEndpoints;                     //@synthesize sleepAssertEndpoints=_sleepAssertEndpoints - In the implementation block
@property (retain) NSMutableSet * darkWakeAssertEndpoints;                  //@synthesize darkWakeAssertEndpoints=_darkWakeAssertEndpoints - In the implementation block
@property (assign) BOOL sleepAsserting;                                     //@synthesize sleepAsserting=_sleepAsserting - In the implementation block
@property (assign) BOOL waldoClient;                                        //@synthesize waldoClient=_waldoClient - In the implementation block
@property (assign) SCD_Struct_NE2 auditToken;                               //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) unsigned auditPort;                                      //@synthesize auditPort=_auditPort - In the implementation block
@property (assign) unsigned bootstrap;                                      //@synthesize bootstrap=_bootstrap - In the implementation block
@property (assign) unsigned long long lastRequestTime;                      //@synthesize lastRequestTime=_lastRequestTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> idleTimer;                 //@synthesize idleTimer=_idleTimer - In the implementation block
@property (assign) unsigned long long transactionCount;                     //@synthesize transactionCount=_transactionCount - In the implementation block
@property (assign) unsigned powerAssertion;                                 //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (assign) unsigned darkWakePowerAssertion;                         //@synthesize darkWakePowerAssertion=_darkWakePowerAssertion - In the implementation block
@property (retain) NETWaldo * waldo;                                        //@synthesize waldo=_waldo - In the implementation block
@property (retain) NSMutableSet * waldoWaiting;                             //@synthesize waldoWaiting=_waldoWaiting - In the implementation block
@property (assign) int ccpTapFd;                                            //@synthesize ccpTapFd=_ccpTapFd - In the implementation block
@property (assign) int pendingFallbackActivityNotification;                 //@synthesize pendingFallbackActivityNotification=_pendingFallbackActivityNotification - In the implementation block
@property (assign) int pendingPowerNapSchedule;                             //@synthesize pendingPowerNapSchedule=_pendingPowerNapSchedule - In the implementation block
@property (assign) BOOL powerNapScheduled;                                  //@synthesize powerNapScheduled=_powerNapScheduled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getClientDump;
+(void)handleNew:(id)arg1 ;
+(int)evaluateTrustForCertificate:(id)arg1 subjectName:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)copyBundleForXPCConnection:(id)arg1 PID:(int)arg2 ;
+(void)forEach:(/*^block*/id)arg1 ;
+(id)createSecCertificateArrayFromXPCCertificateChain:(id)arg1 ;
+(id)getTrustEvaluationQueue;
+(id)copyPublicKeyBitsFromEvaluatedSecTrust:(SecTrustRef)arg1 ;
+(id)userEventAgentClient;
+(id)clientForPID:(int)arg1 ;
-(void)addEndpoint:(id)arg1 ;
-(void)didReceiveWaldo:(id)arg1 ;
-(unsigned)auditPort;
-(void)setAuditPort:(unsigned)arg1 ;
-(unsigned)darkWakePowerAssertion;
-(void)setDarkWakePowerAssertion:(unsigned)arg1 ;
-(int)ccpTapFd;
-(void)setCcpTapFd:(int)arg1 ;
-(void)transactionEnd;
-(BOOL)powerNapScheduled;
-(id)getPowerNapXPCActivityID;
-(void)setPowerNapScheduled:(BOOL)arg1 ;
-(void)handleTapClose;
-(BOOL)waldoClient;
-(void)setWaldoClient:(BOOL)arg1 ;
-(NSMutableSet *)sleepAssertEndpoints;
-(unsigned)createSleepAssertionOfType:(id)arg1 ;
-(NSMutableSet *)darkWakeAssertEndpoints;
-(BOOL)hasPowerNapEntitlement;
-(int)pendingPowerNapSchedule;
-(void)setPendingPowerNapSchedule:(int)arg1 ;
-(void)setWaldo:(NETWaldo *)arg1 ;
-(NSMutableSet *)waldoWaiting;
-(void)setWaldoWaiting:(NSMutableSet *)arg1 ;
-(void)ledbellyTapTx:(iovec*)arg1 count:(int)arg2 ;
-(void)handleLedbelly:(id)arg1 clientAddedOrRemoved:(id)arg2 message:(unsigned char)arg3 ;
-(void)respondToRequest:(id)arg1 response:(unsigned long long)arg2 ifindex:(unsigned)arg3 delay:(long long)arg4 ;
-(void)transactionBegin;
-(void)respondToRequest:(id)arg1 withError:(unsigned long long)arg2 ;
-(void)respondToRequest:(id)arg1 withDictionary:(id)arg2 ;
-(NETWaldo *)waldo;
-(BOOL)isBundleIDBlacklistedForFallback;
-(BOOL)isBundleIDPrefixBlacklistedForFallback;
-(void)setLastRequestTime:(unsigned long long)arg1 ;
-(void)handleModifySettingsRequest:(id)arg1 ;
-(void)handleGetNetworkdInfoRequest:(id)arg1 ;
-(void)handleOpportunisticDisable:(id)arg1 ;
-(void)handlePathEvaluationStart:(id)arg1 ;
-(void)handleMonitorStart:(id)arg1 ;
-(void)handleConnectionStart:(id)arg1 ;
-(id)endpointForID:(unsigned long long)arg1 ;
-(void)removeEndpoint:(id)arg1 ;
-(void)setWatchingFallback:(BOOL)arg1 ;
-(void)sendSettings;
-(void)handleIsCellular:(id)arg1 ;
-(void)handleSetPersistentInterface:(id)arg1 ;
-(void)handleSetPoolLimit:(id)arg1 ;
-(void)handleUserEventAgentCheckIn:(id)arg1 ;
-(void)handleUserEventAgentMap:(id)arg1 ;
-(void)handleUserEventAgentUnmap:(id)arg1 ;
-(void)handleCheckout:(id)arg1 ;
-(void)handleIsExpensive:(id)arg1 ;
-(void)handleSetExpensive:(id)arg1 ;
-(void)handleNotifyCellBlocked:(id)arg1 ;
-(void)handleMessageVerifyPeerCertificateAndCopyPublicKey:(id)arg1 ;
-(void)handleCopyWaldo:(id)arg1 ;
-(void)handleFetchCCPTap:(id)arg1 ;
-(void)handleCheckClientIsFirstParty:(id)arg1 ;
-(void)handleCheckFallbackIsBlacklistedByBundleID:(id)arg1 ;
-(void)handleRemove;
-(void)setHasPowerNapEntitlement:(BOOL)arg1 ;
-(void)removeSleepAssertEndpoint:(id)arg1 ;
-(void)setSleepAssertEndpoints:(NSMutableSet *)arg1 ;
-(void)setDarkWakeAssertEndpoints:(NSMutableSet *)arg1 ;
-(void)enableSleepAssert;
-(void)disableSleepAssertForced:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xname;
-(void)sendMessage:(id)arg1 withDelay:(long long)arg2 ;
-(id)copyEntitlement:(const char*)arg1 ;
-(int)pendingFallbackActivityNotification;
-(void)setPendingFallbackActivityNotification:(int)arg1 ;
-(unsigned long long)lastRequestTime;
-(void)handleLedbelly:(id)arg1 inboundHeader:(id)arg2 payload:(id)arg3 to:(id)arg4 ;
-(void)handleLedbelly:(id)arg1 outboundMessage:(id)arg2 from:(id)arg3 ;
-(void)handleLedbelly:(id)arg1 clientAdded:(id)arg2 ;
-(void)handleLedbelly:(id)arg1 clientRemoved:(id)arg2 ;
-(void)handleLedbelly:(id)arg1 newState:(unsigned char)arg2 ;
-(void)reschedulePowerNapForEligibleEndpoints;
-(void)addSleepAssertEndpoint:(id)arg1 ;
-(BOOL)watchingFallback;
-(void)getAuditToken:(SCD_Struct_NE2*)arg1 auditPort:(unsigned*)arg2 bootstrapPort:(unsigned*)arg3 ;
-(void)setXname:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)cellularBlocked;
-(void)setCellularBlocked:(BOOL)arg1 ;
-(BOOL)sleepAsserting;
-(void)setSleepAsserting:(BOOL)arg1 ;
-(BOOL)suspended;
-(void)sendMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(const char*)name;
-(NSString *)bundle;
-(void)setBundle:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(SCD_Struct_NE2)auditToken;
-(void)handleRequest:(id)arg1 ;
-(void)setAuditToken:(SCD_Struct_NE2)arg1 ;
-(BOOL)hasEntitlement:(const char*)arg1 ;
-(id)privateDescription;
-(NSMutableSet *)endpoints;
-(void)setEndpoints:(NSMutableSet *)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setFallbackConnectionCount:(unsigned long long)arg1 ;
-(unsigned long long)fallbackConnectionCount;
-(unsigned)bootstrap;
-(void)setBootstrap:(unsigned)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(unsigned)powerAssertion;
-(void)setPowerAssertion:(unsigned)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setIdleTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)idleTimer;
@end
