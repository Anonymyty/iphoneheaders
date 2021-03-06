/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICNoteContainer.h>

@protocol ICNoteContextDelegate;
@class NSManagedObjectContext, ICNotesCrossProcessChangeCoordinator, ICNote, ICSelectorDelayer, NSTimer, NSMutableSet, NSManagedObjectModel, NSPersistentStoreCoordinator, NSNumber, ICAccountUtilities, NSString;

@interface ICNoteContext : NSObject <ICNoteContainer> {

	NSManagedObjectContext* _managedObjectContext;
	BOOL _delaySaving;
	BOOL _didResumeIndexing;
	BOOL _saving;
	id<ICNoteContextDelegate> _delegate;
	ICNotesCrossProcessChangeCoordinator* _crossProcessChangeCoordinator;
	ICNote* _currentNote;
	ICSelectorDelayer* _resumeIndexingDelayer;
	NSTimer* _updateAttachmentLocationsTimer;
	NSMutableSet* _attachmentIdentifersAlreadyCheckedForUpdate;
	unsigned long long _contextOptions;
	NSManagedObjectModel* _managedObjectModel;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _nextIdContext;
	NSNumber* _nextId;
	ICAccountUtilities* _accountUtilities;
	NSTimer* _trashDeletionTimer;
	unsigned long long _changeTrackingDisableLevel;

}

