/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileStats : NSObject
+(id)logStartDate;
+(id)logEndDate;
+(long long)fileSizeAtPath:(id)arg1 ;
+(id)tableCounts;
+(id)select:(id)arg1 from:(id)arg2 where:(id)arg3 ;
+(double)totalLogDuration;
+(id)cpuTimeForProcess:(id)arg1 ;
+(id)logStartDateFromTable:(id)arg1 ;
+(id)logEndDateFromTable:(id)arg1 ;
+(id)statsForFile:(id)arg1 ;
+(double)totalLogDurationFromTable:(id)arg1 where:(id)arg2 ;
@end
