/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface AFUIDebugCrashMoverService : NSObject {

	NSObject*<OS_xpc_object> _connection;

}

@property (getter=_connection,nonatomic,readonly) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(id)_connection;
-(const char*)_errorDescriptionForXPCObject:(id)arg1 ;
-(void)moveLogsWithExtensions:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

