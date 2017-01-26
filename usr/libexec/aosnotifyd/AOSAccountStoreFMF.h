/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <aosnotifyd/AOSAccountStore.h>

@class NSMutableArray, AOSFMFAccount, NSString;

@interface AOSAccountStoreFMF : NSObject <AOSAccountStore> {

	BOOL _refreshAuthTokens;
	NSMutableArray* _accountsList;
	AOSFMFAccount* _currentActiveAccount;

}

@property (nonatomic,retain) NSMutableArray * accountsList;                     //@synthesize accountsList=_accountsList - In the implementation block
@property (assign,nonatomic) BOOL refreshAuthTokens;                            //@synthesize refreshAuthTokens=_refreshAuthTokens - In the implementation block
@property (nonatomic,retain) AOSFMFAccount * currentActiveAccount;              //@synthesize currentActiveAccount=_currentActiveAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadExistingAccounts;
-(void)setCurrentActiveAccount:(AOSFMFAccount *)arg1 ;
-(NSMutableArray *)accountsList;
-(void)setAccountsList:(NSMutableArray *)arg1 ;
-(id)_accountFromACAccount:(id)arg1 ;
-(AOSFMFAccount *)currentActiveAccount;
-(void)_tokensForAccount:(id)arg1 ;
-(BOOL)refreshAuthTokens;
-(void)setRefreshAuthTokens:(BOOL)arg1 ;
-(void)_fetchAppAuthToken:(id)arg1 ;
-(void)_fetchInternalAuthToken:(id)arg1 ;
-(void)dealloc;
-(void)saveChanges;
-(void)removeAccount:(id)arg1 ;
-(id)accounts;
-(void)addAccount:(id)arg1 ;
@end
