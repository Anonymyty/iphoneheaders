/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:09 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBReportConcernSubmission : PBCodable <NSCopying> {

	int _cancelLocation;
	int _reportConcernLocation;
	int _resultType;
	SCD_Struct_NT10 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                             //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasReportConcernLocation; 
@property (assign,nonatomic) int reportConcernLocation;                  //@synthesize reportConcernLocation=_reportConcernLocation - In the implementation block
@property (assign,nonatomic) BOOL hasCancelLocation; 
@property (assign,nonatomic) int cancelLocation;                         //@synthesize cancelLocation=_cancelLocation - In the implementation block
-(int)reportConcernLocation;
-(void)setReportConcernLocation:(int)arg1 ;
-(void)setHasReportConcernLocation:(BOOL)arg1 ;
-(BOOL)hasReportConcernLocation;
-(int)cancelLocation;
-(void)setCancelLocation:(int)arg1 ;
-(void)setHasCancelLocation:(BOOL)arg1 ;
-(BOOL)hasCancelLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
@end

