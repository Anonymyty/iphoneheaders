/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	int _location;
	SCD_Struct_MR1 _has;

}

@property (assign,nonatomic) BOOL hasLocation; 
@property (assign,nonatomic) int location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * contentItems;              //@synthesize contentItems=_contentItems - In the implementation block
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)addContentItem:(id)arg1 ;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(id)contentItemAtIndex:(unsigned long long)arg1 ;
@end

