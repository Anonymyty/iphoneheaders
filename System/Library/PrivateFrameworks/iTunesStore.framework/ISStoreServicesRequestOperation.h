/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {

	SSRequest* _request;

}

@property (readonly) SSRequest * request; 
-(void)cancel;
-(void)dealloc;
-(SSRequest *)request;
-(void)run;
-(id)initWithRequest:(id)arg1 ;
@end
