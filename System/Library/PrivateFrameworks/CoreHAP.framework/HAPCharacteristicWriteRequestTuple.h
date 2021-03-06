/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : NSObject {

	HAPCharacteristic* _characteristic;
	id _value;
	NSData* _authorizationData;
	NSNumber* _enableEvents;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSData * authorizationData;                      //@synthesize authorizationData=_authorizationData - In the implementation block
@property (nonatomic,retain) NSNumber * enableEvents;                         //@synthesize enableEvents=_enableEvents - In the implementation block
+(id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setEnableEvents:(NSNumber *)arg1 ;
-(NSNumber *)enableEvents;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(NSData *)authorizationData;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(HAPCharacteristic *)characteristic;
@end

