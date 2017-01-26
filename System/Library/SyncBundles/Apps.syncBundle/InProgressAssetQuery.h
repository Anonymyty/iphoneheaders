/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/Apps.syncBundle/Apps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface InProgressAssetQuery : LSApplicationWorkspaceObserver {

	NSObject*<OS_dispatch_semaphore> _waitForInitialObservationData;
	NSMutableArray* _inProgressAssetIDs;
	NSMutableArray* _restoringAssetIDs;

}
+(void)currentInProgressAssetIDs:(id*)arg1 restoringAssetIDs:(id*)arg2 ;
-(id)_inProgressAssetIDs;
-(id)_restoringAssetIDs;
-(BOOL)_fetchResults;
-(void)dealloc;
-(id)init;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
@end
