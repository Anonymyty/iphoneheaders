/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SharedDataMigration : NSObject
+(void)migratePersistentStorageDefaults;
+(BOOL)migrateRecentSearches;
+(BOOL)migrateThumbnails;
+(BOOL)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(BOOL)arg3 ;
+(id)_userCachesDirectoryPath;
@end

