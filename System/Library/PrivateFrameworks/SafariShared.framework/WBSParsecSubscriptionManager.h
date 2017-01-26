/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSSSSubscriptionManagerInternal, NSMutableDictionary, NSArray;

@interface WBSParsecSubscriptionManager : NSObject {

	PSSSSubscriptionManagerInternal* _thirdPartySubscriptionManager;
	NSMutableDictionary* _subscriptionsByProvider;
	BOOL _needsUpdate;

}

@property (nonatomic,readonly) NSArray * subscriptionDictionaries; 
@property (nonatomic,readonly) BOOL needsUpdate;                                //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_init;
-(void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(NSArray *)subscriptionDictionaries;
-(void)_updateFuseSubscription;
-(void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)arg1 domainWhitelist:(id)arg2 maximumExpirationLimit:(double)arg3 ;
-(void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 ;
-(void)removeSubscriptionsAddedAfterDate:(id)arg1 ;
-(BOOL)needsUpdate;
@end
