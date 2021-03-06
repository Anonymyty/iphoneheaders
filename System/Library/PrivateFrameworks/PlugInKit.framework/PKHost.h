/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableDictionary, NSObject, PKDaemonClient;

@interface PKHost : NSObject {

	NSDictionary* _hostInfoPlist;
	NSMutableDictionary* _activePlugIns;
	NSMutableDictionary* _activeOneShots;
	NSObject*<OS_dispatch_queue> _hostQueue;
	PKDaemonClient* _client;

}

@property (retain) NSMutableDictionary * activePlugIns;                 //@synthesize activePlugIns=_activePlugIns - In the implementation block
@property (retain) NSMutableDictionary * activeOneShots;                //@synthesize activeOneShots=_activeOneShots - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> hostQueue;              //@synthesize hostQueue=_hostQueue - In the implementation block
@property (retain) PKDaemonClient * client;                             //@synthesize client=_client - In the implementation block
@property (readonly) NSDictionary * hostInfoPlist;                      //@synthesize hostInfoPlist=_hostInfoPlist - In the implementation block
+(id)defaultHost;
-(void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(/*^block*/id)arg3 ;
-(void)cancelPlugInDiscovery:(id)arg1 ;
-(id)init;
-(void)setElection:(long long)arg1 forPlugIn:(id)arg2 ;
-(void)setExtensionState:(id)arg1 forPlugIn:(id)arg2 ;
-(void)deactivatePlugIn:(id)arg1 ;
-(id)activePlugInForIdentifier:(id)arg1 activeOnly:(BOOL)arg2 ;
-(void)activatePlugIn:(id)arg1 ;
-(void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(/*^block*/id)arg3 ;
-(void)readyPlugIns:(id)arg1 ready:(/*^block*/id)arg2 ;
-(void)setHostQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActivePlugIns:(NSMutableDictionary *)arg1 ;
-(void)setActiveOneShots:(NSMutableDictionary *)arg1 ;
-(id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)hostQueue;
-(NSMutableDictionary *)activePlugIns;
-(NSMutableDictionary *)activeOneShots;
-(id)activePlugInForIdentifier:(id)arg1 ;
-(NSDictionary *)hostInfoPlist;
-(void)setClient:(PKDaemonClient *)arg1 ;
-(PKDaemonClient *)client;
@end

