/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>
#import <libobjc.A.dylib/CKDParsedObject.h>
#import <libobjc.A.dylib/CKRecordValue.h>

@class NSString;

@interface NSNumber : NSValue <ASParsingLeafNode, CKDParsedObject, CKRecordValue>

@property (nonatomic,readonly) BOOL brc_isFolderOrAliasID; 
@property (nonatomic,readonly) BOOL brc_isDocumentID; 
@property (nonatomic,readonly) NSNumber * brc_folderID; 
@property (nonatomic,readonly) NSNumber * brc_documentID; 
@property (nonatomic,readonly) unsigned long long brc_rawID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_NS51 decimalValue; 
@property (readonly) char charValue; 
@property (readonly) unsigned char unsignedCharValue; 
@property (readonly) short shortValue; 
@property (readonly) unsigned short unsignedShortValue; 
@property (readonly) int intValue; 
@property (readonly) unsigned unsignedIntValue; 
@property (readonly) long long longValue; 
@property (readonly) unsigned long long unsignedLongValue; 
@property (readonly) long long longLongValue; 
@property (readonly) unsigned long long unsignedLongLongValue; 
@property (readonly) float floatValue; 
@property (readonly) double doubleValue; 
@property (readonly) BOOL boolValue; 
@property (readonly) long long integerValue; 
@property (readonly) unsigned long long unsignedIntegerValue; 
@property (copy,readonly) NSString * stringValue; 
+(id)brc_fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2 ;
+(id)brc_fileObjectIDWithFolderOrAliasID:(unsigned long long)arg1 ;
+(id)brc_fileObjectIDWithDocumentID:(unsigned)arg1 ;
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)_gkServerTimeInterval:(double)arg1 ;
+(id)_cnac_numberWithAutocompleteAddressType:(long long)arg1 ;
+(id)numberWithCGFloat:(double)arg1 ;
+(id)cr_numberWithCRRecentID:(long long)arg1 ;
+(id)cr_numberWithCRContactID:(long long)arg1 ;
+(id)cr_numberWithCRContactGroupKind:(unsigned long long)arg1 ;
+(id)boolFromICSString:(id)arg1 ;
+(id)numberWithItemIdentifier:(unsigned long long)arg1 ;
+(id)numberWithDouble:(double)arg1 ;
+(id)numberWithInteger:(long long)arg1 ;
+(id)numberWithInt:(int)arg1 ;
+(id)numberWithBool:(BOOL)arg1 ;
+(id)numberWithUnsignedLong:(unsigned long long)arg1 ;
+(id)numberWithLong:(long long)arg1 ;
+(id)numberWithUnsignedInteger:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)numberWithUnsignedInt:(unsigned)arg1 ;
+(id)numberWithFloat:(float)arg1 ;
+(id)numberWithChar:(char)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)numberWithUnsignedLongLong:(unsigned long long)arg1 ;
+(id)numberWithLongLong:(long long)arg1 ;
+(id)numberWithUnsignedShort:(unsigned short)arg1 ;
+(id)numberWithShort:(short)arg1 ;
+(id)numberWithUnsignedChar:(unsigned char)arg1 ;
-(BOOL)isCloseToNumber:(id)arg1 withinThreshold:(double)arg2 ;
-(BOOL)fm_isEqualToNumber:(id)arg1 withPrecision:(double)arg2 ;
-(BOOL)sd_isEqualToNumber:(id)arg1 ;
-(BOOL)brc_isDocumentID;
-(unsigned long long)brc_rawID;
-(BOOL)brc_isFolderOrAliasID;
-(NSNumber *)brc_documentID;
-(NSNumber *)brc_folderID;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(id)hk_midPointToValue:(id)arg1 percentage:(double)arg2 ;
-(BOOL)hk_animatable;
-(id)__ck_localizedString;
-(long long)_cnac_autocompleteAddressTypeValue;
-(double)cgFloatValue;
-(id)initWithCGFloat:(double)arg1 ;
-(id)MPMediaLibraryDataProviderSystemML3CoercedString;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(BOOL)ml_matchesValue:(id)arg1 usingComparison:(int)arg2 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(long long)cr_CRRecentIDValue;
-(long long)cr_CRContactIDValue;
-(unsigned long long)cr_CRContactGroupKindValue;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_ICSBoolAppendingToString:(id)arg1 ;
-(void)_ICSUTCOffsetAppendingToString:(id)arg1 ;
-(void)_ICSFBTypeAppendingToString:(id)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(unsigned long long)itemIdentifierValue;
-(id)initWithItemIdentifier:(unsigned long long)arg1 ;
-(id)localizedString;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)cl_json_serializeKey;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)CA_roundToIntegerFromValue:(id)arg1 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)CA_addValue:(id)arg1 multipliedBy:(int)arg2 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(Object*)CA_copyRenderValue;
-(SCD_Struct_NS51)decimalValue;
-(BOOL)isNSNumber__;
-(unsigned long long)_cfTypeID;
-(long long)_cfNumberType;
-(unsigned char)_getValue:(void*)arg1 forType:(long long)arg2 ;
-(long long)_reverseCompare:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)initWithChar:(char)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg1 ;
-(id)initWithShort:(short)arg1 ;
-(id)initWithUnsignedShort:(unsigned short)arg1 ;
-(BOOL)_getCString:(char*)arg1 length:(int)arg2 multiplier:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)integerValue;
-(double)doubleValue;
-(long long)compare:(id)arg1 ;
-(BOOL)boolValue;
-(int)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithLong:(long long)arg1 ;
-(float)floatValue;
-(unsigned long long)unsignedIntegerValue;
-(long long)longLongValue;
-(unsigned)unsignedIntValue;
-(NSString *)stringValue;
-(unsigned long long)unsignedLongLongValue;
-(id)initWithBool:(BOOL)arg1 ;
-(unsigned long long)unsignedLongValue;
-(id)initWithUnsignedInt:(unsigned)arg1 ;
-(id)initWithUnsignedLongLong:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithFloat:(float)arg1 ;
-(BOOL)isEqualToNumber:(id)arg1 ;
-(id)initWithInt:(int)arg1 ;
-(id)initWithInteger:(long long)arg1 ;
-(id)initWithUnsignedLong:(unsigned long long)arg1 ;
-(id)initWithUnsignedInteger:(unsigned long long)arg1 ;
-(char)charValue;
-(unsigned char)unsignedCharValue;
-(short)shortValue;
-(unsigned short)unsignedShortValue;
-(long long)longValue;
-(id)initWithLongLong:(long long)arg1 ;
-(id)initWithDouble:(double)arg1 ;
@end

