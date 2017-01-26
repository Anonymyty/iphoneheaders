/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKBulletinService.h>
#import <gamed/GKBulletinServicePrivate.h>

@protocol GKBulletinServicePrivate <GKBulletinService>
@required
-(oneway void)markAllBadgesAsViewedForType:(unsigned long long)arg1;
-(oneway void)fetchBadgeCountsForBundleID:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)clearBulletinsForReceivedChallenges:(id)arg1;
-(oneway void)clearBulletinsForTurnBasedTurn:(id)arg1 exchangeID:(id)arg2;

@end


@class NSString;

@interface GKBulletinServicePrivate : GKBulletinService <GKBulletinServicePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)interfaceClass;
+(unsigned long long)requiredEntitlements;
-(oneway void)markAllBadgesAsViewedForType:(unsigned long long)arg1 ;
-(oneway void)fetchBadgeCountsForBundleID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)clearBulletinsForReceivedChallenges:(id)arg1 ;
-(oneway void)clearBulletinsForTurnBasedTurn:(id)arg1 exchangeID:(id)arg2 ;
@end
