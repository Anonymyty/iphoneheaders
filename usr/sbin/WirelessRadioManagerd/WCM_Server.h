/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <WirelessRadioManagerd/WirelessRadioManagerd-Structs.h>
@class NSObject, NSMutableArray;

@interface WCM_Server : NSObject {

	NSObject*<OS_xpc_object> mConnection;
	BOOL testMode;
	NSMutableArray* mClientSessions;
	NSObject*<OS_dispatch_queue> mQueue;

}
+(id)WCM_ServerSingleton;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)getQueue;
-(id)getSessionFromListForProcess:(long long)arg1 ;
-(void)handleXPCEvent:(id)arg1 ;
-(void)addSessionToList:(id)arg1 ;
-(void)existingSessions;
-(void)removeSessionFromList:(id)arg1 ;
-(void)deleteSession:(long long)arg1 ;
-(id)getSessionFromList:(id)arg1 ;
-(void)enterTestMode;
-(void)exitTestMode;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(void)handleEvent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)handleConnection:(id)arg1 ;
-(void)startService;
@end
