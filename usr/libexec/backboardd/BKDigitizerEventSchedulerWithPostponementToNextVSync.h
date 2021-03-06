/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/backboardd-Structs.h>
#import <backboardd/BKDigitizerEventSchedulerWithDisplayLink.h>

@class NSMutableArray;

@interface BKDigitizerEventSchedulerWithPostponementToNextVSync : BKDigitizerEventSchedulerWithDisplayLink {

	NSMutableArray* _blocks;
	BOOL _dispatchingTouchesOnDisplayLink;
	double _currentTime;

}

@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
-(double)_thread_positionWithinCurrentFrameAtTime:(double)arg1 duration:(double*)arg2 ;
-(void)_thread_dispatchPendingEvents:(id)arg1 ;
-(BOOL)_thread_shouldDispatchUsingDisplayLinkAtTime:(double)arg1 ;
-(void)_thread_dispatchEventBlockAtNextVSync:(/*^block*/id)arg1 ;
-(void)_thread_dispatchEventBlockImmediately:(/*^block*/id)arg1 ;
-(void)_thread_displayLinkFired:(id)arg1 ;
-(void)_thread_scheduleEventWithBlock:(/*^block*/id)arg1 event:(IOHIDEventRef)arg2 clientTaskPort:(unsigned)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
@end

