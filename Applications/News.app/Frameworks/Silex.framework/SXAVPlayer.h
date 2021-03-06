/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <AVFoundation/AVPlayer.h>

@interface SXAVPlayer : AVPlayer {

	BOOL _isObserving;
	BOOL _isObservingItem;
	int _playbackPosition;
	int _playbackStatus;
	/*^block*/id _playbackStatusBlock;
	/*^block*/id _playbackProgressBlock;
	double _elapsedTime;
	double _duration;
	double _frameRate;
	id _timeObserver;
	SCD_Struct_SX9 _totalTimePlayed;
	SCD_Struct_SX9 _playbackStartTime;

}

@property (assign,nonatomic) int playbackPosition;                          //@synthesize playbackPosition=_playbackPosition - In the implementation block
@property (assign,nonatomic) int playbackStatus;                            //@synthesize playbackStatus=_playbackStatus - In the implementation block
@property (nonatomic,copy) id playbackStatusBlock;                          //@synthesize playbackStatusBlock=_playbackStatusBlock - In the implementation block
@property (nonatomic,copy) id playbackProgressBlock;                        //@synthesize playbackProgressBlock=_playbackProgressBlock - In the implementation block
@property (assign,nonatomic) double elapsedTime;                            //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double frameRate;                              //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) SCD_Struct_SX9 totalTimePlayed;                //@synthesize totalTimePlayed=_totalTimePlayed - In the implementation block
@property (nonatomic,retain) id timeObserver;                               //@synthesize timeObserver=_timeObserver - In the implementation block
@property (assign,nonatomic) SCD_Struct_SX9 playbackStartTime;              //@synthesize playbackStartTime=_playbackStartTime - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                              //@synthesize isObserving=_isObserving - In the implementation block
@property (assign,nonatomic) BOOL isObservingItem;                          //@synthesize isObservingItem=_isObservingItem - In the implementation block
-(void)setIsObservingItem:(BOOL)arg1 ;
-(void)playedToEnd:(id)arg1 ;
-(BOOL)isObservingItem;
-(void)removeItemObservers;
-(void)removeObservers;
-(void)rateChanged;
-(void)setElapsedTime:(double)arg1 duration:(double)arg2 ;
-(id)playbackProgressBlock;
-(void)setPlaybackStartTime:(SCD_Struct_SX9)arg1 ;
-(SCD_Struct_SX9)totalTimePlayed;
-(SCD_Struct_SX9)playbackStartTime;
-(void)setTotalTimePlayed:(SCD_Struct_SX9)arg1 ;
-(id)playbackStatusBlock;
-(void)seekToStartWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPlaybackProgressBlock:(id)arg1 ;
-(void)setPlaybackStatusBlock:(id)arg1 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)elapsedTime;
-(void)setPlaybackPosition:(int)arg1 ;
-(int)playbackPosition;
-(void)statusChanged;
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)setTimeObserver:(id)arg1 ;
-(id)timeObserver;
-(double)frameRate;
-(void)setFrameRate:(double)arg1 ;
-(void)setPlaybackStatus:(int)arg1 ;
-(int)playbackStatus;
-(BOOL)isObserving;
-(void)setIsObserving:(BOOL)arg1 ;
@end

