/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest {

	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
-(unsigned long long)badgeValue;
-(int)operationType;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
@end

