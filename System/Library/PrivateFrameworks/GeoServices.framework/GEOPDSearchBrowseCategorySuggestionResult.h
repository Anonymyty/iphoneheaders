/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDSearchBrowseCategorySuggestionResult : PBCodable <NSCopying> {

	NSMutableArray* _categorys;

}

@property (nonatomic,retain) NSMutableArray * categorys;              //@synthesize categorys=_categorys - In the implementation block
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
-(void)clearCategorys;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categorys;
-(unsigned long long)categorysCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
@end

