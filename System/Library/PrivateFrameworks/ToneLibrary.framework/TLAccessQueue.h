/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface TLAccessQueue : NSObject {

	NSString* _label;
	NSString* _threadLocalStorageKey;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,copy) NSString * label;                                                                 //@synthesize label=_label - In the implementation block
@property (setter=_setThreadLocalStorageKey:,nonatomic,copy) NSString * _threadLocalStorageKey;              //@synthesize threadLocalStorageKey=_threadLocalStorageKey - In the implementation block
@property (assign,setter=_setSerialQueue:,nonatomic) NSObject*<OS_dispatch_queue> _serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(void)dealloc;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2 ;
-(void)_setThreadLocalStorageKey:(id)arg1 ;
-(void)_setSerialQueue:(id)arg1 ;
-(NSString *)_threadLocalStorageKey;
-(NSObject*<OS_dispatch_queue>)_serialQueue;
-(void)_performSynchronousBlockInSerialQueue:(/*^block*/id)arg1 ;
-(void)performAsynchronousBlock:(/*^block*/id)arg1 ;
-(void)_setLabel:(id)arg1 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 ;
@end
