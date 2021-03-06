/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject, NSNumber, LoadDownloadQueueOperation, ISOperationQueue, PerformStaleAutoUpdatesOperation, NSMutableSet, NSSet;

@interface StoreDownloadQueue : NSObject {

	NSMutableOrderedSet* _activeRestoreIDs;
	BOOL _automaticDownloadsAreDisabled;
	BOOL _checkAutomaticDownloadQueueOnEnable;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSNumber* _lastCheckedAccountID;
	LoadDownloadQueueOperation* _loadAutomaticDownloadQueueOperation;
	ISOperationQueue* _operationQueue;
	ISOperationQueue* _restoreOperationQueue;
	BOOL _restoreItemsUnavailableScheduled;
	PerformStaleAutoUpdatesOperation* _staleAutoUpdatesOperation;
	NSMutableSet* _storeQueueRequests;
	NSMutableOrderedSet* _trackedPurchaseDownloadIDs;

}

@property (readonly) NSSet * downloadKindsBeingChecked; 
@property (nonatomic,copy) NSSet * automaticDownloadKinds; 
+(id)sharedDownloadQueue;
+(void)observeXPCServer:(id)arg1 ;
+(void)getAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)reloadFromServerWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)synchronizeAutomaticDownloadKindsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)triggerDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)restoreAllRestorableDownloadsWithReason:(id)arg1 ;
-(void)restoreDownloadsWithIdentifiers:(id)arg1 reason:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)checkAutomaticDownloadQueue;
-(BOOL)checkQueuesWithReason:(id)arg1 ;
-(void)commitAutomaticDownloadKinds:(id)arg1 markAsDirty:(BOOL)arg2 ;
-(void)_accountAuthenticatedNotification:(id)arg1 ;
-(void)_adjustCellularPolicyForAutoUpdates;
-(void)_promptForCellularAutoUpdates;
-(void)_retryCanceledRestoreDownloads;
-(void)_retrySoftFailedRestoreDownloads;
-(id)_automaticDownloadsQueryWithDatabase:(id)arg1 accountID:(id)arg2 ;
-(id)_newQueueRequestsWithReason:(id)arg1 session:(id)arg2 ;
-(void)_addOperationsForRequests:(id)arg1 reason:(id)arg2 ;
-(id)_restorableDownloadsQueryInDatabase:(id)arg1 ;
-(void)_showRestoreItemsUnavailableIfNecessary;
-(void)setAutomaticDownloadKinds:(id)arg1 account:(id)arg2 ;
-(id)_newOperationByCommitingAutomaticDownloadKinds:(id)arg1 account:(id)arg2 ;
-(id)_newSetAutomaticDownloadKindsOperationWithDownloadKinds:(id)arg1 account:(id)arg2 ;
-(id)_newLoadQueueOperationForQueueRequest:(id)arg1 ;
-(id)_newCheckQueueOperationForQueueRequest:(id)arg1 ;
-(void)_setLastCheckedAccountID:(id)arg1 ;
-(id)_downloadQueryWithQueueRequest:(id)arg1 database:(id)arg2 ;
-(id)_validQueueIdentifiers;
-(BOOL)cancelAllRedownloads;
-(void)checkQueuesWithRequest:(id)arg1 ;
-(NSSet *)downloadKindsBeingChecked;
-(void)disableAutomaticDownloadsWithReason:(id)arg1 ;
-(void)enableAutomaticDownloadsWithReason:(id)arg1 ;
-(void)setAutomaticDownloadKinds:(NSSet *)arg1 ;
-(void)scheduleRestoreItemsUnavailableDialog;
-(void)synchronizeAutomaticDownloadKinds;
-(void)dealloc;
-(id)init;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(NSSet *)automaticDownloadKinds;
-(void)_accountStoreChangedNotification:(id)arg1 ;
@end

