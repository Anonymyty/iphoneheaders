/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGetAssetCountsTask;
@class NSObject, NSData, NSString;

@interface CPLPullFromTransportTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _queue;
	NSData* _initialSyncAnchor;
	id<CPLEngineTransportDownloadBatchTask> _downloadTask;
	id<CPLEngineTransportQueryTask> _queryTask;
	id<CPLEngineTransportGetAssetCountsTask> _getAssetCountsTask;
	NSData* _lastKnownSyncAnchor;
	NSString* _clientCacheIdentifier;
	Class _currentQueryClass;
	BOOL _resetSyncAnchor;
	BOOL _ignoreNewBatches;
	BOOL _gotSomeChanges;
	BOOL _shouldGetAssetCounts;
	BOOL _isPostPushPhase;

}

@property (retain) id<CPLPullFromTransportTaskDelegate> delegate; 
@property (assign,nonatomic) BOOL shouldGetAssetCounts;                        //@synthesize shouldGetAssetCounts=_shouldGetAssetCounts - In the implementation block
@property (assign,nonatomic) BOOL isPostPushPhase;                             //@synthesize isPostPushPhase=_isPostPushPhase - In the implementation block
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_launch;
-(void)setShouldGetAssetCounts:(BOOL)arg1 ;
-(void)setIsPostPushPhase:(BOOL)arg1 ;
-(BOOL)_checkStateBeforeContinuingInTransaction:(id)arg1 ;
-(void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 ;
-(void)_launchFetchChangesFromSyncAnchor:(id)arg1 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(BOOL)arg1 ;
-(void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2 ;
-(void)_checkServerFeatureVersion:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldGetAssetCounts;
-(BOOL)isPostPushPhase;
-(id)taskIdentifier;
@end

