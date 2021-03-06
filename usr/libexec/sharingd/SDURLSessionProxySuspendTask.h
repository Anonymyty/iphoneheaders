/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:28 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SDURLSessionProxyTaskMessage;

@interface SDURLSessionProxySuspendTask : PBCodable <NSCopying> {

	SDURLSessionProxyTaskMessage* _task;

}

@property (nonatomic,readonly) BOOL hasTask; 
@property (nonatomic,retain) SDURLSessionProxyTaskMessage * task;              //@synthesize task=_task - In the implementation block
-(BOOL)hasTask;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SDURLSessionProxyTaskMessage *)task;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTask:(SDURLSessionProxyTaskMessage *)arg1 ;
@end

