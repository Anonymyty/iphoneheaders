/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WirelessDiagnostics/WirelessDiagnostics-Structs.h>
@interface AWDServerConnection : NSObject {

	AWDServerConnection* fServerConnection;

}
-(void)dealloc;
-(BOOL)registerQueriableMetricCallback:(/*^block*/id)arg1 forIdentifier:(unsigned)arg2 ;
-(BOOL)registerConfigChangeCallback:(/*^block*/id)arg1 ;
-(id)initWithComponentId:(unsigned)arg1 andBlockOnConfiguration:(BOOL)arg2 ;
-(id)newMetricContainerWithIdentifier:(unsigned)arg1 ;
-(BOOL)submitMetric:(id)arg1 ;
-(unsigned long long)getAWDTimestamp;
-(id)initWithComponentId:(unsigned)arg1 ;
-(BOOL)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
-(void)flushToQueue:(dispatch_queue_sRef)arg1 block:(/*^block*/id)arg2 ;
@end
