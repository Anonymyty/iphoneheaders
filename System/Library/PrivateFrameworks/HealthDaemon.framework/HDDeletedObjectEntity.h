/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)insertDeletedObjectForObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
+(id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
@end

