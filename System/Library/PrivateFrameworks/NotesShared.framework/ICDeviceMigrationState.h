/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSString, NSDate;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign,nonatomic) short state; 
@property (nonatomic,retain) NSDate * stateModificationDate; 
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
+(id)identifierForDeviceIdentifier:(id)arg1 ;
+(id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 ;
+(id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2 ;
+(id)allKnownDeviceMigrationStates;
+(id)deviceMigrationStatesMatchingPredicate:(id)arg1 ;
+(id)currentDeviceMigrationStateCreateIfNecessary:(BOOL)arg1 ;
+(id)stringFromMigrationState:(short)arg1 ;
+(id)currentDeviceMigrationState;
-(void)deleteFromLocalDatabase;
-(void)mergeDataFromRecord:(id)arg1 ;
-(id)threadUnsafeNewlyCreatedRecord;
-(BOOL)isInICloudAccount;
-(void)objectWasDeletedFromCloud;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(id)recordName;
-(id)recordType;
-(id)recordZoneID;
-(id)loggingDescriptionValues;
-(BOOL)isMigrating;
@end
