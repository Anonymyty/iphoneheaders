/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDNetworkBrowserDelegate.h>
#import <sharingd/SDNetworkOperationDelegate.h>

@protocol OS_xpc_object;
@class NSObject, NSMutableSet, NSMutableDictionary, SDActivityScanner, SDActivityAdvertiser, SDActivityPayloadManager, SDAirDropReceiveManager, SDActivityEncryptionManager, SDHotspotBrowser, NSString;

@interface SharingDaemon : NSObject <SDNetworkBrowserDelegate, SDNetworkOperationDelegate> {

	NSObject*<OS_xpc_object> _listener;
	NSMutableSet* _activeObjects;
	NSMutableDictionary* _exportedOperations;
	SDActivityScanner* _activityScanner;
	SDActivityAdvertiser* _activityAdvertiser;
	SDActivityPayloadManager* _payloadManager;
	SDAirDropReceiveManager* _airdropManager;
	SDActivityEncryptionManager* _encryptionManager;
	SDHotspotBrowser* _hotspotBrowser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)networkBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(id)xpcArrayForSFNodeArray:(id)arg1 ;
-(id)xpcObjectForSFOperationResults:(id)arg1 ;
-(id)stringFromXPCObject:(id)arg1 ;
-(void)handleBrowserMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleOperationMessage:(id)arg1 forConnection:(id)arg2 ;
-(id)arrayFromXPCObject:(id)arg1 ;
-(id)numberFromXPCObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)handleNewConnection:(id)arg1 ;
@end

