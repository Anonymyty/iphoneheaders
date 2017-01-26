/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOServiceVersion : PBCodable <NSCopying> {

	unsigned _minimumVersion;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumVersion; 
@property (assign,nonatomic) unsigned minimumVersion;                      //@synthesize minimumVersion=_minimumVersion - In the implementation block
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
-(void)clearVersionDomains;
-(void)setHasMinimumVersion:(BOOL)arg1 ;
-(BOOL)hasMinimumVersion;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(unsigned long long)versionDomainsCount;
-(NSMutableArray *)versionDomains;
-(unsigned)minimumVersion;
-(void)setMinimumVersion:(unsigned)arg1 ;
-(void)addVersionDomain:(id)arg1 ;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
@end
