/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>

@protocol CBScalablePipeManagerDelegate;
@class CBXpcConnection, NSMutableSet, NSHashTable, NSSet, NSString;

@interface CBScalablePipeManager : NSObject <CBXpcConnectionDelegate> {

	id<CBScalablePipeManagerDelegate> _delegate;
	CBXpcConnection* _connection;
	NSMutableSet* _identifiers;
	NSHashTable* _pipes;
	long long _state;

}

@property (readonly) long long state;                               //@synthesize state=_state - In the implementation block
@property (readonly) NSSet * identifiers;                           //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(oneway void)release;
-(long long)state;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isMsgAllowedWhenOff:(int)arg1 ;
-(BOOL)sendMsg:(int)arg1 args:(id)arg2 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)xpcConnectionDidReset;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)xpcConnectionDidFinalize;
-(void)orphanPipes;
-(id)pipeForName:(id)arg1 identifier:(id)arg2 ;
-(void)handleEndpointAdded:(id)arg1 ;
-(void)handleEndpointRemoved:(id)arg1 ;
-(void)handlePipeConnected:(id)arg1 ;
-(void)handlePipeDisconnected:(id)arg1 ;
-(void)handleDataAvailable:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 ;
-(void)unregisterEndpoint:(id)arg1 ;
-(void)unregisterAllEndpoints;
-(void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned)arg2 inputBytesPerSecond:(unsigned)arg3 outputBytesPerSecond:(unsigned)arg4 ;
-(NSSet *)identifiers;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end
