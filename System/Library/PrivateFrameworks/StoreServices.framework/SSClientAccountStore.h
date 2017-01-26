/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSAccountStore.h>

@class NSArray;

@interface SSClientAccountStore : SSAccountStore {

	NSArray* _accounts;
	BOOL _accountsValid;

}

@property (copy) NSArray * accounts; 
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2 ;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(BOOL)sdk_hasActiveLockerAccount;
-(id)_accountsFromDaemon;
-(void)_reloadAccountsIfNeeded;
-(id)_addAccount:(id)arg1 asActiveAccount:(BOOL)arg2 activeLockerAccount:(BOOL)arg3 ;
-(id)_accountWithUniqueIdentifier:(id)arg1 ;
-(void)_invalidateAccounts;
-(void)updateAccountsWithMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_signOutWithAccountIDs:(id)arg1 ;
-(id)_copyDaemonAccounts;
-(id)_copyReloadedAccounts;
-(void)dealloc;
-(id)init;
-(id)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(NSArray *)accounts;
-(id)setActiveAccount:(id)arg1 ;
-(id)setActiveLockerAccount:(id)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(id)activeAccount;
-(id)addAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)reloadAccounts;
@end
