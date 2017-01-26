/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:40 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol CKAudioPlayerDelegate;
@class CKMediaObject, AVAudioPlayer, CADisplayLink, NSString;

@interface CKAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	CKMediaObject* _mediaObject;
	id<CKAudioPlayerDelegate> _delegate;
	AVAudioPlayer* _audioPlayer;
	CADisplayLink* _displayLink;
	double _prevCurrentTime;
	/*^block*/id _block;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                     //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic) id<CKAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain) AVAudioPlayer * audioPlayer;                     //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double prevCurrentTime;                          //@synthesize prevCurrentTime=_prevCurrentTime - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKAudioPlayerDelegate>)delegate;
-(double)duration;
-(void)stop;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(id)initWithFileURL:(id)arg1 ;
-(void)pause;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)mediaObject;
-(AVAudioPlayer *)audioPlayer;
-(void)playAfterDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMediaObject:(id)arg1 ;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(double)prevCurrentTime;
-(void)setPrevCurrentTime:(double)arg1 ;
@end
