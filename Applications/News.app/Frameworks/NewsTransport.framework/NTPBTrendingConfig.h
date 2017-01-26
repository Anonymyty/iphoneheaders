/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying> {

	NSString* _fallbackLanguageTag;
	NSMutableArray* _languageConfigs;

}

@property (nonatomic,readonly) BOOL hasFallbackLanguageTag; 
@property (nonatomic,retain) NSString * fallbackLanguageTag;                //@synthesize fallbackLanguageTag=_fallbackLanguageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * languageConfigs;              //@synthesize languageConfigs=_languageConfigs - In the implementation block
-(void)addLanguageConfigs:(id)arg1 ;
-(void)setFallbackLanguageTag:(NSString *)arg1 ;
-(BOOL)hasFallbackLanguageTag;
-(void)clearLanguageConfigs;
-(unsigned long long)languageConfigsCount;
-(id)languageConfigsAtIndex:(unsigned long long)arg1 ;
-(NSString *)fallbackLanguageTag;
-(NSMutableArray *)languageConfigs;
-(void)setLanguageConfigs:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
