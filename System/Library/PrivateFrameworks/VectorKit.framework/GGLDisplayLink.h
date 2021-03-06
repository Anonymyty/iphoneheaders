/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class CADisplayLink, CADisplay;

@interface GGLDisplayLink : NSObject {

	SEL _selector;
	geo_weak_ptr<id> _target;
	CADisplayLink* _displayLink;
	CADisplay* _display;
	long long _frameInterval;
	long long _skippedFrames;
	BOOL _paused;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,retain) CADisplay * display;                      //@synthesize display=_display - In the implementation block
-(void)dealloc;
-(double)timestamp;
-(void)invalidate;
-(CADisplay *)display;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)target;
-(void)setFrameInterval:(long long)arg1 ;
-(long long)frameInterval;
-(void)setPaused:(BOOL)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)isPaused;
-(void)setDisplay:(CADisplay *)arg1 ;
@end

