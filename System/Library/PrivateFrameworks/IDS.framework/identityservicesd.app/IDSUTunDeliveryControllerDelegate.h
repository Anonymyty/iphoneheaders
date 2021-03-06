/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:01 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSUTunDeliveryControllerDelegate <NSObject>
@optional
-(void)deliveryController:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13;
-(void)deliveryController:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13;
-(void)deliveryController:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 deviceID:(id)arg5 btUUID:(id)arg6 messageID:(id)arg7 wantsAppAck:(BOOL)arg8 expectsPeerResponse:(BOOL)arg9 peerResponseIdentifier:(id)arg10 messageUUID:(id)arg11 priority:(long long)arg12 isCompressed:(BOOL)arg13;
-(void)deliveryController:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 deviceID:(id)arg3 btUUID:(id)arg4 messageID:(id)arg5 peerResponseIdentifier:(id)arg6 priority:(long long)arg7;
-(void)deliveryControllerHasSpaceforNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3;
-(void)deliveryControllerHasSpaceforUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2;
-(id)deliveryControllerQueuedIncomingMessageDictionary:(id)arg1;

@end

