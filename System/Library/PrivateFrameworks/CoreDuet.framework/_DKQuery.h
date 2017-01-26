/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSString, NSArray;

@interface _DKQuery : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;
	NSString* _entityName;
	NSArray* _sortDescriptors;
	unsigned long long _limit;
	unsigned long long _offset;

}

@property (retain) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (retain) NSString * entityName;                  //@synthesize entityName=_entityName - In the implementation block
@property (retain) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign) unsigned long long limit;               //@synthesize limit=_limit - In the implementation block
@property (assign) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForEventsWithEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithStartOrEndInDateRangeWithFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsContainingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForObjectWithUUID:(id)arg1 ;
+(id)predicateForObjectsWithUUIDs:(id)arg1 ;
+(id)predicateForEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)predicateForEventsWithStartAndEndInDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsIntersectingDateRangeFrom:(id)arg1 to:(id)arg2 ;
+(id)predicateForEventsWithDayOfWeek:(unsigned long long)arg1 ;
+(id)predicateForEventsBetweenStartSecondOfDay:(unsigned long long)arg1 endSecondOfDay:(unsigned long long)arg2 ;
+(id)predicateForEventsWithStreamName:(id)arg1 ;
+(id)predicateForEventsWithStreamNames:(id)arg1 ;
+(id)startDateSortDescriptorAscending:(BOOL)arg1 ;
+(id)predicateForEventsWithStartInDateRangeFrom:(id)arg1 to:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(NSArray *)sortDescriptors;
-(void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 sortDescritors:(id)arg5 ;
-(void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2 ;
-(NSString *)entityName;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
@end
