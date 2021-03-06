/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:12:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class AVAudioTime;

@interface AVAudioClock : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioTime * currentTime; 
-(void)dealloc;
-(id)init;
-(id)initWithNode:(AVAudioNodeImplBase*)arg1 ;
-(AudioTimeStamp)currentAudioTimeStamp;
-(id)awaitIOCycle:(unsigned*)arg1 ;
-(AVAudioTime *)currentTime;
@end

