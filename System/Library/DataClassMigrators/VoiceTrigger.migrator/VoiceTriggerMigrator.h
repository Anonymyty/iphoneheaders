/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/VoiceTrigger.migrator/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface VoiceTriggerMigrator : DataClassMigrator
-(void)_sanitizeSATEnrollmentStatus;
-(void)_migrateEnabledSetting;
-(float)migrationProgress;
-(float)estimatedDuration;
-(void)_performCleanup;
-(BOOL)performMigration;
-(id)dataClassName;
@end
