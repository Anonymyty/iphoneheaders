/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAddEmailUIRequest : AARequest {

	ACAccount* _account;

}

@property (nonatomic,retain) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)initWithURLString:(id)arg1 account:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
@end
