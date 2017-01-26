/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLCloudLegacyScenario, PLCloudScenarioExecutionResult;

@interface PLCloudExecutingScenario : NSObject {

	PLCloudLegacyScenario* _scenario;
	/*^block*/id _completionCallback;
	PLCloudScenarioExecutionResult* _executionState;

}

@property (nonatomic,retain) PLCloudLegacyScenario * scenario;                             //@synthesize scenario=_scenario - In the implementation block
@property (nonatomic,copy) id completionCallback;                                          //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,retain) PLCloudScenarioExecutionResult * executionState;              //@synthesize executionState=_executionState - In the implementation block
-(void)dealloc;
-(PLCloudLegacyScenario *)scenario;
-(void)setScenario:(PLCloudLegacyScenario *)arg1 ;
-(id)completionCallback;
-(void)setCompletionCallback:(id)arg1 ;
-(PLCloudScenarioExecutionResult *)executionState;
-(void)setExecutionState:(PLCloudScenarioExecutionResult *)arg1 ;
@end
