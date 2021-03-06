/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKStoreBag, GKClientProxy, GKPlayerCredential;

@interface GKDataTransport : NSObject {

	GKStoreBag* _storeBag;
	GKClientProxy* _clientProxy;
	GKPlayerCredential* _credential;

}

@property (nonatomic,retain) GKStoreBag * storeBag;                        //@synthesize storeBag=_storeBag - In the implementation block
@property (nonatomic,retain) GKClientProxy * clientProxy;                  //@synthesize clientProxy=_clientProxy - In the implementation block
@property (nonatomic,retain) GKPlayerCredential * credential;              //@synthesize credential=_credential - In the implementation block
+(id)transportWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3 ;
-(id)initWithBag:(id)arg1 clientProxy:(id)arg2 credential:(id)arg3 ;
-(id)errorForBagError:(id)arg1 serverError:(id)arg2 ;
-(void)postRequest:(id)arg1 method:(id)arg2 forBagKey:(id)arg3 response:(/*^block*/id)arg4 ;
-(void)postRequest:(id)arg1 forBagKey:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)postRequest:(id)arg1 forBagKey:(id)arg2 result:(/*^block*/id)arg3 ;
-(GKStoreBag *)storeBag;
-(void)setStoreBag:(GKStoreBag *)arg1 ;
-(void)setClientProxy:(GKClientProxy *)arg1 ;
-(void)dealloc;
-(id)language;
-(GKPlayerCredential *)credential;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(GKClientProxy *)clientProxy;
@end

