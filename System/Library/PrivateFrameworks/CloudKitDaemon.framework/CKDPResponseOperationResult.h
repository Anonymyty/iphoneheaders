/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {

	int _code;
	CKDPResponseOperationResultError* _error;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                              //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) CKDPResponseOperationResultError * error;              //@synthesize error=_error - In the implementation block
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasError;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(void)setError:(CKDPResponseOperationResultError *)arg1 ;
-(CKDPResponseOperationResultError *)error;
@end

