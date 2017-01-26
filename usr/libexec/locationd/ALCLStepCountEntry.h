/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:18 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ALCLStepCountEntry : PBCodable <NSCopying> {

	double _distance;
	double _pace;
	double _timestamp;
	unsigned _count;
	unsigned _floorsAscended;
	unsigned _floorsDescended;
	int _recordId;
	BOOL _regularEntry;
	SCD_Struct_AL4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned count;                        //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) double distance;                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) unsigned floorsAscended;               //@synthesize floorsAscended=_floorsAscended - In the implementation block
@property (assign,nonatomic) unsigned floorsDescended;              //@synthesize floorsDescended=_floorsDescended - In the implementation block
@property (assign,nonatomic) BOOL hasPace; 
@property (assign,nonatomic) double pace;                           //@synthesize pace=_pace - In the implementation block
@property (assign,nonatomic) BOOL hasRecordId; 
@property (assign,nonatomic) int recordId;                          //@synthesize recordId=_recordId - In the implementation block
@property (assign,nonatomic) BOOL regularEntry;                     //@synthesize regularEntry=_regularEntry - In the implementation block
-(BOOL)regularEntry;
-(void)setRegularEntry:(BOOL)arg1 ;
-(void)setHasRecordId:(BOOL)arg1 ;
-(void)setPace:(double)arg1 ;
-(void)setHasPace:(BOOL)arg1 ;
-(BOOL)hasPace;
-(void)setFloorsAscended:(unsigned)arg1 ;
-(void)setFloorsDescended:(unsigned)arg1 ;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)floorsDescended;
-(double)pace;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)setRecordId:(int)arg1 ;
-(BOOL)hasRecordId;
-(unsigned)floorsAscended;
-(int)recordId;
@end
