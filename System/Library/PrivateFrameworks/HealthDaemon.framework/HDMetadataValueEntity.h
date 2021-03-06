/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)createNonUniqueIndicesForColumns;
+(id)deleteStatementForObjectMetadataWithDatabase:(id)arg1 ;
+(id)metadataValueStatementWithDatabase:(id)arg1 ;
+(id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForEntityWithObjectID:(id)arg1 ;
+(id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForEntityWithKeyID:(id)arg1 ;
-(id)valueWithDatabase:(id)arg1 ;
@end

