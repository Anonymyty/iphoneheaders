/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <findmydeviced/FMDRequest.h>

@class FMDServiceProvider, NSString;

@interface FMDRequestRegister : FMDRequest {

	FMDServiceProvider* _provider;
	NSString* _cause;

}

@property (nonatomic,retain) FMDServiceProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * cause;                           //@synthesize cause=_cause - In the implementation block
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)canReplace:(id)arg1 ;
-(long long)maxNonNetworkRelatedRetries;
-(long long)maxConsecutiveNetworkNotificationRetries;
-(void)setCause:(NSString *)arg1 ;
-(NSString *)cause;
-(id)initWithProvider:(id)arg1 andCause:(id)arg2 ;
-(double)maxRetryInterval;
-(FMDServiceProvider *)provider;
-(void)setProvider:(FMDServiceProvider *)arg1 ;
-(id)requestHeaders;
-(id)requestBody;
@end

