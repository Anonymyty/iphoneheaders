/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:10:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Support/cplogd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface CPLogDServer : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _UUIDToFileMap;

}
-(void)_handleClientConnection:(id)arg1 ;
-(void)_handleMessage:(id)arg1 client:(id)arg2 ;
-(void)_getUUIDForPath:(id)arg1 client:(id)arg2 outError:(BOOL*)arg3 ;
-(void)_logData:(id)arg1 client:(id)arg2 outError:(BOOL*)arg3 ;
-(void)_slurpFile:(id)arg1 client:(id)arg2 outError:(BOOL*)arg3 ;
-(void)_startNewFile:(id)arg1 client:(id)arg2 outError:(BOOL*)arg3 ;
-(BOOL)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id*)arg3 ;
-(id)init;
@end

