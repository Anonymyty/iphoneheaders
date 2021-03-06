/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface TRANSITPbLocationFingerprintV1 : PBCodable <NSCopying> {

	double _latitude;
	double _longitude;
	NSString* _locationId;
	NSMutableArray* _macModes;
	SCD_Struct_AL10 _has;

}

@property (nonatomic,readonly) BOOL hasLocationId; 
@property (nonatomic,retain) NSString * locationId;                  //@synthesize locationId=_locationId - In the implementation block
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSMutableArray * macModes;              //@synthesize macModes=_macModes - In the implementation block
-(void)setMacModes:(NSMutableArray *)arg1 ;
-(void)addMacModes:(id)arg1 ;
-(unsigned long long)macModesCount;
-(void)clearMacModes;
-(id)macModesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLocationId;
-(NSMutableArray *)macModes;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setLatitude:(double)arg1 ;
-(BOOL)hasLongitude;
-(void)setLongitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
@end

