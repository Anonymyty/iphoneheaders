/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MobileMailMigrator.migrator/MobileMailMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailMigrator/MobileMailMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface MobileMailMigrator : DataClassMigrator
-(BOOL)_migratePreferencesToContainerWithDomain:(CFStringRef)arg1 guardKey:(CFStringRef)arg2 ;
-(BOOL)migrateUbiquitousKeyValueStoreToContainer;
-(BOOL)migrateUserAttachmentScalePeference;
-(BOOL)migrateAttachmentsProtectionClass;
-(BOOL)removeUnusedPreferences;
-(BOOL)migrateMessageLibrary;
-(BOOL)removeOldFormatAutosaveMessages;
-(BOOL)migratePreferencesToContainer;
-(BOOL)removeContentIndex;
-(float)migrationProgress;
-(void)setVersion:(unsigned long long)arg1 ;
-(long long)currentVersion;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

