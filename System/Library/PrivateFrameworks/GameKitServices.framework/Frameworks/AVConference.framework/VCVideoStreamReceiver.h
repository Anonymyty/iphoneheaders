/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCVideoStreamReceiverDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCVideoStreamReceiver : NSObject {

	tagHANDLE* _hRTP;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	BOOL _receivedFirstPacket;
	unsigned short _lastSequenceNumber;
	int _sequenceNumberOutOfOrder;
	unsigned _mostRecentTimestamp;
	unsigned _lastVideoTimestamp;
	unsigned _videoTimestampWrapCount;
	opaqueCMFormatDescriptionRef _formatDescription;
	id<VCVideoStreamReceiverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _videoStreamReceiverQueue;
	OpaqueFigThreadRef _networkReceiveThread;
	BOOL _runNetworkReceiveThread;
	int _sRecvReset;
	VideoPacketBuffer_tRef _videoPacketBuffer;

}

@property (assign,nonatomic) id<VCVideoStreamReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<VCVideoStreamReceiverDelegate>)arg1 ;
-(void)dealloc;
-(id<VCVideoStreamReceiverDelegate>)delegate;
-(void)startVideo;
-(void)stopVideo;
-(int)startNetworkReceiveThread;
-(int)stopNetworkReceiveThread;
-(int)processVideoRTP;
-(int)decodeBuffer:(char*)arg1 size:(unsigned long long)arg2 timestamp:(unsigned)arg3 hostTime:(double)arg4 ;
-(void)scheduleVideoDecode:(unsigned*)arg1 schedule_n:(int)arg2 ;
-(void)updateSequenceNumber:(unsigned short)arg1 ;
-(int)decodeFrame:(opaqueCMSampleBufferRef)arg1 showFrame:(BOOL)arg2 ;
-(id)initWithRTP:(tagHANDLE*)arg1 delegate:(id)arg2 ;
-(void)pauseVideo;
-(void*)networkReceivePackets;
-(int)showDecodedFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_VC13)arg2 ;
@end

