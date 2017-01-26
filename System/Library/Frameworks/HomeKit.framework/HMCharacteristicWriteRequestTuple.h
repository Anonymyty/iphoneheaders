/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCharacteristic;

@interface HMCharacteristicWriteRequestTuple : NSObject {

	HMCharacteristic* _characteristic;
	id _value;

}

@property (nonatomic,readonly) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)value;
-(HMCharacteristic *)characteristic;
@end
