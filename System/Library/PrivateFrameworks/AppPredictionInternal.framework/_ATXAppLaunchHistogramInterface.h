/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ATXAppLaunchHistogramInterface
@required
-(BOOL)removeAllHistoryForBundleId:(id)arg1;
-(void)decayByFactor:(double)arg1;
-(void)decayWithHalfLife:(double)arg1;
-(void)resetData;
-(void)addLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
-(void)removeLaunchWithBundleId:(id)arg1 withDate:(id)arg2 timeZone:(id)arg3;
-(double)launchPopularityWithBundleId:(id)arg1 date:(id)arg2;
-(double)relativeLaunchPopularityWithBundleId:(id)arg1 date:(id)arg2;
-(double)overallLaunchPopularityForBundleId:(id)arg1;
-(BOOL)bundleHasBeenLaunched:(id)arg1;
-(void)verifyDataIntegrity;

@end
