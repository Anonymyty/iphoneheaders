/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNodeMessage.h>

@class FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {

	opaqueCMSampleBufferRef _sampleBuffer;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 recordingSettings:(id)arg2 ;
-(void)dealloc;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3 ;
-(FigCaptureRecordingSettings *)recordingSettings;
@end
