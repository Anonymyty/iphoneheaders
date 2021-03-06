/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:39 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/wifid
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wifid/wifid-Structs.h>
#import <wifid/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSThread, NSObject, NSArray, NSString, NSTimer, NSData;

@interface WiFiIDSSyncEngine : NSObject <IDSServiceDelegate> {

	BOOL _isWaitingForIdsMessageDelivery;
	BOOL _isWaitingForIdsSendResponse;
	BOOL _isKeychainUnlocked;
	IDSService* _idsService;
	NSThread* _wifidMainThread;
	NSObject*<OS_dispatch_queue> _serialIdsDispatchQ;
	WiFiManagerRef _manager;
	long long _role;
	WiFiNetworkRef _currentNetwork;
	NSArray* _knownNetworks;
	unsigned long long _didReSendIdsMessage;
	NSString* _pairedDeviceDestinationID;
	NSTimer* _coalesceKnownNetworksSyncTimer;
	NSTimer* _waitForReAssociationTimer;
	NSData* _lastSyncedKnownNetworksData;
	NSData* _lastSyncedCompanionAssistedAutoJoinData;
	NSString* _lastSyncedKnownNetworksDataGUID;
	NSString* _lastSyncedCompanionAssistedAutoJoinDataGUID;
	unsigned long long _idsSendFailureCount;

}

