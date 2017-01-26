/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:16:52 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_dispatch_queue, MRDVirtualAudioInputServerDelegate;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface MRDVirtualAudioInputServer : NSObject <MRDXPCMessageHandling> {

	NSMutableArray* _recordingEndpointClients;
	NSMutableArray* _registeredDevices;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRDVirtualAudioInputServerDelegate> _delegate;

}

@property (assign,nonatomic) id<MRDVirtualAudioInputServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recordingEndpointClients; 
@property (nonatomic,copy,readonly) NSArray * registeredDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)clearRegisteredDevicesForClient:(id)arg1 ;
-(void)clearRecordingEndpointsForClient:(id)arg1 ;
-(void)_handleGetDevicesMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleInputDeviceConnectedMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleInputDeviceDisconnectedMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRecordingStateChangedMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleVoiceDataReceivedMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleRecordingEndpointAvailabilityMessage:(id)arg1 fromClient:(id)arg2 ;
-(NSArray *)recordingEndpointClients;
-(id)registeredDeviceWithID:(unsigned)arg1 ;
-(NSArray *)registeredDevices;
-(void)setDelegate:(id<MRDVirtualAudioInputServerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MRDVirtualAudioInputServerDelegate>)delegate;
@end
