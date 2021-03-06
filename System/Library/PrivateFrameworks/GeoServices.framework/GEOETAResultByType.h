/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOETAResultByType : PBCodable <NSCopying> {

	double _expectedTimeOfDeparture;
	unsigned _distance;
	unsigned _historicTravelTime;
	int _status;
	int _transportType;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeBestEstimate;
	unsigned _travelTimeConservativeEstimate;
	SCD_Struct_GE65 _has;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeBestEstimate; 
@property (assign,nonatomic) unsigned travelTimeBestEstimate;                      //@synthesize travelTimeBestEstimate=_travelTimeBestEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                          //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance;                                    //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTimeOfDeparture; 
@property (assign,nonatomic) double expectedTimeOfDeparture;                       //@synthesize expectedTimeOfDeparture=_expectedTimeOfDeparture - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;              //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(unsigned)historicTravelTime;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(unsigned)distance;
-(BOOL)hasDistance;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(BOOL)hasHistoricTravelTime;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasTravelTimeBestEstimate;
-(void)setExpectedTimeOfDeparture:(double)arg1 ;
-(void)setHasTravelTimeBestEstimate:(BOOL)arg1 ;
-(double)expectedTimeOfDeparture;
-(BOOL)hasExpectedTimeOfDeparture;
-(void)setTravelTimeBestEstimate:(unsigned)arg1 ;
-(void)setHasExpectedTimeOfDeparture:(BOOL)arg1 ;
-(unsigned)travelTimeBestEstimate;
@end