@property (nonatomic,retain) IDSService * idsService;                                             //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSThread * wifidMainThread;                                          //@synthesize wifidMainThread=_wifidMainThread - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialIdsDispatchQ;                     //@synthesize serialIdsDispatchQ=_serialIdsDispatchQ - In the implementation block
@property (assign) WiFiManagerRef manager;                                                        //@synthesize manager=_manager - In the implementation block
@property (assign) long long role;                                                                //@synthesize role=_role - In the implementation block
@property (assign) WiFiNetworkRef currentNetwork;                                                 //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) NSArray * knownNetworks;                                                       //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (assign) BOOL isWaitingForIdsMessageDelivery;                                           //@synthesize isWaitingForIdsMessageDelivery=_isWaitingForIdsMessageDelivery - In the implementation block
@property (assign) BOOL isWaitingForIdsSendResponse;                                              //@synthesize isWaitingForIdsSendResponse=_isWaitingForIdsSendResponse - In the implementation block
@property (assign) unsigned long long didReSendIdsMessage;                                        //@synthesize didReSendIdsMessage=_didReSendIdsMessage - In the implementation block
@property (nonatomic,copy) NSString * pairedDeviceDestinationID;                                  //@synthesize pairedDeviceDestinationID=_pairedDeviceDestinationID - In the implementation block
@property (nonatomic,retain) NSTimer * coalesceKnownNetworksSyncTimer;                            //@synthesize coalesceKnownNetworksSyncTimer=_coalesceKnownNetworksSyncTimer - In the implementation block
@property (nonatomic,retain) NSTimer * waitForReAssociationTimer;                                 //@synthesize waitForReAssociationTimer=_waitForReAssociationTimer - In the implementation block
@property (nonatomic,retain) NSData * lastSyncedKnownNetworksData;                                //@synthesize lastSyncedKnownNetworksData=_lastSyncedKnownNetworksData - In the implementation block
@property (nonatomic,retain) NSData * lastSyncedCompanionAssistedAutoJoinData;                    //@synthesize lastSyncedCompanionAssistedAutoJoinData=_lastSyncedCompanionAssistedAutoJoinData - In the implementation block
@property (nonatomic,retain) NSString * lastSyncedKnownNetworksDataGUID;                          //@synthesize lastSyncedKnownNetworksDataGUID=_lastSyncedKnownNetworksDataGUID - In the implementation block
@property (nonatomic,retain) NSString * lastSyncedCompanionAssistedAutoJoinDataGUID;              //@synthesize lastSyncedCompanionAssistedAutoJoinDataGUID=_lastSyncedCompanionAssistedAutoJoinDataGUID - In the implementation block
@property (assign) unsigned long long idsSendFailureCount;                                        //@synthesize idsSendFailureCount=_idsSendFailureCount - In the implementation block
@property (assign) BOOL isKeychainUnlocked;                                                       //@synthesize isKeychainUnlocked=_isKeychainUnlocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsWaitingForIdsMessageDelivery:(BOOL)arg1 ;
-(void)setUpIDS;
-(id)copyPairedDestinationID;
-(void)updatePairedDeviceID:(id)arg1 ;
-(NSThread *)wifidMainThread;
-(void)registerForInitialSyncTrigger;
-(void)registerForSoftwareUpdateTrigger;
-(void)subscribeToKeychainChanges;
-(NSObject*<OS_dispatch_queue>)serialIdsDispatchQ;
-(NSTimer *)coalesceKnownNetworksSyncTimer;
-(NSTimer *)waitForReAssociationTimer;
-(NSString *)pairedDeviceDestinationID;
-(void)setWifidMainThread:(NSThread *)arg1 ;
-(void)setSerialIdsDispatchQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)knownNetworksListChanged;
-(void)enteredCompatibilityState:(id)arg1 ;
-(void)checkIfSoftwareUpdateStateEntered:(unsigned short)arg1 ;
-(void)processReceivedKnownNetworks:(id)arg1 ;
-(void)processReceivedAutoJoinAssist:(id)arg1 ;
-(NSData *)lastSyncedKnownNetworksData;
-(NSData *)lastSyncedCompanionAssistedAutoJoinData;
-(unsigned long long)didReSendIdsMessage;
-(void)reSendIdsMessage:(long long)arg1 ;
-(void)setLastSyncedKnownNetworksDataGUID:(NSString *)arg1 ;
-(void)setLastSyncedCompanionAssistedAutoJoinDataGUID:(NSString *)arg1 ;
-(void)setIsWaitingForIdsSendResponse:(BOOL)arg1 ;
-(BOOL)isWaitingForIdsMessageDelivery;
-(void)sendToGizmoOfDataType:(long long)arg1 ;
-(void)setDidReSendIdsMessage:(unsigned long long)arg1 ;
-(BOOL)isWaitingForIdsSendResponse;
-(void)setPairedDeviceDestinationID:(NSString *)arg1 ;
-(void)pairedDeviceConnectionChanged:(id)arg1 ;
-(NSString *)lastSyncedKnownNetworksDataGUID;
-(NSString *)lastSyncedCompanionAssistedAutoJoinDataGUID;
-(unsigned long long)idsSendFailureCount;
-(void)setIdsSendFailureCount:(unsigned long long)arg1 ;
-(void)setLastSyncedKnownNetworksData:(NSData *)arg1 ;
-(void)setLastSyncedCompanionAssistedAutoJoinData:(NSData *)arg1 ;
-(void)sendCurrentCompanionNetwork;
-(long long)isRxdNetwork:(id)arg1 equalToPlistNetwork:(WiFiNetworkRef)arg2 ;
-(BOOL)isKeychainUnlocked;
-(void)syncKnownWiFiNetworks:(id)arg1 ;
-(void)setCoalesceKnownNetworksSyncTimer:(NSTimer *)arg1 ;
-(void)setIsKeychainUnlocked:(BOOL)arg1 ;
-(void)setKnownNetworks:(NSArray *)arg1 ;
-(void)copyKnownNetworks;
-(void)setKnownNetworks;
-(void)checkForWiFiPasswordChange;
-(void)companionReAssociationWaitTimerFired:(id)arg1 ;
-(void)setWaitForReAssociationTimer:(NSTimer *)arg1 ;
-(void)initializeWithWiFiManager:(WiFiManagerRef)arg1 ;
-(void)keychainAccessibleNow;
-(void)currentNetworkChanged;
-(WiFiManagerRef)manager;
-(void)setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)dealloc;
-(void)setRole:(long long)arg1 ;
-(long long)role;
-(NSArray *)knownNetworks;
-(WiFiNetworkRef)currentNetwork;
-(IDSService *)idsService;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)setManager:(WiFiManagerRef)arg1 ;
@end

