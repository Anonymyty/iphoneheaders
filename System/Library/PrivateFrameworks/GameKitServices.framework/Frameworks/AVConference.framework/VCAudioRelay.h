/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class VCAudioRelayIO, NSObject;

@interface VCAudioRelay : NSObject {

	BOOL _isRelayRunning;
	float _IOBufferDuration;
	opaque_pthread_t* _relayThread;
	opaque_pthread_cond_t _wakeUpCondition;
	opaque_pthread_mutex_t _wakeUpMutex;
	OpaqueAudioConverterRef _clientToRemoteConverter;
	OpaqueAudioConverterRef _remoteToClientConverter;
	VCAudioRelayIO* _remoteIO;
	VCAudioRelayIO* _clientIO;
	opaque_pthread_mutex_t _relayLock;
	NSObject*<OS_dispatch_source> _periodicHealthPrintDispatchSource;
	unsigned _blocksRelayedCount;
	float _clientUplinkPowerMovingAverage;
	float _clientDownlinkPowerMovingAverage;
	id _weakSelf;

}

@property (readonly) BOOL canStartRelay; 
@property (readonly) BOOL isRelayRunning;                                                          //@synthesize isRelayRunning=_isRelayRunning - In the implementation block
@property (readonly) float IOBufferDuration;                                                       //@synthesize IOBufferDuration=_IOBufferDuration - In the implementation block
@property (copy,readonly) VCAudioRelayIO * remoteIO;                                               //@synthesize remoteIO=_remoteIO - In the implementation block
@property (copy,readonly) VCAudioRelayIO * clientIO;                                               //@synthesize clientIO=_clientIO - In the implementation block
@property (readonly) OpaqueAudioConverterRef remoteToClientConverter;                              //@synthesize remoteToClientConverter=_remoteToClientConverter - In the implementation block
@property (readonly) OpaqueAudioConverterRef clientToRemoteConverter;                              //@synthesize clientToRemoteConverter=_clientToRemoteConverter - In the implementation block
@property (readonly) NSObject*<OS_dispatch_source> periodicHealthPrintDispatchSource;              //@synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource - In the implementation block
@property (readonly) unsigned blocksRelayedCount;                                                  //@synthesize blocksRelayedCount=_blocksRelayedCount - In the implementation block
@property (readonly) float clientUplinkPowerMovingAverage;                                         //@synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage - In the implementation block
@property (readonly) float clientDownlinkPowerMovingAverage;                                       //@synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(BOOL)start;
-(void)printStreamFormats;
-(BOOL)canSetPropertyWithError:(id*)arg1 ;
-(BOOL)canStartRelayWithError:(id*)arg1 ;
-(BOOL)createAudioConvertersWithError:(id*)arg1 ;
-(BOOL)startRelayThreadWithError:(id*)arg1 ;
-(void)startPeriodicHealthPrint;
-(void)stopRelayThread;
-(void)destroyAudioConverters;
-(OpaqueAudioConverterRef)newAudioConverterWithInputFormat:(AudioStreamBasicDescription*)arg1 outputFormat:(AudioStreamBasicDescription*)arg2 withError:(id*)arg3 ;
-(float)IOBufferDuration;
-(float)rmsPowerOfBuffer:(float*)arg1 numSamples:(unsigned)arg2 ;
-(VCAudioRelayIO *)clientIO;
-(BOOL)setIOBufferDuration:(float)arg1 withError:(id*)arg2 ;
-(BOOL)setRemoteIO:(id)arg1 withError:(id*)arg2 ;
-(BOOL)setClientIO:(id)arg1 withError:(id*)arg2 ;
-(BOOL)canStartRelay;
-(void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(OpaqueAudioConverterRef)arg3 ;
-(void)sleepTillTime:(timespec*)arg1 ;
-(void)updateRealTimeStats;
-(VCAudioRelayIO *)remoteIO;
-(BOOL)isRelayRunning;
-(OpaqueAudioConverterRef)remoteToClientConverter;
-(OpaqueAudioConverterRef)clientToRemoteConverter;
-(NSObject*<OS_dispatch_source>)periodicHealthPrintDispatchSource;
-(unsigned)blocksRelayedCount;
-(float)clientDownlinkPowerMovingAverage;
-(float)clientUplinkPowerMovingAverage;
@end
