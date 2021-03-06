/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam {

	BOOL _animated;
	long long _dataType;
	long long _status;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL animated;                   //@synthesize animated=_animated - In the implementation block
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(long long)dataType;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDataType:(long long)arg1 ;
@end

