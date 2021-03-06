/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface AOSAccountManager : NSObject {

	NSDictionary* _accountToStoreMapping;

}

@property (nonatomic,readonly) NSArray * accounts; 
@property (nonatomic,retain) NSDictionary * accountToStoreMapping;              //@synthesize accountToStoreMapping=_accountToStoreMapping - In the implementation block
+(id)sharedInstance;
-(void)loadExistingAccounts;
-(id)allAccountsOfType:(Class)arg1 ;
-(id)activeAccountsOfType:(Class)arg1 ;
-(void)removeInactiveAccount:(id)arg1 ;
-(void)setAccountToStoreMapping:(NSDictionary *)arg1 ;
-(void)storeUpdatedAnAccount:(id)arg1 ;
-(NSDictionary *)accountToStoreMapping;
-(id)_existingAccountInStore:(id)arg1 withUniqueId:(id)arg2 ;
-(void)deactivateAccountOfType:(Class)arg1 havingUniqueId:(id)arg2 ;
-(void)deactivateAllAccountsOfType:(Class)arg1 ;
-(id)accountOfType:(Class)arg1 withUniqueId:(id)arg2 ;
-(void)saveUpdatesToAccount:(id)arg1 ;
-(void)providerUpdatedAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)deactivateAccount:(id)arg1 ;
-(NSArray *)accounts;
-(void)addAccount:(id)arg1 ;
-(id)initSingleton;
@end

