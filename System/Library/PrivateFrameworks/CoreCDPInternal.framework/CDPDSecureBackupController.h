/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPStateUIProviderInternal, CDPDSecureBackupDelegate, CDPDSecureBackupProxy;
@class CDPContext, NSDictionary;

@interface CDPDSecureBackupController : NSObject {

	BOOL _fakeNearlyDepletedRecords;
	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPDSecureBackupDelegate> _delegate;
	NSDictionary* _cachedAccountInfo;
	NSDictionary* _cachedAccountLockoutInfo;
	id<CDPDSecureBackupProxy> _secureBackupProxy;

}

@property (nonatomic,readonly) CDPContext * context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CDPStateUIProviderInternal> uiProvider;                 //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<CDPDSecureBackupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedAccountInfo;                            //@synthesize cachedAccountInfo=_cachedAccountInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedAccountLockoutInfo;                     //@synthesize cachedAccountLockoutInfo=_cachedAccountLockoutInfo - In the implementation block
@property (assign,nonatomic) BOOL fakeNearlyDepletedRecords;                              //@synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords - In the implementation block
@property (nonatomic,retain) id<CDPDSecureBackupProxy> secureBackupProxy;                 //@synthesize secureBackupProxy=_secureBackupProxy - In the implementation block
+(id)_sanitizedInfoDictionary:(id)arg1 ;
-(id)init;
-(id<CDPDSecureBackupDelegate>)delegate;
-(CDPContext *)context;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3 ;
-(void)enableSecureBackupRemovingExistingRecordWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)checkForExistingRecord:(/*^block*/id)arg1 ;
-(void)backupRecordsArePresentWithCompletion:(/*^block*/id)arg1 ;
-(void)accountInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_accountInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fakeNearlyDepletedRecords;
-(id)_dateWithSecureBackupDateString:(id)arg1 ;
-(void)deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)getBackupRecordDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)disableSecureBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)_authenticatedEnableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(void)_recoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_authenticatedRecoverSecureBackupWithSecret:(id)arg1 isSilentAttempt:(BOOL)arg2 device:(id)arg3 useCachedSecret:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)_deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableSecureBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)setBackoffDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_setBackoffDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resetAccountLockOutWithCompletion:(/*^block*/id)arg1 ;
-(void)accountLockoutInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_accountLockoutInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)synchronizeKeyValueStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)isEligibleForCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)cdpBackupRecordsArePresentWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithSecret:(id)arg1 secretType:(unsigned long long)arg2 useCachedSecret:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)attemptSilentRecoveryWithLocalSecret:(id)arg1 useCachedSecret:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)recoverSecureBackupWithSecret:(id)arg1 device:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)lockAccountOutWithCompletion:(/*^block*/id)arg1 ;
-(void)isAccountLockedWithShouldReset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)cachedAccountInfo;
-(void)setCachedAccountInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedAccountLockoutInfo;
-(void)setCachedAccountLockoutInfo:(NSDictionary *)arg1 ;
-(void)setFakeNearlyDepletedRecords:(BOOL)arg1 ;
-(id<CDPDSecureBackupProxy>)secureBackupProxy;
-(void)setSecureBackupProxy:(id<CDPDSecureBackupProxy>)arg1 ;
@end

