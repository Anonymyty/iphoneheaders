/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <pipelined/MonotonicTimerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AbstractMonotonicTimer : NSObject <MonotonicTimerProtocol> {

	duration<long long, std::__1::ratio<1, 1000000000> > _delay;
	duration<long long, std::__1::ratio<1, 1000000000> > _interval;
	NSObject*<OS_dispatch_queue> _q;
	NSObject*<OS_dispatch_queue> _handlerQ;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) duration<long long delay; 
@property (assign,nonatomic) duration<long long interval; 
@property (assign,nonatomic) double delayTimeInterval; 
@property (assign,nonatomic) double intervalTimeInterval; 
-(void)onQueueInvalidate;
-(void)implOnQueuePause;
-(void)implOnQueueResume;
-(void)implOnQueueUpdateTimer;
-(void)onQueueTick;
-(void)abstractFunctionCalled:(SEL)arg1 ;
-(double)delayTimeInterval;
-(void)setDelayTimeInterval:(double)arg1 ;
-(double)intervalTimeInterval;
-(void)setIntervalTimeInterval:(double)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(id)init;
-(void)invalidate;
-(duration<long long)delay;
-(void)setDelay:(duration<long long)arg1 ;
-(void)resume;
-(id)initWithName:(id)arg1 ;
-(void)setInterval:(duration<long long)arg1 ;
-(duration<long long)interval;
-(void)pause;
@end

