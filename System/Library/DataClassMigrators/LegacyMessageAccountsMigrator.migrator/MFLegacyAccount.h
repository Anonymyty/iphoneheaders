/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:26:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/LegacyMessageAccountsMigrator.migrator/LegacyMessageAccountsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSDictionary, NSString;

@interface MFLegacyAccount : NSObject {

	ACAccount* _migratedAccount;
	NSDictionary* _legacyProperties;
	NSString* _parentAccountIdentifier;
	BOOL _parentAccountIsActive;

}

@property (nonatomic,readonly) NSDictionary * legacyProperties;              //@synthesize legacyProperties=_legacyProperties - In the implementation block
@property (nonatomic,copy) NSString * parentAccountIdentifier;               //@synthesize parentAccountIdentifier=_parentAccountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL parentAccountIsActive;                     //@synthesize parentAccountIsActive=_parentAccountIsActive - In the implementation block
+(id)legacyAccountsWithAccountSettings:(id)arg1 ;
+(id)_copyLegacyAccountsWithAccountSettings:(id)arg1 allowedLegacyAccountTypes:(id)arg2 ;
+(BOOL)_isActiveWithLegacyProperties:(id)arg1 ;
-(NSDictionary *)legacyProperties;
-(void)setParentAccountIdentifier:(NSString *)arg1 ;
-(void)_configurePersistentAccount:(id)arg1 withParentAccount:(id)arg2 ;
-(id)_accountTypeIdentifier;
-(id)performMigrationWithAccountStore:(id)arg1 ;
-(void)setParentAccountIsActive:(BOOL)arg1 ;
-(id)initWithLegacyProperties:(id)arg1 allowedLegacyAccountTypes:(id)arg2 ;
-(void)_setActiveForAccount:(id)arg1 ;
-(BOOL)_isMailAccountClass:(id)arg1 ;
-(BOOL)parentAccountIsActive;
-(BOOL)isValidDefaultSendingAccount;
-(id)initWithLegacyProperties:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)parentAccountIdentifier;
-(BOOL)_isActive;
@end
