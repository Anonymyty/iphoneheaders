/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSString;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {

	NSString* _itemIdentifier;
	/*^block*/id _responseBlock;

}

@property (copy) NSString * itemIdentifier; 
@property (copy) id responseBlock; 
-(id)_requestBodyData;
-(void)main;
-(id)responseBlock;
-(NSString *)itemIdentifier;
-(void)setResponseBlock:(id)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end

