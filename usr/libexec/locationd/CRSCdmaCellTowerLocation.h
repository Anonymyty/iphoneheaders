/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CRLocation, CRCellNeighborsGroup, NSMutableArray;

@interface CRSCdmaCellTowerLocation : PBCodable <NSCopying> {

	NSString* _appBundleId;
	int _arfcn;
	int _ci;
	int _ecn0;
	int _lac;
	CRLocation* _location;
	int _mcc;
	int _mnc;
	CRCellNeighborsGroup* _neighborGroup;
	NSMutableArray* _neighbors;
	NSString* _operatorName;
	int _psc;
	int _rat;
	int _rscp;
	int _rssi;
	int _serverHash;
	int _transmit;
	SCD_Struct_AL2 _has;

}

@property (assign,nonatomic) int mcc;                                           //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                                           //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int lac;                                           //@synthesize lac=_lac - In the implementation block
@property (assign,nonatomic) int ci;                                            //@synthesize ci=_ci - In the implementation block
@property (assign,nonatomic) int rssi;                                          //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasArfcn; 
@property (assign,nonatomic) int arfcn;                                         //@synthesize arfcn=_arfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                                           //@synthesize psc=_psc - In the implementation block
@property (nonatomic,retain) CRLocation * location;                             //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                            //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                    //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasTransmit; 
@property (assign,nonatomic) int transmit;                                      //@synthesize transmit=_transmit - In the implementation block
@property (nonatomic,readonly) BOOL hasOperatorName; 
@property (nonatomic,retain) NSString * operatorName;                           //@synthesize operatorName=_operatorName - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                                          //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                                          //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasRat; 
@property (assign,nonatomic) int rat;                                           //@synthesize rat=_rat - In the implementation block
@property (nonatomic,retain) NSMutableArray * neighbors;                        //@synthesize neighbors=_neighbors - In the implementation block
@property (nonatomic,readonly) BOOL hasNeighborGroup; 
@property (nonatomic,retain) CRCellNeighborsGroup * neighborGroup;              //@synthesize neighborGroup=_neighborGroup - In the implementation block
-(int)mcc;
-(int)mnc;
-(BOOL)hasArfcn;
-(int)arfcn;
-(BOOL)hasPsc;
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
-(void)setArfcn:(int)arg1 ;
-(void)setHasArfcn:(BOOL)arg1 ;
-(void)setPsc:(int)arg1 ;
-(void)setHasPsc:(BOOL)arg1 ;
-(BOOL)hasAppBundleId;
-(void)setTransmit:(int)arg1 ;
-(void)setHasTransmit:(BOOL)arg1 ;
-(BOOL)hasTransmit;
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
-(int)ci;
-(void)setCi:(int)arg1 ;
-(int)transmit;
-(int)ecn0;
-(int)rscp;
-(int)rat;
-(NSMutableArray *)neighbors;
-(CRCellNeighborsGroup *)neighborGroup;
-(int)psc;
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
-(void)setRssi:(int)arg1 ;
-(int)rssi;
-(NSString *)operatorName;
-(void)setRat:(int)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(int)lac;
-(void)setLac:(int)arg1 ;
@end
