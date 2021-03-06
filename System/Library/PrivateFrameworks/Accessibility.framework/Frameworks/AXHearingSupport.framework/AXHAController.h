/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHAControllerBrowserDelegateProtocol.h>

@class AXHATimer, AXHearingAidDevice, NSMutableArray, NSMutableDictionary, NSDictionary, NSString;

@interface AXHAController : NSObject <AXHAControllerBrowserDelegateProtocol> {

	BOOL _isListening;
	AXHATimer* _liveListenLevelsTimer;
	AXHearingAidDevice* _pairedDevice;
	NSMutableArray* _clients;
	NSMutableDictionary* _handlers;
	NSDictionary* _availableDevicesDescription;

}

@property (nonatomic,retain) AXHearingAidDevice * pairedDevice;                       //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                                //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;                          //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDictionary * availableDevicesDescription;              //@synthesize availableDevicesDescription=_availableDevicesDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)entitlementsForMessageID:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)willSwitchUser;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clients;
-(void)passConnectionToController:(id)arg1 withReason:(long long)arg2 ;
-(void)availableRemoteControllersDidChange;
-(void)connectToPairedDevice;
-(id)currentDeviceController;
-(void)setPairedHearingAid:(id)arg1 ;
-(void)startSearchCycle;
-(id)connectToControllerWithID:(id)arg1 ;
-(id)registerForAvailableDevicesUpdates:(id)arg1 ;
-(void)addHandler:(id)arg1 andSelector:(SEL)arg2 forMessageIdentifier:(unsigned long long)arg3 ;
-(id)registerForDeviceUpdates:(id)arg1 ;
-(id)readDeviceProperty:(id)arg1 ;
-(id)writeDeviceProperty:(id)arg1 ;
-(id)readAvailableDevices:(id)arg1 ;
-(id)toggleLiveListen:(id)arg1 ;
-(id)registerForLiveListenUpdates:(id)arg1 ;
-(id)readAvailableControllers:(id)arg1 ;
-(id)disconnectAndForceSlave:(id)arg1 ;
-(BOOL)hearingAidsPaired;
-(void)setListenForAvailableDeviceUpdates:(BOOL)arg1 ;
-(void)trustChainAvailabilityDidChange:(id)arg1 ;
-(void)setPairedDevice:(AXHearingAidDevice *)arg1 ;
-(void)setAvailableDevicesDescription:(NSDictionary *)arg1 ;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(id)liveListenController;
-(void)readLiveListenLevels;
-(BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2 ;
-(void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(BOOL)message:(id)arg1 hasEntitlement:(id)arg2 ;
-(NSDictionary *)availableDevicesDescription;
-(void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2 ;
-(void)startServer;
-(void)registerFakeClient:(id)arg1 ;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handlers;
-(AXHearingAidDevice *)pairedDevice;
-(void)handleNewConnection:(id)arg1 ;
@end

