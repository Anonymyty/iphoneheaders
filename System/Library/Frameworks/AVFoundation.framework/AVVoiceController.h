/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSDictionary;

@interface AVVoiceController : NSObject {

	void* _impl;
	unsigned long long _alertStartTime;

}

@property (getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled; 
@property (getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled; 
@property (copy,readonly) NSString * recordRoute; 
@property (copy,readonly) NSString * playbackRoute; 
@property (readonly) unsigned long long lastRecordStartTime; 
@property (readonly) NSDictionary * voiceTriggerInfo; 
@property (getter=isSynchronousCallbackEnabled) BOOL synchronousCallbackEnabled; 
@property (readonly) NSDictionary * recordSettings; 
@property (getter=isRecording,readonly) BOOL recording; 
@property (retain) id<Endpointer> endpointerDelegate; 
@property (assign) int recordEndpointMode; 
@property (assign) double recordStartWaitTime; 
@property (assign) double recordInterspeechWaitTime; 
@property (assign) double recordEndWaitTime; 
@property (assign) id<AVVoiceControllerRecordDelegate> recordDelegate; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (readonly) NSDictionary * playbackSettings; 
@property (getter=isPlaying,readonly) BOOL playing; 
@property (assign) id<AVVoiceControllerPlaybackDelegate> playbackDelegate; 
@property (assign) float playbackVolume; 
@property (getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled; 
@property (assign) float alertVolume; 
@property (readonly) unsigned long long alertStartTime;                                       //@synthesize alertStartTime=_alertStartTime - In the implementation block
-(NSString *)recordRoute;
-(NSString *)playbackRoute;
-(unsigned long long)lastRecordStartTime;
-(NSDictionary *)voiceTriggerInfo;
-(BOOL)isBargeInDetectEnabled;
-(void)setBargeInDetectEnabled:(BOOL)arg1 ;
-(BOOL)isStopOnBargeInEnabled;
-(void)setStopOnBargeInEnabled:(BOOL)arg1 ;
-(BOOL)isSynchronousCallbackEnabled;
-(void)setSynchronousCallbackEnabled:(BOOL)arg1 ;
-(void)decodeError;
-(void)handleInterruption:(id)arg1 ;
-(void)handleRouteChange:(id)arg1 ;
-(void)handleMediaServerDeath:(id)arg1 ;
-(void)handleMediaServerReset:(id)arg1 ;
-(ControllerImpl*)impl;
-(void)setSessionNotifications;
-(void)removeSessionNotifications;
-(void)hardwareConfigChanged;
-(void)beganRecording;
-(void)lpcmRecordBufferReceived:(AudioQueueBuffer*)arg1 atTime:(unsigned long long)arg2 ;
-(void)recordBufferReceived:(MyAudioQueueBuffer*)arg1 atTime:(unsigned long long)arg2 ;
-(void)finishedRecording;
-(void)startpointDetected;
-(void)interspeechPointDetected;
-(void)endpointDetected;
-(void)encodeError;
-(void)beganPlaying;
-(void)playbackBufferReceived:(MyAudioQueueBuffer*)arg1 ;
-(void)finishedPlaying;
-(void)beginRecordInterruption;
-(void)endRecordInterruption;
-(void)beginPlaybackInterruption;
-(void)endPlaybackInterruption;
-(void)dealloc;
-(void)stopRecording;
-(int)doStartRecordingAtTime:(unsigned long long)arg1 behavior:(id)arg2 ;
-(void)prewarmAudioSession;
-(BOOL)willAcceptContext:(id)arg1 ;
-(void)resetEndpointer;
-(BOOL)playRecordStartingAlertAndResetEndpointer;
-(BOOL)startRecording:(id*)arg1 ;
-(BOOL)startRecordingAtTime:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2 ;
-(id<AVVoiceControllerRecordDelegate>)recordDelegate;
-(double)getRecordBufferDuration;
-(id<Endpointer>)endpointerDelegate;
-(int)recordEndpointMode;
-(double)recordStartWaitTime;
-(double)recordInterspeechWaitTime;
-(void)setRecordInterspeechWaitTime:(double)arg1 ;
-(double)recordEndWaitTime;
-(id<AVVoiceControllerPlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<AVVoiceControllerPlaybackDelegate>)arg1 ;
-(NSDictionary *)playbackSettings;
-(double)getPlaybackBufferDuration;
-(BOOL)setPlaybackBufferDuration:(double)arg1 ;
-(void)setAlertVolume:(float)arg1 ;
-(float)alertVolume;
-(unsigned long long)getAlertStartTime;
-(void)setPlaybackVolume:(float)arg1 ;
-(float)playbackVolume;
-(BOOL)isMeteringEnabled;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(BOOL)isStopOnEndpointEnabled;
-(void)setStopOnEndpointEnabled:(BOOL)arg1 ;
-(unsigned long long)alertStartTime;
-(BOOL)startPlaying;
-(BOOL)isPlaying;
-(BOOL)isRecording;
-(id)initWithContext:(id)arg1 error:(id*)arg2 ;
-(void)setRecordDelegate:(id<AVVoiceControllerRecordDelegate>)arg1 ;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2 ;
-(BOOL)setRecordBufferDuration:(double)arg1 ;
-(void)setRecordStartWaitTime:(double)arg1 ;
-(void)setRecordEndWaitTime:(double)arg1 ;
-(void)setRecordEndpointMode:(int)arg1 ;
-(void)setEndpointerDelegate:(id<Endpointer>)arg1 ;
-(BOOL)setCurrentContext:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)recordSettings;
-(BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)startRecording;
-(BOOL)playAlertSoundForType:(int)arg1 ;
-(void)releaseAudioSession:(unsigned long long)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(void)releaseAudioSession;
-(void)stopPlaying;
-(void)finalize;
@end

