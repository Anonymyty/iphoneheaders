/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKUtilityService.h>
#import <gamed/GKUtilityServicePrivate.h>

@protocol GKUtilityServicePrivate <GKUtilityService>
@required
-(oneway void)openSettings;
-(oneway void)pingWithHandler:(/*^block*/id)arg1;
-(oneway void)updateNotificationTopics;
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)refreshPreferences;
-(oneway void)terminate;

@end


@class NSString;

@interface GKUtilityServicePrivate : GKUtilityService <GKUtilityServicePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)interfaceClass;
+(unsigned long long)requiredEntitlements;
-(oneway void)openSettings;
-(oneway void)pingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)updateNotificationTopics;
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)refreshPreferences;
-(oneway void)terminate;
@end
