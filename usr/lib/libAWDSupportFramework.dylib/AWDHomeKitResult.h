/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitResult : PBCodable <NSCopying> {

	SCD_Struct_AW21* _characteristicTypes;
	SCD_Struct_AW21* _serviceTypes;
	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _isClient;
	unsigned _operationType;
	int _resultCode;
	unsigned _resultType;
	unsigned _transportType;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) unsigned resultType;                                        //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasResultCode; 
@property (assign,nonatomic) int resultCode;                                             //@synthesize resultCode=_resultCode - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                                     //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasIsClient; 
@property (assign,nonatomic) unsigned isClient;                                          //@synthesize isClient=_isClient - In the implementation block
@property (nonatomic,readonly) unsigned long long serviceTypesCount; 
@property (nonatomic,readonly) unsigned* serviceTypes; 
@property (nonatomic,readonly) unsigned long long characteristicTypesCount; 
@property (nonatomic,readonly) unsigned* characteristicTypes; 
@property (assign,nonatomic) BOOL hasOperationType; 
@property (assign,nonatomic) unsigned operationType;                                     //@synthesize operationType=_operationType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(unsigned long long)serviceTypesCount;
-(void)clearServiceTypes;
-(unsigned)serviceTypeAtIndex:(unsigned long long)arg1 ;
-(void)addServiceType:(unsigned)arg1 ;
-(unsigned long long)characteristicTypesCount;
-(void)clearCharacteristicTypes;
-(unsigned)characteristicTypeAtIndex:(unsigned long long)arg1 ;
-(void)addCharacteristicType:(unsigned)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)setResultCode:(int)arg1 ;
-(void)setHasResultCode:(BOOL)arg1 ;
-(BOOL)hasResultCode;
-(void)setIsClient:(unsigned)arg1 ;
-(void)setHasIsClient:(BOOL)arg1 ;
-(BOOL)hasIsClient;
-(unsigned*)serviceTypes;
-(void)setServiceTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)characteristicTypes;
-(void)setCharacteristicTypes:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setOperationType:(unsigned)arg1 ;
-(void)setHasOperationType:(BOOL)arg1 ;
-(BOOL)hasOperationType;
-(int)resultCode;
-(unsigned)isClient;
-(unsigned)operationType;
-(unsigned)resultType;
-(void)setResultType:(unsigned)arg1 ;
@end
