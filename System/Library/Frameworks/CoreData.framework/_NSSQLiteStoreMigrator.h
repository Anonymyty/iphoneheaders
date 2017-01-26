/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLCore, NSSQLModel, NSSQLAdapter, NSMappingModel, NSSQLConnection, NSMutableDictionary, NSMutableArray;

@interface _NSSQLiteStoreMigrator : NSObject {

	NSSQLCore* _store;
	NSSQLModel* _dstModel;
	NSSQLModel* _srcModel;
	NSSQLAdapter* _adapter;
	NSMappingModel* _mappingModel;
	NSSQLConnection* _connection;
	NSMutableDictionary* _reindexedEntities;
	NSMutableDictionary* _reindexedPropertiesByEntity;
	NSMutableDictionary* _sourceToDestinationEntityMap;
	NSMutableDictionary* _addedEntityMigrations;
	NSMutableDictionary* _removedEntityMigrations;
	NSMutableDictionary* _transformedEntityMigrations;
	NSMutableDictionary* _copiedEntityMigrations;
	NSMutableDictionary* _tableMigrationDescriptionsByEntity;
	BOOL _hasPKTableChanges;
	NSMutableArray* _pkTableUpdateStatements;

}

@property (readonly) NSSQLAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
+(BOOL)_annotatesMigrationMetadata;
+(void)_setAnnotatesMigrationMetadata:(BOOL)arg1 ;
-(NSSQLAdapter *)adapter;
-(id)initWithStore:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 ;
-(BOOL)performMigration:(id*)arg1 ;
-(id)entityMigrationDescriptionForEntity:(id)arg1 ;
-(id)tableMigrationDescriptionForEntity:(id)arg1 ;
-(id)_originalRootsForAddedEntity:(id)arg1 ;
-(id)createEntityMigrationStatements;
-(id)createStatementsForUpdatingEntityKeys;
-(void)generatePKTableUpdateStatements;
-(BOOL)validateMigratedDataFromEntityMapping:(id)arg1 error:(id*)arg2 ;
-(long long)_countNullsInColumn:(id)arg1 forEntity:(id)arg2 ;
-(long long)_countUnreferencedPrimaryKeysForEntity:(id)arg1 inForeignKeyColumnName:(id)arg2 fromTable:(id)arg3 ;
-(BOOL)validateMandatoryAttribute:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateMandatoryRelationship:(id)arg1 onEntity:(id)arg2 error:(id*)arg3 ;
-(void)_populateTableMigrationDescriptions;
-(id)createIndexStatementsForEntity:(id)arg1 ;
-(void)_determinePropertyDependenciesOnIDForEntity:(id)arg1 ;
-(void)_determineReindexedEntitiesAndAffectedProperties;
-(void)_populateEntityMigrationDescriptionsAndEntityMap;
-(void)_addEntityMigration:(id)arg1 toTableMigrationForRootEntity:(id)arg2 tableMigrationType:(int)arg3 ;
-(void)_addReindexedProperty:(id)arg1 toSetForEntity:(id)arg2 ;
-(void)dealloc;
@end
