/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSArray, NSString, NSObject;

@interface CKDClientInfo : NSObject {

	NSArray* _enabledKeyboards;
	NSString* _cachedHostname;
	NSObject*<OS_dispatch_queue> _hostCallbackQueue;
	MGNotificationTokenStructRef _hostNotificationToken;

}

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSArray * enabledKeyboards; 
@property (nonatomic,readonly) Class CKDUITextInputModeClass; 
+(id)sharedClientInfo;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSString *)hostname;
-(NSArray *)enabledKeyboards;
-(void)_inputModeChanged;
-(void)_refreshHostname;
-(Class)CKDUITextInputModeClass;
-(void)_refreshEnabledKeyboards;
@end

