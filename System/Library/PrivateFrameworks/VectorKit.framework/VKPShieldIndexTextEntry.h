/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	NSMutableArray* _shieldTexts;
	int _shieldType;
	SCD_Struct_VK535 _has;

}

@property (nonatomic,readonly) BOOL hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType;                            //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,retain) NSMutableArray * shieldTexts;              //@synthesize shieldTexts=_shieldTexts - In the implementation block
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
-(BOOL)hasShieldType;
-(void)setHasShieldType:(BOOL)arg1 ;
-(int)shieldType;
-(void)setShieldType:(int)arg1 ;
-(NSString *)artworkIdentifier;
-(NSMutableArray *)shieldTexts;
-(BOOL)hasArtworkIdentifier;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setShieldTexts:(NSMutableArray *)arg1 ;
-(void)clearShieldTexts;
-(id)shieldTextAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)shieldTextsCount;
-(void)addShieldText:(id)arg1 ;
@end

