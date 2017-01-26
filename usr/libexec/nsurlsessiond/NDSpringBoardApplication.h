/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nsurlsessiond/NDApplication.h>
#import <nsurlsessiond/NDSpringBoardAppObserver.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface NDSpringBoardApplication : NDApplication <NDSpringBoardAppObserver> {

	NSObject*<OS_dispatch_source> _delayTimer;
	NSObject*<OS_dispatch_source> _nonDiscretionaryGracePeriodTimer;
	NDSpringBoardApplication* _containingApplication;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestDelayQueue;
-(BOOL)wakeForSessionIdentifier:(id)arg1 ;
-(BOOL)canBeSuspended;
-(BOOL)supportsWakes;
-(BOOL)isHandlingBackgroudURLSessionWithIdentifier:(id)arg1 ;
-(BOOL)hasForegroundBackgroundStates;
-(BOOL)hasBackgroundTaskCompletion;
-(void)applicationWasQuitFromAppSwitcher:(id)arg1 ;
-(void)applicationWasSuspended:(id)arg1 ;
-(void)applicationEnteredForeground:(id)arg1 ;
-(void)applicationNoLongerInForeground:(id)arg1 ;
-(BOOL)isAwake;
-(void)_onqueue_resetRequestDelay;
-(void)setupDelayTimer;
-(void)applicationBackgroundUpdatesTurnedOff:(id)arg1 ;
-(id)containerURL;
-(BOOL)isSuspended;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isForeground;
-(BOOL)isBeingDebugged;
@end
