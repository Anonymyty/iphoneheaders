/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:15:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_source, RDBridgeDelegate;
@class NSObject, IDSService, RDMulticastService, NSString;

@interface RDBridge : NSObject <IDSServiceDelegate> {

	NSObject*<OS_dispatch_source> _connectionHealthCheckTimer;
	NSObject*<OS_dispatch_source> _sleepFailSafeTimer;
	id<RDBridgeDelegate> _delegate;
	long long _connectionState;
	IDSService* _remoteService;
	RDMulticastService* _multicastService;

}

@property (assign,nonatomic,__weak) id<RDBridgeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long connectionState;                         //@synthesize connectionState=_connectionState - In the implementation block
@property (retain) IDSService * remoteService;                                  //@synthesize remoteService=_remoteService - In the implementation block
@property (retain) RDMulticastService * multicastService;                       //@synthesize multicastService=_multicastService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusStringForConnectionState:(long long)arg1 ;
+(id)descriptionForConnectionState:(long long)arg1 ;
-(void)setDelegate:(id<RDBridgeDelegate>)arg1 ;
-(id<RDBridgeDelegate>)delegate;
-(long long)connectionState;
-(id)initWithOptions:(id)arg1 ;
-(void)initializeIDSConnection;
-(void)initializeMulticastDiscovery;
-(void)updateFailSafeEnableScreenSaver;
-(void)setRemoteService:(IDSService *)arg1 ;
-(IDSService *)remoteService;
-(void)startConnectionHealthCheck;
-(void)setMulticastService:(RDMulticastService *)arg1 ;
-(RDMulticastService *)multicastService;
-(void)notifyDelegateOfIncomingData:(id)arg1 ;
-(void)postConnectionStatusDidChangeNotification;
-(void)sendIDSPayload:(id)arg1 ;
-(void)sendRequestWithID:(id)arg1 context:(id)arg2 ;
-(void)changeGizmoLanguage:(id)arg1 locale:(id)arg2 ;
-(void)performIDSHealthCheck;
-(void)sendPayload:(id)arg1 ;
-(void)requestGizmoConfigurationWithContext:(id)arg1 ;
-(void)requestGizmoLanguagesAndLocalesWithContext:(id)arg1 ;
-(void)requestGizmoToStartPlayingDemoMovie;
-(void)requestGizmoToStopPlayingDemoMovie;
-(void)requestGizmoToDisableSleep;
-(void)requestGizmoToEnableSleep;
-(void)requestRebootCompanion:(BOOL)arg1 andGizmo:(BOOL)arg2 ;
-(void)requestGizmoResetNotificationCenterIfNecessary;
-(void)stopIDSHealthCheck;
-(long long)currentConnectionState;
-(id)currentConnectionStateString;
-(id)currentConnectionStateDescription;
-(void)reinitializeIDSConnection;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setConnectionState:(long long)arg1 ;
@end
