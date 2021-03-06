/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWCaptureDevice : NSObject

@property (nonatomic,readonly) int position; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) NSArray * supportedFormats; 
@property (assign,nonatomic) float maximumFrameRate; 
@property (assign,nonatomic) float minimumFrameRate; 
-(int)position;
-(void)captureStillImageNow;
-(BOOL)isStreaming;
-(NSArray *)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(BOOL)startStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)stopStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(long long)activeFormatIndex;
-(void)setActiveFormatIndex:(long long)arg1 ;
-(BOOL)registerStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)captureStillImageWithFlashNow;
-(void)captureStillImageBracketNow:(int)arg1 bracketSettings:(id)arg2 ;
-(void)getCurrentVideoFrameStatistics:(SCD_Struct_BW72*)arg1 ;
-(OpaqueCMClockRef)clock;
@end

