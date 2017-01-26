/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSHashTable, NSObject;

@interface BRReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isNetworkReachable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL isNetworkReachable;              //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
+(id)sharedReachabilityMonitor;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setIsNetworkReachable:(BOOL)arg1 ;
-(BOOL)isNetworkReachable;
@end
