/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, BLTAbstractIDSDevice, BLTAbstractIDSService;
@class NSMutableDictionary, NSString, NSObject, NSLock, BLTPBProtobufSequenceNumberManager;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate> {

	NSMutableDictionary* _idsSendIDToCompletionHandler;
	NSMutableDictionary* _idsSendIDToResponseHandler;
	NSString* _serviceName;
	BOOL _full;
	double _lastTimeRaisedBadIDSProtobuf;
	NSObject*<OS_dispatch_queue> _idsQueue;
	id<BLTAbstractIDSDevice> _defaultPairedDevice;
	NSLock* _defaultPairedDeviceLock;
	NSMutableDictionary* _idsRequestMessageTypeToSelector;
	NSLock* _sequenceNumberSendLock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	id<BLTAbstractIDSService> _service;
	BLTPBProtobufSequenceNumberManager* _sequenceNumberManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) id<BLTAbstractIDSService> service;                                       //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@property (nonatomic,readonly) BLTPBProtobufSequenceNumberManager * sequenceNumberManager;              //@synthesize sequenceNumberManager=_sequenceNumberManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<BLTAbstractIDSService>)service;
-(id)initWithServiceName:(id)arg1 idsQueueName:(char*)arg2 andClientQueue:(id)arg3 ;
-(void)disableStandaloneTestMode;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;
-(BLTPBProtobufSequenceNumberManager *)sequenceNumberManager;
-(void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned long long)arg2 ;
-(void)_sendAssertForSession;
-(void)_queueHandleIDSProtobuf:(id)arg1 ;
-(BOOL)_callSendCompletionHandlerWithSuccess:(BOOL)arg1 identifier:(id)arg2 error:(id)arg3 ;
-(void)_handleDebugException;
-(void)_handleNewSessionState:(unsigned long long)arg1 ;
-(BOOL)_sequenceErrorDidHappenAndHandled:(long long)arg1 service:(id)arg2 incomingIdentifier:(id)arg3 ;
-(void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(BOOL)arg2 sessionState:(unsigned long long*)arg3 ;
-(void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 andResponse:(/*^block*/id)arg8 didQueue:(/*^block*/id)arg9 ;
-(void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3 ;
-(void)handleIncomingMessage:(id)arg1 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(void)_setStandaloneTestModeEnabled:(BOOL)arg1 ;
-(void)handleAckInitialSequenceNumberRequest:(id)arg1 ;
-(void)registerProtobufHandlers;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(/*^block*/id)arg3 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(/*^block*/id)arg4 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(/*^block*/id)arg5 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 ;
-(void)_sendMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 andResponse:(/*^block*/id)arg8 didQueue:(/*^block*/id)arg9 ;
-(void)_queuePerformSend:(/*^block*/id)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 andResponse:(/*^block*/id)arg8 ;
-(void)handleFileURL:(id)arg1 extraMetadata:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 idsQueueName:(char*)arg2 ;
-(void)handleIDSProtobuf:(id)arg1 ;
-(unsigned long long)connectionStatus;
-(BOOL)hasSentUDID;
-(void)saveHasSentUDID;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 ;
-(void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(/*^block*/id)arg7 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5 ;
-(void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 didSend:(/*^block*/id)arg4 didQueue:(/*^block*/id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
@end

