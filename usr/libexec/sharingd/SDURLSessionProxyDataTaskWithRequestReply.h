/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:30 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SDURLSessionProxyTaskMessage, NSData, __NSCFURLSessionTaskInfo;

@interface SDURLSessionProxyDataTaskWithRequestReply : PBCodable <NSCopying> {

	SDURLSessionProxyTaskMessage* _task;
	NSData* _taskInfo;

}

@property (setter=_setActualTaskInfo:,retain) __NSCFURLSessionTaskInfo * _actualTaskInfo; 
@property (nonatomic,readonly) BOOL hasTask; 
@property (nonatomic,retain) SDURLSessionProxyTaskMessage * task;                                      //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) BOOL hasTaskInfo; 
@property (nonatomic,retain) NSData * taskInfo;                                                        //@synthesize taskInfo=_taskInfo - In the implementation block
-(__NSCFURLSessionTaskInfo *)_actualTaskInfo;
-(void)_setActualTaskInfo:(id)arg1 ;
-(BOOL)hasTask;
-(NSData *)taskInfo;
-(void)setTaskInfo:(NSData *)arg1 ;
-(BOOL)hasTaskInfo;
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
