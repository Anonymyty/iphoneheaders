/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKAnimationRunner;
@class NSString;

@interface VKAnimation : NSObject {

	/*^block*/id _completionHandler;
	NSString* _name;
	long long _priority;
	id<VKAnimationRunner> _runner;
	long long _state;
	BOOL _runsForever;

}

@property (nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) BOOL runsForever;                  //@synthesize runsForever=_runsForever - In the implementation block
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) BOOL timed; 
@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)priority;
-(void)stopAnimation:(BOOL)arg1 ;
-(void)resume;
-(id)initWithName:(id)arg1 ;
-(id)initWithPriority:(long long)arg1 ;
-(void)pause;
-(BOOL)running;
-(void)onTimerFired:(double)arg1 ;
-(id)initWithPriority:(long long)arg1 name:(id)arg2 ;
-(BOOL)runsForever;
-(void)startWithRunner:(id)arg1 ;
-(void)transferToRunner:(id)arg1 ;
-(void)setRunsForever:(BOOL)arg1 ;
-(BOOL)timed;
@end

