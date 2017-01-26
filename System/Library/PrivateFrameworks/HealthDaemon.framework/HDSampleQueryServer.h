/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:13 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface HDSampleQueryServer : HDQueryServer {

	BOOL _suspended;
	NSObject*<OS_dispatch_queue> _batchQueue;
	unsigned long long _maxResults;
	NSArray* _sortDescriptors;

}

@property (nonatomic,readonly) unsigned long long maxResults;              //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) NSArray * sortDescriptors;                  //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
-(NSArray *)sortDescriptors;
-(unsigned long long)maxResults;
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(void)_queue_start;
@end