@property (retain) id<ICNoteContextDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ICNotesCrossProcessChangeCoordinator * crossProcessChangeCoordinator;              //@synthesize crossProcessChangeCoordinator=_crossProcessChangeCoordinator - In the implementation block
@property (assign,nonatomic) BOOL delaySaving;                                                                  //@synthesize delaySaving=_delaySaving - In the implementation block
@property (readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain) ICNote * currentNote;                                                              //@synthesize currentNote=_currentNote - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * resumeIndexingDelayer;                                         //@synthesize resumeIndexingDelayer=_resumeIndexingDelayer - In the implementation block
@property (assign,nonatomic) BOOL didResumeIndexing;                                                            //@synthesize didResumeIndexing=_didResumeIndexing - In the implementation block
@property (nonatomic,retain) NSTimer * updateAttachmentLocationsTimer;                                          //@synthesize updateAttachmentLocationsTimer=_updateAttachmentLocationsTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentIdentifersAlreadyCheckedForUpdate;                        //@synthesize attachmentIdentifersAlreadyCheckedForUpdate=_attachmentIdentifersAlreadyCheckedForUpdate - In the implementation block
@property (assign,nonatomic) unsigned long long contextOptions;                                                 //@synthesize contextOptions=_contextOptions - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                                         //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;                         //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (getter=isSaving) BOOL saving;                                                                        //@synthesize saving=_saving - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * nextIdContext;                                            //@synthesize nextIdContext=_nextIdContext - In the implementation block
@property (nonatomic,retain) NSNumber * nextId;                                                                 //@synthesize nextId=_nextId - In the implementation block
@property (nonatomic,retain) ICAccountUtilities * accountUtilities;                                             //@synthesize accountUtilities=_accountUtilities - In the implementation block
@property (nonatomic,retain) NSTimer * trashDeletionTimer;                                                      //@synthesize trashDeletionTimer=_trashDeletionTimer - In the implementation block
@property (assign,nonatomic) unsigned long long changeTrackingDisableLevel;                                     //@synthesize changeTrackingDisableLevel=_changeTrackingDisableLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedContext;
+(id)sharedUserDefaults;
+(id)searchIndexerDataSource;
+(BOOL)handleSaveError:(id)arg1 inContext:(id)arg2 ;
+(BOOL)legacyNotesDisabled;
+(BOOL)updateSharedStateFile:(id)arg1 toState:(BOOL)arg2 error:(id*)arg3 ;
+(void)setLegacyNotesDisabled:(BOOL)arg1 ;
+(id)persistentStoreURL;
+(id)applicationDocumentsURL;
+(void)startSharedContextWithOptions:(unsigned long long)arg1 ;
+(void)clearSharedContext;
+(id)entity:(id)arg1 withUUIDCreatingIfNecessary:(id)arg2 context:(id)arg3 ;
+(id)filenameFromFileWrapper:(id)arg1 ;
+(void)crashThisApp;
-(void)deleteNote:(id)arg1 ;
-(id)accountForLocal;
-(id)addEmptyNote;
-(id)addLocalAccount;
-(id)visibleNoteWithIdentifier:(id)arg1 ;
-(void)setupSyncChangeTracking;
-(void)trackChangesForSync:(id)arg1 ;
-(id)temporaryTextStorageWithAttributedString:(id)arg1 replicaID:(id)arg2 ;
-(id)noteChangeWithType:(short)arg1 folder:(id)arg2 ;
-(BOOL)didMigrateLocalAccount;
-(id)legacyNoteIntegerIdToNoteIdentifierDictionary;
-(void)setNoteContent:(id)arg1 forNote:(id)arg2 isPlainText:(BOOL)arg3 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)setDelegate:(id<ICNoteContextDelegate>)arg1 ;
-(void)dealloc;
-(id<ICNoteContextDelegate>)delegate;
-(void)applicationWillTerminate;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)save:(id*)arg1 ;
-(BOOL)saveImmediately;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)accountName;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)save;
-(BOOL)isDeleted;
-(BOOL)hasValidPersistentStore;
-(BOOL)hasContextOptions:(unsigned long long)arg1 ;
-(void)addOrDeleteLocalAccountIfNecessary;
-(BOOL)hasAnyContextOptions:(unsigned long long)arg1 ;
-(void)setContextOptions:(unsigned long long)arg1 ;
-(void)startSearchIndexerChangeObservingIfNecessary;
-(void)setAccountUtilities:(ICAccountUtilities *)arg1 ;
-(void)setupCrossProcessChangeCoordinator;
-(void)accountsDidChange:(id)arg1 ;
-(void)setupTrashDeletionTimer;
-(void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1 ;
-(BOOL)canTrackChangesForSync;
-(NSTimer *)trashDeletionTimer;
-(id)predicateForCloudSyncingObjectsMarkedForDeletion;
-(id)cloudSyncingObjectsMatchingPredicate:(id)arg1 ;
-(void)purgeDeletedObjects;
-(void)markOldTrashedNotesForDeletion;
-(void)setTrashDeletionTimer:(NSTimer *)arg1 ;
-(void)setSaving:(BOOL)arg1 ;
-(BOOL)delaySaving;
-(id)predicateForSearchableAttachments;
-(BOOL)isSaving;
-(ICAccountUtilities *)accountUtilities;
-(id)primaryICloudACAccount;
-(id)allICloudACAccounts;
-(id)predicateForVisibleNotes;
-(id)predicateForSearchableNotes;
-(id)fetchedResultsControllerForFetchRequest:(id)arg1 sectionNameKeyPath:(id)arg2 ;
-(id)newFetchedResultsControllerForAllNoteContainersWithPredicate:(id)arg1 ;
-(id)predicateForRegularFoldersAndAccounts;
-(void)createPersistentStore;
-(id)coordinatorOptions;
-(BOOL)hasPersistentStoreURL;
-(BOOL)isSingleRunningNotesApp;
-(void)setCrossProcessChangeCoordinator:(ICNotesCrossProcessChangeCoordinator *)arg1 ;
-(id)titleForNavigationBar;
-(void)ensureNextIdContext;
-(id)getNextIdObject;
-(unsigned long long)contextOptions;
-(unsigned long long)changeTrackingDisableLevel;
-(void)setChangeTrackingDisableLevel:(unsigned long long)arg1 ;
-(BOOL)noteIsVisible:(id)arg1 ;
-(id)visibleNotes;
-(unsigned long long)visibleNotesCount;
-(id)titleForTableViewCell;
-(BOOL)supportsEditingNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)addInviteWithUUID:(id)arg1 andTitle:(id)arg2 fromPerson:(id)arg3 ;
-(void)refreshAll;
-(void)refreshForCrossProcessNotifications;
-(id)visibleNotesForIntegerIds:(id)arg1 ;
-(id)predicateForAttachmentsInAccount:(id)arg1 ;
-(id)newFetchedResultsControllerForAllAccounts;
-(id)newFetchedResultsControllerForAllFoldersIncludingHiddenNoteContainers:(BOOL)arg1 ;
-(id)newFetchedResultsControllerForAllRegularFoldersAndAccounts;
-(id)appURLForFolderList;
-(BOOL)isShowFolderListURL:(id)arg1 ;
-(id)appURLForNote:(id)arg1 ;
-(id)predicateForNoteMentionedInURL:(id)arg1 ;
-(id)newWorkerManagedObjectContext;
-(void)vacuumStore;
-(void)addPersistentStoreIfNeeded;
-(void)purgeEverything;
-(void)deleteEverything;
-(void)sendDeltasForNote:(id)arg1 ;
-(id)nextIndex;
-(void)postMoveUpdateChangeCountForNote:(id)arg1 ;
-(void)disableChangeTracking;
-(void)enableChangeTracking;
-(BOOL)isChangeTrackingDisabled;
-(ICNotesCrossProcessChangeCoordinator *)crossProcessChangeCoordinator;
-(void)setDelaySaving:(BOOL)arg1 ;
-(ICNote *)currentNote;
-(void)setCurrentNote:(ICNote *)arg1 ;
-(ICSelectorDelayer *)resumeIndexingDelayer;
-(void)setResumeIndexingDelayer:(ICSelectorDelayer *)arg1 ;
-(BOOL)didResumeIndexing;
-(void)setDidResumeIndexing:(BOOL)arg1 ;
-(NSTimer *)updateAttachmentLocationsTimer;
-(void)setUpdateAttachmentLocationsTimer:(NSTimer *)arg1 ;
-(NSMutableSet *)attachmentIdentifersAlreadyCheckedForUpdate;
-(void)setAttachmentIdentifersAlreadyCheckedForUpdate:(NSMutableSet *)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)nextIdContext;
-(void)setNextIdContext:(NSManagedObjectContext *)arg1 ;
-(NSNumber *)nextId;
-(void)setNextId:(NSNumber *)arg1 ;
@end

