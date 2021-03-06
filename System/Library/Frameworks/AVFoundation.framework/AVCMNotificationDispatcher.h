/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCallbackContextRegistry, NSMutableDictionary, NSObject;

@interface AVCMNotificationDispatcher : NSObject {

	opaqueCMNotificationCenterRef _cmNotificationCenter;
	AVCallbackContextRegistry* _callbackContextRegistry;
	NSMutableDictionary* _listenerObjectsPassedToFig;
	NSObject*<OS_dispatch_queue> _listenerObjectsQueue;

}

@property (nonatomic,readonly) opaqueCMNotificationCenterRef CMNotificationCenter; 
@property (getter=_callbackContextRegistry,nonatomic,readonly) AVCallbackContextRegistry * callbackContextRegistry; 
+(void)initialize;
+(id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 flags:(unsigned)arg5 ;
-(void)removeListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
-(id)initWithCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)_callbackContextRegistry;
-(void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(/*function pointer*/void*)arg3 name:(CFStringRef)arg4 object:(const void*)arg5 ;
-(opaqueCMNotificationCenterRef)CMNotificationCenter;
-(id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
-(void)finalize;
@end

