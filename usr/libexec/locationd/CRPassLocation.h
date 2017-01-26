/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CRLocation, NSString;

@interface CRPassLocation : PBCodable <NSCopying> {

	double _age;
	NSMutableArray* _associatedStoreIds;
	CRLocation* _location;
	int _passSource;
	NSString* _passTypeId;
	int _serverHash;
	SCD_Struct_AL10 _has;

}

@property (nonatomic,retain) NSString * passTypeId;                            //@synthesize passTypeId=_passTypeId - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedStoreIds;              //@synthesize associatedStoreIds=_associatedStoreIds - In the implementation block
@property (assign,nonatomic) int passSource;                                   //@synthesize passSource=_passSource - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                                       //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CRLocation * location;                            //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                   //@synthesize serverHash=_serverHash - In the implementation block
-(void)setPassTypeId:(NSString *)arg1 ;
-(void)setAssociatedStoreIds:(NSMutableArray *)arg1 ;
-(void)addAssociatedStoreId:(id)arg1 ;
-(unsigned long long)associatedStoreIdsCount;
-(void)clearAssociatedStoreIds;
-(id)associatedStoreIdAtIndex:(unsigned long long)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(NSString *)passTypeId;
-(NSMutableArray *)associatedStoreIds;
-(int)passSource;
-(void)setPassSource:(int)arg1 ;
-(int)serverHash;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CRLocation *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(CRLocation *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(double)age;
@end
