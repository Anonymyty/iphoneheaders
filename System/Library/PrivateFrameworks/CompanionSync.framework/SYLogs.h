/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CompanionSync/CompanionSync-Structs.h>
@interface SYLogs : NSObject
+(void)initialize;
+(CFStringRef)facility;
+(id)logFolder;
+(void)adjustLoggingForPrefsUpdate:(CFStringRef)arg1 ;
+(void)setupLogging:(id)arg1 ;
+(BOOL)shouldDisplaySyncErrorMessage;
+(BOOL)shouldLogBubblesToAggD;
+(BOOL)shouldDumpIDSOnSyncError;
@end

