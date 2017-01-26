/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSUUID : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSString * UUIDString; 
+(id)_maps_zeroUUID;
+(id)TTZero;
+(id)uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 ;
+(id)deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2 ;
+(id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 ;
+(id)deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2 ;
+(void)setIdentifierSalt:(id)arg1 assistantIdentifierSalt:(id)arg2 ;
+(id)hk_UUIDWithData:(id)arg1 ;
+(id)_siri_UUIDWithDomainObjectIdentifier:(id)arg1 ;
+(id)_LS_UUIDWithData:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)UUID;
-(id)_maps_initWithUUIDString:(id)arg1 disallowReturningZeroUUID:(BOOL)arg2 ;
-(long long)TTCompare:(id)arg1 ;
-(id)TTShortDescription;
-(id)convertToData;
-(id)description;
-(id)hk_dataForUUIDBytes;
-(id)_siri_domainObjectIdentifier;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(CFStringRef)_cfUUIDString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)UUIDString;
-(id)initWithUUIDString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getUUIDBytes:(unsigned char)arg1 ;
-(id)initWithUUIDBytes:(unsigned char)arg1 ;
@end
