/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSLock, _CATObserverManager, NSUUID, NSDate, NSError, NSDictionary;

@interface CATOperation : NSOperation {

	NSArray* mCallStackSymbols;
	int mState;
	NSLock* mLock;
	_CATObserverManager* mObserverManager;
	BOOL _canCancel;
	NSUUID* _UUID;
	NSDate* _createdDate;
	NSDate* _enqueuedDate;
	NSDate* _startedDate;
	NSDate* _finishedDate;
	unsigned long long _phase;
	NSError* _error;
	id _resultObject;
	NSDictionary* _userInfo;
	long long _completedUnitCount;
	long long _totalUnitCount;

}

@property (retain) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (retain) NSDate * createdDate;                      //@synthesize createdDate=_createdDate - In the implementation block
@property (retain) NSDate * enqueuedDate;                     //@synthesize enqueuedDate=_enqueuedDate - In the implementation block
@property (retain) NSDate * startedDate;                      //@synthesize startedDate=_startedDate - In the implementation block
@property (retain) NSDate * finishedDate;                     //@synthesize finishedDate=_finishedDate - In the implementation block
@property (assign) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
@property (retain) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (retain) id resultObject;                           //@synthesize resultObject=_resultObject - In the implementation block
@property (retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) BOOL isCanceled; 
@property (readonly) BOOL canCancel;                          //@synthesize canCancel=_canCancel - In the implementation block
@property (assign) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
+(id)callStackSymbols;
+(BOOL)isCancelable;
+(BOOL)automaticallyNotifiesObserversOfUUID;
+(BOOL)automaticallyNotifiesObserversOfCreatedDate;
+(BOOL)automaticallyNotifiesObserversOfEnqueuedDate;
+(BOOL)automaticallyNotifiesObserversOfStartedDate;
+(BOOL)automaticallyNotifiesObserversOfFinishedDate;
+(id)keyPathsForValuesAffectingIsCanceled;
-(void)waitUntilFinished;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(void)removeDependency:(id)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)cancel;
-(id)init;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSUUID *)UUID;
-(void)start;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isCanceled;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)canCancel;
-(void)addDependency:(id)arg1 ;
-(void)endOperationWithError:(id)arg1 ;
-(void)endOperationWithResultObject:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 forOperationEvents:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(id)stateDescription;
-(void)setEnqueuedDate:(NSDate *)arg1 ;
-(void)operationWillStart;
-(void)setStartedDate:(NSDate *)arg1 ;
-(void)endOperationSuccessfullyIfNeeded;
-(void)finalizeOperation;
-(void)setResultObject:(id)arg1 ;
-(void)operationWillFinish;
-(void)setFinishedDate:(NSDate *)arg1 ;
-(void)operationDidFinish;
-(void)operationWillEnqueueOntoOperationQueue:(id)arg1 ;
-(NSDate *)enqueuedDate;
-(NSDate *)startedDate;
-(NSDate *)finishedDate;
-(id)resultObject;
@end

