/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDWormholeServerDelegate.h>
#import <sharingd/SDWormholeConnectionDelegate.h>
#import <sharingd/SDWormholeClientDelegate.h>
#import <sharingd/SDWormholeControllerDelegate.h>
#import <sharingd/SDWormholeStatusDelegate.h>
#import <sharingd/SDWormholeInformationDelegate.h>
#import <sharingd/SDNetworkResolverDelegate.h>
#import <sharingd/SDNetworkEjecterDelegate.h>

@protocol OS_xpc_object, SDNetworkOperationDelegate;
@class NSObject, NSMutableDictionary, NSString, NSMutableArray;

@interface SDNetworkOperation : NSObject <SDWormholeServerDelegate, SDWormholeConnectionDelegate, SDWormholeClientDelegate, SDWormholeControllerDelegate, SDWormholeStatusDelegate, SDWormholeInformationDelegate, SDNetworkResolverDelegate, SDNetworkEjecterDelegate> {

	id _operation;
	BOOL _connectionScheduled;
	NSObject*<OS_xpc_object> _connection;
	NSMutableDictionary* _properties;
	NSString* _kind;
	NSString* _objectKey;
	NSObject*<OS_xpc_object> _boostMessage;
	NSMutableArray* _activities;
	id<SDNetworkOperationDelegate> _delegate;

}

@property (copy,readonly) NSString * kind;                               //@synthesize kind=_kind - In the implementation block
@property (copy) NSString * objectKey;                                   //@synthesize objectKey=_objectKey - In the implementation block
@property (retain) NSObject*<OS_xpc_object> boostMessage;                //@synthesize boostMessage=_boostMessage - In the implementation block
@property (retain) NSMutableArray * activities;                          //@synthesize activities=_activities - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;                  //@synthesize connection=_connection - In the implementation block
@property (__weak) id<SDNetworkOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wormholeClient:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setObjectKey:(NSString *)arg1 ;
-(NSString *)objectKey;
-(NSObject*<OS_xpc_object>)boostMessage;
-(void)setBoostMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)networkEjecter:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)notifyClientWithPosixError:(long long)arg1 ;
-(void)wormholeServer:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)wormholeConnection:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)wormholeController:(id)arg1 didChange:(id)arg2 ;
-(void)wormholeStatus:(id)arg1 didChange:(id)arg2 ;
-(void)wormholeInformation:(id)arg1 didChange:(id)arg2 ;
-(void)networkResolver:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setProperty:(void*)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<SDNetworkOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<SDNetworkOperationDelegate>)delegate;
-(void)resume;
-(NSMutableArray *)activities;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(NSString *)kind;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void*)copyPropertyForKey:(id)arg1 ;
-(id)initWithKind:(id)arg1 ;
@end

