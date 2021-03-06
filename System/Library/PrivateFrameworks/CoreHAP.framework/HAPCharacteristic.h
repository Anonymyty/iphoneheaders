/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:35 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, HAPService, HAPCharacteristicMetadata, CBCharacteristic;

@interface HAPCharacteristic : NSObject {

	BOOL _eventNotificationsEnabled;
	BOOL _shouldValidateValueAfterReading;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned long long _properties;
	HAPCharacteristicMetadata* _metadata;
	id _value;
	unsigned long long _valueUpdateTime;
	HAPCharacteristicMetadata* _accessoryMetadata;

}

@property (setter=setCBCharacteristic:,nonatomic,retain) CBCharacteristic * cbCharacteristic; 
@property (nonatomic,copy) NSString * type;                                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                                          //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                                                  //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                                                //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL eventNotificationsEnabled;                                               //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,copy) HAPCharacteristicMetadata * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (setter=setValue:,nonatomic,copy) id value;                                                      //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long valueUpdateTime;                                           //@synthesize valueUpdateTime=_valueUpdateTime - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdditionalAuthorizationData; 
@property (assign,nonatomic) BOOL shouldValidateValueAfterReading;                                         //@synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * accessoryMetadata;                              //@synthesize accessoryMetadata=_accessoryMetadata - In the implementation block
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(CBCharacteristic *)cbCharacteristic;
-(void)setCBCharacteristic:(id)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned long long)properties;
-(void)setProperties:(unsigned long long)arg1 ;
-(HAPCharacteristicMetadata *)metadata;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(void)setService:(HAPService *)arg1 ;
-(HAPService *)service;
-(void)setEventNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldValidateValueAfterReading;
-(BOOL)eventNotificationsEnabled;
-(BOOL)isEqualToCharacteristic:(id)arg1 ;
-(void)setShouldValidateValueAfterReading:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 properties:(unsigned long long)arg4 eventNotificationsEnabled:(BOOL)arg5 metadata:(id)arg6 ;
-(HAPCharacteristicMetadata *)accessoryMetadata;
-(id)propertiesDescription;
-(void)setValueUpdateTime:(unsigned long long)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData;
-(NSNumber *)instanceID;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(unsigned long long)valueUpdateTime;
@end

