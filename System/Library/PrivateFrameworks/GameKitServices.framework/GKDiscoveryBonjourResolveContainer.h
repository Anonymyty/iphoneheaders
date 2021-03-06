/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GKDiscoveryBonjour;

@interface GKDiscoveryBonjourResolveContainer : NSObject {

	NSMutableArray* _serviceRefList;
	GKDiscoveryBonjour* _context;
	/*^block*/id _resolveCompletionHandler;

}

@property (nonatomic,retain) NSMutableArray * serviceRefList;              //@synthesize serviceRefList=_serviceRefList - In the implementation block
@property (assign,nonatomic) GKDiscoveryBonjour * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id resolveCompletionHandler;                    //@synthesize resolveCompletionHandler=_resolveCompletionHandler - In the implementation block
-(void)dealloc;
-(id)init;
-(GKDiscoveryBonjour *)context;
-(void)setContext:(GKDiscoveryBonjour *)arg1 ;
-(NSMutableArray *)serviceRefList;
-(void)setServiceRefList:(NSMutableArray *)arg1 ;
-(id)resolveCompletionHandler;
-(void)setResolveCompletionHandler:(id)arg1 ;
@end

