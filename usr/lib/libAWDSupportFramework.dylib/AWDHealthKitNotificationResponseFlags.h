/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHealthKitNotificationResponseFlags : PBCodable <NSCopying> {

	BOOL _alreadyDoing;
	BOOL _poorTiming;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasPoorTiming; 
@property (assign,nonatomic) BOOL poorTiming;                   //@synthesize poorTiming=_poorTiming - In the implementation block
@property (assign,nonatomic) BOOL hasAlreadyDoing; 
@property (assign,nonatomic) BOOL alreadyDoing;                 //@synthesize alreadyDoing=_alreadyDoing - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPoorTiming:(BOOL)arg1 ;
-(void)setHasPoorTiming:(BOOL)arg1 ;
-(BOOL)hasPoorTiming;
-(void)setAlreadyDoing:(BOOL)arg1 ;
-(void)setHasAlreadyDoing:(BOOL)arg1 ;
-(BOOL)hasAlreadyDoing;
-(BOOL)poorTiming;
-(BOOL)alreadyDoing;
@end

