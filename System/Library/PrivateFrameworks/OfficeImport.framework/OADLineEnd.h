/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADLineEnd : OADProperties <NSCopying> {

	unsigned char mType;
	unsigned char mWidth;
	unsigned char mLength;
	unsigned mIsTypeOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsLengthOverridden : 1;

}
+(id)defaultProperties;
+(id)stringForLineEndType:(unsigned char)arg1 ;
+(id)stringForLineEndWidth:(unsigned char)arg1 ;
+(id)stringForLineEndLength:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned char)length;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)width;
-(void)setLength:(unsigned char)arg1 ;
-(void)setWidth:(unsigned char)arg1 ;
-(BOOL)isWidthOverridden;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isTypeOverridden;
-(BOOL)isLengthOverridden;
-(id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3 ;
@end

