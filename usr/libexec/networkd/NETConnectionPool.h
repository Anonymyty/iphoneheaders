/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/networkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSMutableArray;

@interface NETConnectionPool : NSObject {

	unsigned _evaluateOutstanding;
	NSString* _name;
	unsigned long long _limit;
	NSMutableSet* _allConnections;
	NSMutableArray* _runningConnectionSortedList;
	NSMutableArray* _pendingEvaluationConnectionSortedList;
	NSMutableSet* _unevaluatedConnections;

}

@property (retain) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long limit;                                            //@synthesize limit=_limit - In the implementation block
@property (assign) unsigned evaluateOutstanding;                                        //@synthesize evaluateOutstanding=_evaluateOutstanding - In the implementation block
@property (retain) NSMutableSet * allConnections;                                       //@synthesize allConnections=_allConnections - In the implementation block
@property (retain) NSMutableArray * runningConnectionSortedList;                        //@synthesize runningConnectionSortedList=_runningConnectionSortedList - In the implementation block
@property (retain) NSMutableArray * pendingEvaluationConnectionSortedList;              //@synthesize pendingEvaluationConnectionSortedList=_pendingEvaluationConnectionSortedList - In the implementation block
@property (retain) NSMutableSet * unevaluatedConnections;                               //@synthesize unevaluatedConnections=_unevaluatedConnections - In the implementation block
+(id)getPoolDump;
+(void)setupPools;
+(BOOL)configurePool:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)getPoolForName:(id)arg1 ;
+(void)incrementAllPoolsEvaluationOutstanding;
+(void)decrementAllPoolsEvaluationOutstanding;
+(BOOL)removeFromGlobalList:(id)arg1 ;
+(id)getGlobalPoolList;
+(BOOL)addToGlobalList:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned)evaluateOutstanding;
-(void)setEvaluateOutstanding:(unsigned)arg1 ;
-(void)handleConnectionDidAttemptAndFail:(id)arg1 ;
-(void)evaluatePoolPriorityForConnection:(id)arg1 ;
-(void)incrementPoolEvaluateOutstanding;
-(void)decrementPoolEvaluateOutstanding;
-(void)setAllConnections:(NSMutableSet *)arg1 ;
-(void)setRunningConnectionSortedList:(NSMutableArray *)arg1 ;
-(void)setPendingEvaluationConnectionSortedList:(NSMutableArray *)arg1 ;
-(void)setUnevaluatedConnections:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allConnections;
-(NSMutableArray *)runningConnectionSortedList;
-(BOOL)hasAvailableSlotsForIdleConnections;
-(NSMutableArray *)pendingEvaluationConnectionSortedList;
-(void)evaluateIdleConnectionsWithExclusionList:(id)arg1 ;
-(NSMutableSet *)unevaluatedConnections;
-(void)evaluatePriorityForPendingConnections;
-(id)initWithName:(id)arg1 limit:(unsigned long long)arg2 ;
-(void)handlePoolConfigurationChanged;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end
