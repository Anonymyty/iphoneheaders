/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSDate, NSString, PCPersistentTimer, NSObject;

@interface CUPersistentTimer : NSObject {

	NSDate* _cachedDate;
	double _cachedInterval;
	double _cachedLeeway;
	BOOL _cachedRepeating;
	BOOL _cachedUseXPC;
	BOOL _cachedWakeSystem;
	NSString* _identifier;
	BOOL _invalidateCalled;
	PCPersistentTimer* _pcPersistentTimer;
	LogCategory* _ucat;
	BOOL _xpcRegistered;
	BOOL _repeating;
	BOOL _useXPC;
	BOOL _wakeSystem;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _date;
	double _interval;
	double _leeway;
	/*^block*/id _invalidationHandler;
	/*^block*/id _timerHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double interval;                                         //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) double leeway;                                           //@synthesize leeway=_leeway - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) BOOL repeating;                                          //@synthesize repeating=_repeating - In the implementation block
@property (nonatomic,copy) id timerHandler;                                           //@synthesize timerHandler=_timerHandler - In the implementation block
@property (assign,nonatomic) BOOL useXPC;                                             //@synthesize useXPC=_useXPC - In the implementation block
@property (assign,nonatomic) BOOL wakeSystem;                                         //@synthesize wakeSystem=_wakeSystem - In the implementation block
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(NSDate *)date;
-(void)_start;
-(void)start;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(void)setLeeway:(double)arg1 ;
-(double)leeway;
-(void)setTimerHandler:(id)arg1 ;
-(id)timerHandler;
-(void)_pcTimerFired:(id)arg1 ;
-(void)_xpcTimerFired:(id)arg1 ;
-(void)_startXPCActivity;
-(void)setWakeSystem:(BOOL)arg1 ;
-(void)_startPCPersistentTimer;
-(BOOL)wakeSystem;
-(BOOL)useXPC;
-(void)setUseXPC:(BOOL)arg1 ;
-(void)setRepeating:(BOOL)arg1 ;
-(BOOL)repeating;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
