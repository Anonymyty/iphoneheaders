/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <findmydeviced/FMDRequest.h>

@class FMDServiceProvider, NSString, NSData, NSUUID;

@interface FMDRequestIdentityV3 : FMDRequest {

	FMDServiceProvider* _provider;
	NSString* _signatureHeader;
	NSString* _skAuthHeader;
	NSData* _requestBodyDataForSignature;
	NSUUID* _activationLockRequestUUID;

}

@property (nonatomic,retain) FMDServiceProvider * provider;                     //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * signatureHeader;                        //@synthesize signatureHeader=_signatureHeader - In the implementation block
@property (nonatomic,retain) NSString * skAuthHeader;                           //@synthesize skAuthHeader=_skAuthHeader - In the implementation block
@property (nonatomic,retain) NSData * requestBodyDataForSignature;              //@synthesize requestBodyDataForSignature=_requestBodyDataForSignature - In the implementation block
@property (nonatomic,retain) NSUUID * activationLockRequestUUID;                //@synthesize activationLockRequestUUID=_activationLockRequestUUID - In the implementation block
-(void)deinitializeRequest;
-(id)requestUrl;
-(BOOL)canRequestBeRetriedNow;
-(BOOL)canReplace:(id)arg1 ;
-(id)requestBodyData;
-(long long)maxNonNetworkRelatedRetries;
-(long long)maxConsecutiveNetworkNotificationRetries;
-(double)maxRetryInterval;
-(NSUUID *)activationLockRequestUUID;
-(void)setActivationLockRequestUUID:(NSUUID *)arg1 ;
-(NSString *)signatureHeader;
-(NSString *)skAuthHeader;
-(NSData *)requestBodyDataForSignature;
-(void)_calculateSignatureForBody:(id)arg1 ;
-(void)setSignatureHeader:(NSString *)arg1 ;
-(void)setSkAuthHeader:(NSString *)arg1 ;
-(void)setRequestBodyDataForSignature:(NSData *)arg1 ;
-(FMDServiceProvider *)provider;
-(void)setProvider:(FMDServiceProvider *)arg1 ;
-(id)requestHeaders;
-(id)requestBody;
-(id)initWithProvider:(id)arg1 ;
@end

