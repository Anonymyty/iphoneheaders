/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterVerdict.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying> {

	BOOL _filterInbound;
	BOOL _filterOutbound;
	unsigned long long _peekInboundBytes;
	unsigned long long _peekOutboundBytes;

}

@property (assign) BOOL filterInbound;                                //@synthesize filterInbound=_filterInbound - In the implementation block
@property (assign) BOOL filterOutbound;                               //@synthesize filterOutbound=_filterOutbound - In the implementation block
@property (assign) unsigned long long peekInboundBytes;               //@synthesize peekInboundBytes=_peekInboundBytes - In the implementation block
@property (assign) unsigned long long peekOutboundBytes;              //@synthesize peekOutboundBytes=_peekOutboundBytes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allowVerdict;
+(id)dropVerdict;
+(id)needRulesVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2 ;
+(id)URLAppendStringVerdictWithMapKey:(id)arg1 ;
+(id)filterDataVerdictWithFilterInbound:(BOOL)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(BOOL)arg3 peekOutboundBytes:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)peekInboundBytes;
-(BOOL)filterInbound;
-(unsigned long long)peekOutboundBytes;
-(BOOL)filterOutbound;
-(void)setFilterInbound:(BOOL)arg1 ;
-(void)setFilterOutbound:(BOOL)arg1 ;
-(void)setPeekInboundBytes:(unsigned long long)arg1 ;
-(void)setPeekOutboundBytes:(unsigned long long)arg1 ;
@end

