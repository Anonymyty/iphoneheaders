/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDictionary, HKCorrelationType;

@interface HKCorrelationQuery : HKQuery {

	NSDictionary* _samplePredicates;
	/*^block*/id _completionHandler;
	NSDictionary* _filterDictionary;
	long long _behaviorVersion;

}

@property (copy,readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSDictionary * samplePredicates; 
@property (nonatomic,readonly) id completionHandler;                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSDictionary * filterDictionary;                                                          //@synthesize filterDictionary=_filterDictionary - In the implementation block
@property (assign,setter=_setBehaviorVersion:,getter=_behaviorVersion,nonatomic) long long behaviorVersion;              //@synthesize behaviorVersion=_behaviorVersion - In the implementation block
+(Class)_queryServerDataObjectClass;
-(id)completionHandler;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_validate;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 withAnchor:(id)arg3 forQuery:(id)arg4 ;
-(id)_predicateFilterClasses;
-(id)initWithType:(id)arg1 predicate:(id)arg2 samplePredicates:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSDictionary *)samplePredicates;
-(HKCorrelationType *)correlationType;
-(long long)_behaviorVersion;
-(void)_setBehaviorVersion:(long long)arg1 ;
-(NSDictionary *)filterDictionary;
@end
