/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:15:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <aosnotifyd/AOSFMRequest.h>

@class NSString;

@interface AOSFMRequestRegister : AOSFMRequest {

	NSString* _cause;

}

@property (nonatomic,retain) NSString * cause;              //@synthesize cause=_cause - In the implementation block
-(id)initWithProvider:(id)arg1 andCause:(id)arg2 ;
-(BOOL)canReplace:(id)arg1 ;
-(void)deinitializeRequest;
-(id)requestUrl;
-(double)maxRetryInterval;
-(long long)maxNonNetworkRelatedRetries;
-(long long)maxConsecutiveNetworkNotificationRetries;
-(void)setCause:(NSString *)arg1 ;
-(NSString *)cause;
-(id)requestBody;
@end
