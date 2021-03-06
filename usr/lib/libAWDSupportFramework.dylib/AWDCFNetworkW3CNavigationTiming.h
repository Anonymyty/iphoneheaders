/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCFNetworkW3CNavigationTiming : PBCodable <NSCopying> {

	unsigned long long _connectEnd;
	unsigned long long _connectStart;
	unsigned long long _domainLookupEnd;
	unsigned long long _domainLookupStart;
	unsigned long long _fetchStart;
	long long _isReused;
	long long _redirectCount;
	long long _redirectCountW3C;
	unsigned long long _redirectEnd;
	unsigned long long _redirectStart;
	unsigned long long _requestStart;
	unsigned long long _responseEnd;
	unsigned long long _responseStart;
	unsigned long long _secureConnectionStart;
	unsigned long long _timestamp;
	NSString* _hostname;
	NSString* _url;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectStart; 
@property (assign,nonatomic) unsigned long long redirectStart;                      //@synthesize redirectStart=_redirectStart - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectEnd; 
@property (assign,nonatomic) unsigned long long redirectEnd;                        //@synthesize redirectEnd=_redirectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasFetchStart; 
@property (assign,nonatomic) unsigned long long fetchStart;                         //@synthesize fetchStart=_fetchStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) unsigned long long domainLookupStart;                  //@synthesize domainLookupStart=_domainLookupStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) unsigned long long domainLookupEnd;                    //@synthesize domainLookupEnd=_domainLookupEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) unsigned long long connectStart;                       //@synthesize connectStart=_connectStart - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionStart; 
@property (assign,nonatomic) unsigned long long secureConnectionStart;              //@synthesize secureConnectionStart=_secureConnectionStart - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) unsigned long long connectEnd;                         //@synthesize connectEnd=_connectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) unsigned long long requestStart;                       //@synthesize requestStart=_requestStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) unsigned long long responseStart;                      //@synthesize responseStart=_responseStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) unsigned long long responseEnd;                        //@synthesize responseEnd=_responseEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectCountW3C; 
@property (assign,nonatomic) long long redirectCountW3C;                            //@synthesize redirectCountW3C=_redirectCountW3C - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectCount; 
@property (assign,nonatomic) long long redirectCount;                               //@synthesize redirectCount=_redirectCount - In the implementation block
@property (assign,nonatomic) BOOL hasIsReused; 
@property (assign,nonatomic) long long isReused;                                    //@synthesize isReused=_isReused - In the implementation block
@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;                                   //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                        //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)url;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasUrl;
-(void)setHostname:(NSString *)arg1 ;
-(void)setRedirectStart:(unsigned long long)arg1 ;
-(void)setHasRedirectStart:(BOOL)arg1 ;
-(BOOL)hasRedirectStart;
-(void)setRedirectEnd:(unsigned long long)arg1 ;
-(void)setHasRedirectEnd:(BOOL)arg1 ;
-(BOOL)hasRedirectEnd;
-(void)setFetchStart:(unsigned long long)arg1 ;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(BOOL)hasFetchStart;
-(void)setDomainLookupStart:(unsigned long long)arg1 ;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(void)setDomainLookupEnd:(unsigned long long)arg1 ;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(void)setConnectStart:(unsigned long long)arg1 ;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(BOOL)hasConnectStart;
-(void)setSecureConnectionStart:(unsigned long long)arg1 ;
-(void)setHasSecureConnectionStart:(BOOL)arg1 ;
-(BOOL)hasSecureConnectionStart;
-(void)setConnectEnd:(unsigned long long)arg1 ;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(BOOL)hasConnectEnd;
-(void)setRequestStart:(unsigned long long)arg1 ;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setResponseStart:(unsigned long long)arg1 ;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(BOOL)hasResponseStart;
-(void)setResponseEnd:(unsigned long long)arg1 ;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
-(void)setRedirectCountW3C:(long long)arg1 ;
-(void)setHasRedirectCountW3C:(BOOL)arg1 ;
-(BOOL)hasRedirectCountW3C;
-(void)setRedirectCount:(long long)arg1 ;
-(void)setHasRedirectCount:(BOOL)arg1 ;
-(BOOL)hasRedirectCount;
-(void)setIsReused:(long long)arg1 ;
-(void)setHasIsReused:(BOOL)arg1 ;
-(BOOL)hasIsReused;
-(BOOL)hasHostname;
-(unsigned long long)redirectStart;
-(unsigned long long)redirectEnd;
-(unsigned long long)fetchStart;
-(unsigned long long)domainLookupStart;
-(unsigned long long)domainLookupEnd;
-(unsigned long long)connectStart;
-(unsigned long long)secureConnectionStart;
-(unsigned long long)connectEnd;
-(unsigned long long)requestStart;
-(unsigned long long)responseStart;
-(unsigned long long)responseEnd;
-(long long)redirectCountW3C;
-(long long)redirectCount;
-(long long)isReused;
-(NSString *)hostname;
@end

