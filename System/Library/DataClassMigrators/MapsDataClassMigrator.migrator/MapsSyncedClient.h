/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
@optional
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2;
-(BOOL)syncShouldUseCustomStore;
-(BOOL)syncInvertedOrdering;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(BOOL)syncShouldUseItemPositions;
-(void)removeSyncedItemsAtIndexes:(id)arg1;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;

@required
-(NSArray *)syncedItems;
-(id)newSyncedItemForSyncData:(id)arg1;
-(BOOL)syncSupportsKVO;
-(NSString *)syncIdentifier;

@end

