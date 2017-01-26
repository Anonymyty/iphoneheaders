/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlock/PairedUnlock-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUProtoDidGetPasscodeState : PBCodable <NSCopying> {

	BOOL _hasPasscode;
	BOOL _isLocked;
	BOOL _isUnlockOnly;

}

@property (assign,nonatomic) BOOL hasPasscode;               //@synthesize hasPasscode=_hasPasscode - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                  //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) BOOL isUnlockOnly;              //@synthesize isUnlockOnly=_isUnlockOnly - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setHasPasscode:(BOOL)arg1 ;
-(BOOL)isUnlockOnly;
-(void)setIsUnlockOnly:(BOOL)arg1 ;
-(BOOL)hasPasscode;
@end
