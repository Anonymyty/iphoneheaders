/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOStyleAttributes : PBCodable <NSCopying> {

	unsigned long long _customIconId;
	NSMutableArray* _attributes;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSMutableArray * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) BOOL hasCustomIconId; 
@property (assign,nonatomic) unsigned long long customIconId;              //@synthesize customIconId=_customIconId - In the implementation block
+(id)attributesForTransitLine:(id)arg1 ;
+(id)attributesForTransitSystem:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)attributes;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCustomIconId;
-(void)addAttribute:(id)arg1 ;
-(void)clearAttributes;
-(unsigned long long)customIconId;
-(void)setCustomIconId:(unsigned long long)arg1 ;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
-(void)setHasCustomIconId:(BOOL)arg1 ;
-(unsigned long long)attributesCount;
@end
