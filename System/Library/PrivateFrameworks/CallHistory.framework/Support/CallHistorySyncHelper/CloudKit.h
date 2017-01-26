/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:56:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistorySyncHelper/CloudKitProtocol.h>

@class CKContainer, CKDatabase, CKRecordZone, NSString;

@interface CloudKit : CHSynchronizedLoggable <CloudKitProtocol> {

	CKContainer* _container;
	CKDatabase* _database;
	CKRecordZone* _transactionRecordZone;
	NSString* _transactionRecordType;
	id _observerAccountChangedRef;
	BOOL _isAccountActive;
	NSString* _identity;

}

@property (nonatomic,retain) NSString * identity;                   //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL isAccountActive;                  //@synthesize isAccountActive=_isAccountActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)create;
-(void)queryAccountStatusWithRetryCount:(unsigned)arg1 ;
-(void)retryCloudKitOperationForError:(id)arg1 withRetryCount:(unsigned)arg2 withCallback:(/*^block*/id)arg3 ;
-(void)setupSubscription;
-(void)performInitialSyncIfNeeded:(BOOL)arg1 ;
-(void)createRecordZone:(/*^block*/id)arg1 withRetryCount:(unsigned)arg2 ;
-(void)getUpdatesWithRetryCount:(unsigned)arg1 withQualityOfService:(long long)arg2 withCallback:(/*^block*/id)arg3 ;
-(id)getPreviousChangeToken;
-(void)getUpdatesWithQualityOfService:(long long)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)createRecordZone:(/*^block*/id)arg1 ;
-(void)upload:(id)arg1 withRetryCount:(unsigned)arg2 withCallback:(/*^block*/id)arg3 ;
-(id)createRecord:(id)arg1 ;
-(void)addRecord:(id)arg1 withInsertAndUpdate:(id)arg2 withDelete:(id)arg3 ;
-(void)uploadRecordsToSave:(id)arg1 withRecordsToDelete:(id)arg2 withRetryCount:(unsigned)arg3 withCallback:(/*^block*/id)arg4 ;
-(void)handlePartialUploadFailure:(id)arg1 withUploadRecordsToSave:(id)arg2 withRecordsToDelete:(id)arg3 withRetryCount:(unsigned)arg4 withCallback:(/*^block*/id)arg5 ;
-(void)resolveUploadConflicts:(id)arg1 withInsertAndUpdateRecords:(id)arg2 ;
-(void)queryAccountStatus;
-(void)handleDeviceUnlocked;
-(void)setIsAccountActive:(BOOL)arg1 ;
-(void)setupSubscriptionWithRetryCount:(unsigned)arg1 ;
-(void)upload:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)deleteAndRecreateRecordZone:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(NSString *)identity;
-(void)setIdentity:(NSString *)arg1 ;
-(void)registerForNotifications;
-(BOOL)isAccountActive;
-(void)setAccountActive:(BOOL)arg1 ;
@end
