/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:37 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/wcd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wcd/WCDSystemObserver.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <wcd/PKComplicationXPCServer.h>

@protocol WCDPKClientDelegate;
@class NSString, NSXPCConnection, NSObject, BKSProcessAssertion, NSData, NSMutableArray;

@interface WCDPKClient : NSObject <WCDSystemObserver, NSXPCConnectionDelegate, PKComplicationXPCServer> {

	BOOL _productionEnvironment;
	NSString* _bundleID;
	NSXPCConnection* _connection;
	NSObject*<WCDPKClientDelegate> _delegate;
	BKSProcessAssertion* _assertion;
	NSData* _token;
	NSMutableArray* _pendingPayloads;

}

@property (nonatomic,copy) NSString * bundleID;                                                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isProductionEnvironment,nonatomic) BOOL productionEnvironment;              //@synthesize productionEnvironment=_productionEnvironment - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<WCDPKClientDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,retain) BKSProcessAssertion * assertion;                                        //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSData * token;                                                           //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingPayloads;                                       //@synthesize pendingPayloads=_pendingPayloads - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemObserverAppDidSuspendForBundleID:(id)arg1 ;
-(void)setupBundleIDMonitoring;
-(void)setPendingPayloads:(NSMutableArray *)arg1 ;
-(BOOL)isProductionEnvironment;
-(NSMutableArray *)pendingPayloads;
-(void)deliverPendingItems;
-(void)deliverToken:(id)arg1 ;
-(void)deliverPayload:(id)arg1 ;
-(void)setProductionEnvironment:(BOOL)arg1 ;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setDelegate:(NSObject*<WCDPKClientDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSObject*<WCDPKClientDelegate>)delegate;
-(id)remoteObjectProxy;
-(BOOL)isRunning;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(BKSProcessAssertion *)assertion;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 ;
-(void)complicationRegister;
-(void)complicationUnregister;
@end
