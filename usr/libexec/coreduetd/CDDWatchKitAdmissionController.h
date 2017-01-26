/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/coreduetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDate, CDD, NSObject;

@interface CDDWatchKitAdmissionController : NSObject {

	NSMutableDictionary* recentBundles;
	NSMutableDictionary* watchkitAppCache;
	NSDate* lastBudgetRefill;
	CDD* cdd;
	NSObject*<OS_dispatch_queue> watchkitQueue;
	NSDate* lastPeriodStart;
	int budgetForThisPeriod;

}
-(id)initWithCDDinstance:(id)arg1 ;
-(id)companionBundleFromWatchBundle:(id)arg1 ;
-(BOOL)isWatchkitApp:(id)arg1 ;
-(BOOL)watchKitSignoffForDevice:(id)arg1 bundles:(id)arg2 admissionOptions:(id)arg3 isWatchkitApp:(BOOL*)arg4 validityPeriod:(unsigned long long*)arg5 ;
-(void)bundleBackgrounded:(id)arg1 onDevice:(id)arg2 ;
-(id)watchkitCompanionBundle:(id)arg1 ;
@end
