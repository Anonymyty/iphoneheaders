/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKTransaction;

@interface SBKRequestData : NSObject {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)propertyListBodyWithTransaction:(id)arg1 ;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(id)serializableRequestBodyPropertyList;
-(id)initWithTransaction:(id)arg1 ;
-(SBKTransaction *)transaction;
@end

