/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class PKValueAddedServiceTransaction, NSURLSession, NSDictionary, PKPass, NSString;

@interface PKValueAddedServiceWebService : NSObject <NSURLConnectionDataDelegate> {

	PKValueAddedServiceTransaction* _valueAddedTransaction;
	NSURLSession* _urlSession;
	NSDictionary* _merchantPayload;
	PKPass* _pass;

}

@property (nonatomic,readonly) NSDictionary * merchantPayload;              //@synthesize merchantPayload=_merchantPayload - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                               //@synthesize pass=_pass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithValueAddedServiceTransaction:(id)arg1 ;
-(void)downloadMerchantPayloadWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadPassWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)merchantPayload;
-(PKPass *)pass;
@end

