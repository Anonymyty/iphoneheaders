/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData;

@interface NTPBKeyValueStore : PBCodable <NSCopying> {

	long long _clientVersion;
	long long _version;
	NSMutableArray* _keyValuePairs;
	NSData* _plistSidecar;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasClientVersion; 
@property (assign,nonatomic) long long clientVersion;                     //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
@property (nonatomic,readonly) BOOL hasPlistSidecar; 
@property (nonatomic,retain) NSData * plistSidecar;                       //@synthesize plistSidecar=_plistSidecar - In the implementation block
-(void)setPlistSidecar:(NSData *)arg1 ;
-(void)setHasClientVersion:(BOOL)arg1 ;
-(BOOL)hasPlistSidecar;
-(NSData *)plistSidecar;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(BOOL)hasClientVersion;
-(long long)clientVersion;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned long long)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
@end

