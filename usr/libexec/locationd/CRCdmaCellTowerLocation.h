/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CRLocation, CRCellNeighborsGroup, NSMutableArray;

@interface CRCdmaCellTowerLocation : PBCodable <NSCopying> {

	SCD_Struct_CR24* _derivedMccs;
	double _bsLatitude;
	double _bsLongitude;
	double _sectorLatitude;
	double _sectorLongitude;
	NSString* _appBundleId;
	int _bandclass;
	int _bsid;
	int _celltype;
	int _channel;
	int _dayLightSavings;
	int _ecn0;
	CRLocation* _location;
	int _ltmOffset;
	int _mcc;
	int _mnc;
	CRCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	int _nid;
	NSString* _operatorName;
	int _pnoffset;
	int _rat;
	int _rscp;
	NSString* _sectorid;
	int _serverHash;
	int _sid;
	int _zoneid;
	SCD_Struct_CR25 _has;

}

@property (assign,nonatomic) int mcc;                                            //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                            //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int sid;                                            //@synthesize sid=_sid - In the implementation block
@property (assign,nonatomic) int nid;                                            //@synthesize nid=_nid - In the implementation block
@property (assign,nonatomic) int bsid;                                           //@synthesize bsid=_bsid - In the implementation block
@property (assign,nonatomic) BOOL hasBsLatitude; 
@property (assign,nonatomic) double bsLatitude;                                  //@synthesize bsLatitude=_bsLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasBsLongitude; 
@property (assign,nonatomic) double bsLongitude;                                 //@synthesize bsLongitude=_bsLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasZoneid; 
@property (assign,nonatomic) int zoneid;                                         //@synthesize zoneid=_zoneid - In the implementation block
@property (nonatomic,readonly) BOOL hasSectorid; 
@property (nonatomic,retain) NSString * sectorid;                                //@synthesize sectorid=_sectorid - In the implementation block
@property (assign,nonatomic) BOOL hasSectorLatitude; 
@property (assign,nonatomic) double sectorLatitude;                              //@synthesize sectorLatitude=_sectorLatitude - In the implementation block
@property (assign,nonatomic) BOOL hasSectorLongitude; 
@property (assign,nonatomic) double sectorLongitude;                             //@synthesize sectorLongitude=_sectorLongitude - In the implementation block
@property (assign,nonatomic) BOOL hasBandclass; 
@property (assign,nonatomic) int bandclass;                                      //@synthesize bandclass=_bandclass - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                            //@synthesize rat=_rat - In the implementation block
@property (assign,nonatomic) BOOL hasCelltype; 
@property (assign,nonatomic) int celltype;                                       //@synthesize celltype=_celltype - In the implementation block
@property (assign,nonatomic) BOOL hasPnoffset; 
@property (assign,nonatomic) int pnoffset;                                       //@synthesize pnoffset=_pnoffset - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) int channel;                                        //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) CRLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                     //@synthesize serverHash=_serverHash - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                            //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasLtmOffset; 
@property (assign,nonatomic) int ltmOffset;                                      //@synthesize ltmOffset=_ltmOffset - In the implementation block
@property (assign,nonatomic) BOOL hasDayLightSavings; 
@property (assign,nonatomic) int dayLightSavings;                                //@synthesize dayLightSavings=_dayLightSavings - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedMccsCount; 
@property (nonatomic,readonly) int* derivedMccs; 
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                           //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                           //@synthesize rscp=_rscp - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                         //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CRCellNeighborsGroup * neighborGroup;               //@synthesize neighborGroup=_neighborGroup - In the implementation block
-(int)sid;
-(int)nid;
-(int)mcc;
-(int)bsid;
-(BOOL)hasZoneid;
-(int)zoneid;
-(BOOL)hasBandclass;
-(int)bandclass;
-(BOOL)hasPnoffset;
-(int)pnoffset;
-(int)mnc;
-(void)setSid:(int)arg1 ;
-(void)setNid:(int)arg1 ;
-(void)setBsid:(int)arg1 ;
-(void)setZoneid:(int)arg1 ;
-(void)setBandclass:(int)arg1 ;
-(void)setPnoffset:(int)arg1 ;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)setNeighbors:(NSMutableArray *)arg1 ;
-(void)setNeighborGroup:(CRCellNeighborsGroup *)arg1 ;
-(unsigned long long)neighborsCount;
-(void)clearNeighbors;
-(BOOL)hasAppBundleId;
-(BOOL)hasOperatorName;
-(void)setEcn0:(int)arg1 ;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setRscp:(int)arg1 ;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)setHasRat:(BOOL)arg1 ;
-(BOOL)hasRat;
-(BOOL)hasNeighborGroup;
-(int)ecn0;
-(int)rscp;
-(int)rat;
-(NSMutableArray *)neighbors;
-(CRCellNeighborsGroup *)neighborGroup;
-(void)setLtmOffset:(int)arg1 ;
-(void)setDayLightSavings:(int)arg1 ;
-(void)addDerivedMcc:(int)arg1 ;
-(void)setBsLatitude:(double)arg1 ;
-(void)setBsLongitude:(double)arg1 ;
-(void)setSectorid:(NSString *)arg1 ;
-(void)setSectorLatitude:(double)arg1 ;
-(void)setSectorLongitude:(double)arg1 ;
-(void)setCelltype:(int)arg1 ;
-(unsigned long long)derivedMccsCount;
-(void)clearDerivedMccs;
-(int)derivedMccAtIndex:(unsigned long long)arg1 ;
-(void)setHasBsLatitude:(BOOL)arg1 ;
-(BOOL)hasBsLatitude;
-(void)setHasBsLongitude:(BOOL)arg1 ;
-(BOOL)hasBsLongitude;
-(void)setHasZoneid:(BOOL)arg1 ;
-(BOOL)hasSectorid;
-(void)setHasSectorLatitude:(BOOL)arg1 ;
-(BOOL)hasSectorLatitude;
-(void)setHasSectorLongitude:(BOOL)arg1 ;
-(BOOL)hasSectorLongitude;
-(void)setHasBandclass:(BOOL)arg1 ;
-(void)setHasCelltype:(BOOL)arg1 ;
-(BOOL)hasCelltype;
-(void)setHasPnoffset:(BOOL)arg1 ;
-(void)setHasLtmOffset:(BOOL)arg1 ;
-(BOOL)hasLtmOffset;
-(void)setHasDayLightSavings:(BOOL)arg1 ;
-(BOOL)hasDayLightSavings;
-(int*)derivedMccs;
-(void)setDerivedMccs:(int*)arg1 count:(unsigned long long)arg2 ;
-(double)bsLatitude;
-(double)bsLongitude;
-(NSString *)sectorid;
-(double)sectorLatitude;
-(double)sectorLongitude;
-(int)celltype;
-(int)ltmOffset;
-(int)dayLightSavings;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CRLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(CRLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)neighborAtIndex:(unsigned long long)arg1 ;
-(void)addNeighbor:(id)arg1 ;
-(void)setChannel:(int)arg1 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasChannel;
-(int)channel;
-(NSString *)operatorName;
-(void)setRat:(int)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
@end
