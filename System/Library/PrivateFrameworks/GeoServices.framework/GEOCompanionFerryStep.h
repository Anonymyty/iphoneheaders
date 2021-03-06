/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	SCD_Struct_GE68* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	int _junctionType;
	NSMutableArray* _maneuverNames;
	int _maneuverType;
	NSMutableArray* _signposts;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) SCD_Struct_GE68* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
-(int)transportType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)maneuverNames;
-(unsigned long long)junctionElementsCount;
-(BOOL)hasJunctionType;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)signposts;
-(unsigned long long)maneuverNamesCount;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(void)clearSignposts;
-(SCD_Struct_GE68)junctionElementAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasManeuverType;
-(void)setJunctionType:(int)arg1 ;
-(int)junctionType;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(unsigned long long)signpostsCount;
-(void)setManeuverType:(int)arg1 ;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(void)setJunctionElements:(SCD_Struct_GE68*)arg1 count:(unsigned long long)arg2 ;
-(int)maneuverType;
-(void)addSignpost:(id)arg1 ;
-(void)clearManeuverNames;
-(void)clearJunctionElements;
-(void)addManeuverName:(id)arg1 ;
-(SCD_Struct_GE68*)junctionElements;
-(void)addJunctionElement:(SCD_Struct_GE68)arg1 ;
@end

