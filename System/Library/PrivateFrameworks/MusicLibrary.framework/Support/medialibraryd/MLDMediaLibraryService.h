/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:17:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <medialibraryd/MLDMediaLibraryWriterDelegate.h>
#import <medialibraryd/ML3MusicLibraryDelegate.h>
#import <libobjc.A.dylib/MLMediaLibraryServiceProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, MLDMediaLibraryWriter, MLDDatabaseImportManager, MLDCacheDeleteController, NSOperationQueue, NSTimer, NSString, NSMutableSet, NSLock;

@interface MLDMediaLibraryService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, MLDMediaLibraryWriterDelegate, ML3MusicLibraryDelegate, MLMediaLibraryServiceProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _spotlightIndexQueue;
	NSObject*<OS_dispatch_queue> _writerBeginTransactionQueue;
	NSObject*<OS_dispatch_queue> _writerUpdateQueue;
	NSXPCListener* _xpcListener;
	NSMutableDictionary* _xpcTransactions;
	NSMutableDictionary* _xpcClients;
	MLDMediaLibraryWriter* _writer;
	MLDDatabaseImportManager* _importManager;
	MLDCacheDeleteController* _cacheDeleteController;
	NSOperationQueue* _validationOperationQueue;
	int _languageChangeNotifyToken;
	int _springboardFinishedStartupNotifyToken;
	int _homeSharingCachesClearedNotifyToken;
	NSObject*<OS_dispatch_source> _signalDispatchSource;
	NSObject*<OS_dispatch_source> _spotlightIndexCoalescingTimer;
	NSTimer* _idleTimer;
	NSMutableDictionary* _mediaLibraries;
	NSString* _deviceSharedLibraryPath;
	NSMutableSet* _validatedDatabasePaths;
	NSLock* _validationEntryLock;
	BOOL _databaseLocked;
	NSString* _currentLockReason;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_registerForLanguageChangeNotifications;
-(void)_registerForHomeSharingCacheNotifications;
-(void)_registerForLibraryContentChangeNotifications;
-(void)_tearDownLanguageChangeNotifications;
-(void)_tearDownHomeSharingCacheNotifications;
-(void)_tearDownLibraryContentsDidChangeNotification;
-(void)_stopIdleTimer;
-(id)_mediaLibraryForPath:(id)arg1 ;
-(id)_currentXPCClient;
-(void)_setXPCTransaction:(id)arg1 forDatabaseTransactionIdentifier:(id)arg2 ;
-(id)_xpcTransactionForDatabaseTransactionIdentifier:(id)arg1 ;
-(id)_allMediaLibraries;
-(id)_deviceSharedLibraryPath;
-(void)_handleXPCDisconnect:(id)arg1 ;
-(void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1 ;
-(void)_setupNotifyEventHandlers;
-(void)_setupActivityHandlers;
-(void)_setupCacheDeleteController;
-(void)_setupXPCListener;
-(void)_performMaintenanceWithActivity:(id)arg1 ;
-(id)_clientForConnection:(id)arg1 ;
-(void)_exitForLocalizationChange;
-(void)_processLocalizationChange;
-(void)_handleHomeSharingCachesClearedNotification;
-(void)_handleLibraryContentsDidChangeNotification:(id)arg1 ;
-(void)_handleDebugSignal;
-(void)_idleTimerFired:(id)arg1 ;
-(void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2 ;
-(void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2 ;
-(void)getDeviceSharedLibraryPath:(/*^block*/id)arg1 ;
-(void)setDeviceSharedLibraryPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setOptions:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)lockDatabaseForReason:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)unlockDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(void)getLanguageResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_resetIdleTimer;
-(void)_startIdleTimer;
@end
