/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AudioCircularBuffer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _bufferLength;
	int _startPos;
	int _endPos;
	float _bufferSeconds;
	short* _buffer;
	short* _outBuffer;
	long long _outBufferLength;
	long long _samplecount;
	long long _markIn;
	long long _markOut;

}

@property (assign,nonatomic) long long markIn;               //@synthesize markIn=_markIn - In the implementation block
@property (assign,nonatomic) long long markOut;              //@synthesize markOut=_markOut - In the implementation block
@property (readonly) float bufferSeconds; 
-(void)dealloc;
-(long long)sampleCount;
-(void)_writeToBuffer:(short*)arg1 len:(long long)arg2 ;
-(void*)_copyBytesFrom:(long long)arg1 to:(long long)arg2 outLength:(long long*)arg3 ;
-(short)addSamples:(void*)arg1 len:(long long)arg2 ;
-(id)initWithBackBuffer:(float)arg1 ;
-(void*)copyBufferWithLength:(long long*)arg1 ;
-(void*)copyBufferFrom:(long long)arg1 to:(long long)arg2 withLength:(long long*)arg3 ;
-(long long)bufferLength;
-(float)bufferSeconds;
-(void)saveRecordingBufferFrom:(long long)arg1 to:(long long)arg2 toURL:(id)arg3 ;
-(long long)markIn;
-(void)setMarkIn:(long long)arg1 ;
-(long long)markOut;
-(void)setMarkOut:(long long)arg1 ;
@end

