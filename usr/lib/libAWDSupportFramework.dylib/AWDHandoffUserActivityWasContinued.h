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

@class NSString;

@interface AWDHandoffUserActivityWasContinued : PBCodable <NSCopying> {

	unsigned long long _errorCode;
	unsigned long long _payloadSize;
	unsigned long long _timestamp;
	unsigned long long _transferDurationNsec;
	unsigned long long _transferSpeed;
	NSString* _activityType;
	NSString* _bundleIdentifier;
	unsigned _source;
	BOOL _browserFallback;
	BOOL _cancelled;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                              //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                       //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasTransferSpeed; 
@property (assign,nonatomic) unsigned long long transferSpeed;                     //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTransferDurationNsec; 
@property (assign,nonatomic) unsigned long long transferDurationNsec;              //@synthesize transferDurationNsec=_transferDurationNsec - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned source;                                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasBrowserFallback; 
@property (assign,nonatomic) BOOL browserFallback;                                 //@synthesize browserFallback=_browserFallback - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)bundleIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSource:(unsigned)arg1 ;
-(unsigned)source;
-(NSString *)activityType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasBundleIdentifier;
-(BOOL)hasSource;
-(void)setErrorCode:(unsigned long long)arg1 ;
-(unsigned long long)errorCode;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(BOOL)hasActivityType;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(void)setTransferSpeed:(unsigned long long)arg1 ;
-(void)setHasTransferSpeed:(BOOL)arg1 ;
-(BOOL)hasTransferSpeed;
-(void)setTransferDurationNsec:(unsigned long long)arg1 ;
-(void)setHasTransferDurationNsec:(BOOL)arg1 ;
-(BOOL)hasTransferDurationNsec;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setBrowserFallback:(BOOL)arg1 ;
-(void)setHasBrowserFallback:(BOOL)arg1 ;
-(BOOL)hasBrowserFallback;
-(unsigned long long)payloadSize;
-(unsigned long long)transferSpeed;
-(unsigned long long)transferDurationNsec;
-(BOOL)browserFallback;
@end
