/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKLinkedAccountsService.h>
#import <gamed/GKLinkedAccountsServicePrivate.h>

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
@required
-(oneway void)connectExternalService:(char)arg1 handler:(/*^block*/id)arg2;
-(oneway void)disconnectExternalService:(char)arg1 handler:(/*^block*/id)arg2;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/id)arg1;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/id)arg1;
-(oneway void)getAuthTokenForExternalService:(char)arg1 handler:(/*^block*/id)arg2;

@end


@class NSString;

@interface GKLinkedAccountsServicePrivate : GKLinkedAccountsService <GKLinkedAccountsServicePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)interfaceClass;
+(unsigned long long)requiredEntitlements;
-(void)refreshRecommendationsWithHandler:(/*^block*/id)arg1 ;
-(void)setUserID:(id)arg1 forService:(char)arg2 ;
-(void)addLinkedAccountForService:(char)arg1 userID:(id)arg2 userName:(id)arg3 authToken:(id)arg4 syncContacts:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)linkFacebookAccountWithHandler:(/*^block*/id)arg1 ;
-(void)linkICloudAccountWithHandler:(/*^block*/id)arg1 ;
-(void)removeLinkedAccountForService:(char)arg1 userID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)permittedToLinkToAccountType:(id)arg1 accountStore:(id)arg2 ;
-(oneway void)connectExternalService:(char)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)disconnectExternalService:(char)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/id)arg1 ;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/id)arg1 ;
-(oneway void)getAuthTokenForExternalService:(char)arg1 handler:(/*^block*/id)arg2 ;
@end
