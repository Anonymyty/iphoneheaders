/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol AVCVideoStreamDelegate;
@class AVConferenceXPCClient, AVCMediaStreamConfig, VCVideoStream, CALayer, NSDictionary, NSString;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id<AVCVideoStreamDelegate> _delegate;
	id _weakSelf;
	VCVideoStream* _opaqueStream;
	CALayer* _localVideoLayer;
	CALayer* _localVideoSubLayer;
	CALayer* _remoteVideoLayer;
	CALayer* _remoteVideoSubLayer;
	NSDictionary* _capabilities;

}

@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (assign,nonatomic) void* remoteVideoLayer;                                           //@synthesize remoteVideoLayer=_remoteVideoLayer - In the implementation block
@property (assign,nonatomic) void* localVideoLayer;                                            //@synthesize localVideoLayer=_localVideoLayer - In the implementation block
@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) id<AVCVideoStreamDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AVCVideoStreamDelegate>)arg1 ;
-(void)dealloc;
-(id<AVCVideoStreamDelegate>)delegate;
-(void)stop;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)start;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(AVCMediaStreamConfig *)configuration;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(NSDictionary *)capabilities;
-(void)refreshLoggingParameters;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void*)remoteVideoLayer;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(BOOL)isRTCPTimeOutEnabled;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(BOOL)isRTCPEnabled;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(void)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 callID:(id)arg3 error:(id*)arg4 ;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)getStats;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
@end

