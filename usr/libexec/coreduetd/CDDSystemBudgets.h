/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, CDD, NSMutableArray, NSObject;

@interface CDDSystemBudgets : NSObject {

	NSDictionary* systemBudgetIdMapper;
	CDD* cdd;
	NSMutableArray* systemBudgets;
	unsigned long long baseBudgetId;
	double cellMultiplier;
	double wifiMultiplier;
	double btMultiplier;
	NSObject*<OS_dispatch_queue> systemBudgetQueue;
	unsigned budgetVersion;

}

@property (nonatomic,readonly) unsigned long long baseBudgetId; 
@property (nonatomic,readonly) double cellMultiplier; 
@property (nonatomic,readonly) double wifiMultiplier; 
@property (nonatomic,readonly) double btMultiplier; 
@property (nonatomic,readonly) unsigned budgetVersion; 
-(id)initWithCDDinstance:(id)arg1 ;
-(double)wifiMultiplier;
-(double)cellMultiplier;
-(long long)dailyValueOfSystemBudget:(id)arg1 ;
-(void)changeDailyValueOfSystemBudget:(id)arg1 byAmount:(long long)arg2 ;
-(id)remapBudgetName:(id)arg1 clientId:(unsigned long long)arg2 ;
-(double)btMultiplier;
-(void)iterateBudgets:(/*^block*/id)arg1 ;
-(unsigned long long)baseBudgetId;
-(void)reloadBudgetParameters;
-(unsigned)budgetVersion;
-(void)populateBudgetParameters;
-(void)populateOneBudgetParam:(id)arg1 budget:(id)arg2 ;
-(void)populateDeviceOverride:(id)arg1 budget:(id)arg2 ;
@end

