/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>
#import <libobjc.A.dylib/CKDParsedObject.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSData : NSObject <ASParsingLeafNode, CKDParsedObject, CKRecordValue, NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic,copy,readonly) NSData * fm_md5Hash; 
@property (nonatomic,copy,readonly) NSData * fm_sha1Hash; 
@property (nonatomic,copy,readonly) NSData * fm_sha256Hash; 
@property (nonatomic,copy,readonly) NSData * fm_sha512Hash; 
@property (nonatomic,copy,readonly) NSString * hexString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * md5; 
@property (nonatomic,readonly) NSData * SHA1Data; 
@property (nonatomic,readonly) NSString * SHA1HexString; 
@property (readonly) unsigned long long length; 
@property (readonly) const void* bytes; 
+(id)random128BitData:(id*)arg1 ;
+(id)keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned)arg3 error:(id*)arg4 ;
+(id)randomDataOfLength:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)pu_dataFromHexString:(id)arg1 ;
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
+(void)_gkLoadRemoteImageDataForUrl:(id)arg1 queue:(id)arg2 imageQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
+(void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)dataWithSockAddr:(const sockaddr*)arg1 ;
+(id)makeArchive:(const void*)arg1 length:(unsigned long long)arg2 level:(float)arg3 ;
+(id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(BOOL)arg2 error:(id*)arg3 ;
+(id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(BOOL)arg3 error:(id*)arg4 ;
+(id)da_dataWithHexString:(id)arg1 ;
+(id)da_dataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1 ;
+(id)pl_dataWithMappedContentsOfFileHandle:(id)arg1 ;
+(id)CKDataWithHexString:(id)arg1 stringIsUppercase:(BOOL)arg2 ;
+(id)CKDataWithHexString:(id)arg1 ;
+(id)CKDataFromBase64URLSafeString:(id)arg1 ;
+(id)dataFromHexadecimalString:(id)arg1 ;
+(unsigned long long)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1 ;
+(id)encodeCGPath:(CGPathRef)arg1 ;
+(CGPathRef)newCGPathDecodedFromData:(id)arg1 ;
+(id)__imDataWithHexString:(id)arg1 ;
+(id)__imDataWithRandomBytes:(unsigned long long)arg1 ;
+(id)MCDataWithHexString:(id)arg1 ;
+(id)MCDataWithCFData:(CFDataRef)arg1 ;
+(id)bs_dataWithVMAllocatedBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1 ;
+(id)dataWithContentsOfMappedFile:(id)arg1 ;
+(id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)data;
+(id)dataWithContentsOfFile:(id)arg1 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithContentsOfURL:(id)arg1 ;
+(id)dataWithData:(id)arg1 ;
-(id)afui_dataByCompressingWithGzip;
-(NSData *)fm_md5Hash;
-(NSData *)fm_sha1Hash;
-(NSData *)fm_sha256Hash;
-(NSData *)fm_sha512Hash;
-(NSString *)hexString;
-(id)SHA1Hash;
-(id)fileSafeBase64Encoding;
-(id)hexEncoding;
-(id)SHA256Hash;
-(id)encryptedDataWithKey:(id)arg1 tag:(id*)arg2 initialVector:(id*)arg3 error:(id*)arg4 ;
-(id)decryptedDataWithKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(id*)arg4 ;
-(id)unwrapWithKey:(id)arg1 error:(id*)arg2 ;
-(id)wrapWithKey:(id)arg1 error:(id*)arg2 ;
-(id)TT_gzipInflate;
-(id)TT_gzipDeflate;
-(id)shortDescription;
-(id)stringInHexFormat;
-(id)generateSHA1;
-(id)pu_hex;
-(long long)sd_compare:(id)arg1 ;
-(id)digestForSubCal;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(id)initForLengthTokenOfLength:(unsigned long long)arg1 ;
-(id)_gkBase64EncodedString;
-(id)initWithBase64EncodedString_gk:(id)arg1 ;
-(id)_gkSHA1HashString;
-(id)_gkMD5HashString;
-(id)_gkSHA1HashData;
-(id)_gkMD5HashData;
-(id)webSafeBase64Data;
-(sockaddr*)sockAddr;
-(BOOL)CDXTicketIsReflected;
-(BOOL)CDXTicketIsHolePunch;
-(unsigned long long)CDXTicketRevision;
-(long long)CDXTicketPID;
-(long long)CDXTicketPCNT;
-(id)CDXTicketExpirationDate;
-(const CDXTicket*)CDXTicket;
-(CDXTicket*)mutableCDXTicket;
-(unsigned long long)CDXTicketSID;
-(BOOL)CDXTicketIsStub;
-(id)CDXTicketTrimmed;
-(BOOL)CDXTicketWellFormed;
-(BOOL)CDXTicketIsRelatedToTicket:(id)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(id)gzipInflate;
-(id)gzipDeflate:(float)arg1 ;
-(id)propertyListForRadioResponseReturningError:(id*)arg1 ;
-(id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2 ;
-(void)hk_enumerateUUIDsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hk_countOfUUIDs;
-(id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4 ;
-(id)da_hexString;
-(id)da_lowercaseHexStringWithoutSpaces;
-(id)da_uppercaseHexStringWithoutSpaces;
-(unsigned long long)pl_advisoryLength;
-(void)pl_adviceWillNeed;
-(void)pl_adviceDoNotNeed;
-(id)safari_dataByCompressingData;
-(BOOL)safari_dataAppearsToBeCompressed;
-(id)safari_dataByDecompressingData;
-(NSString *)md5;
-(id)hexRepresentationWithSpaces_AS:(BOOL)arg1 ;
-(id)CertUIHexString;
-(id)ml_stringValueForSQL;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(id)cplSyncAnchorSimpleDescription;
-(id)cplQueryCursorSimpleDescription;
-(id)cplSyncAnchorDescription;
-(id)cplQueryCursorDescription;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)CKSHA256;
-(id)CKUppercaseHexStringWithoutSpaces;
-(id)CKLowercaseHexStringWithoutSpaces;
-(id)CKBase64URLSafeString;
-(id)CKHexString;
-(id)hexadecimalString;
-(id)MSInitWithBase64Encoding:(id)arg1 ;
-(id)MSBase64Encoding;
-(id)MSHexString;
-(id)cr_md5DigestHexString;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)aa_hexString;
-(id)ak_hexString;
-(id)_geo_uppercaseMD5HashString;
-(id)_geo_MD5Hash;
-(id)_geo_newXPCData;
-(id)mf_MD5Digest;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(NSRange)arg2 ;
-(id)mf_locationsOfUnixNewlinesNeedingConversion;
-(id)mf_subdataToIndex:(unsigned long long)arg1 ;
-(id)mf_subdataFromIndex:(unsigned long long)arg1 ;
-(NSRange)mf_rangeOfByteFromSet:(id)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 ;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned long long)arg2 ;
-(id)mf_dataByConvertingUnixNewlinesToNetwork;
-(id)mf_copyHexString;
-(NSRange)mf_rangeOfRFC822HeaderData;
-(NSRange)mf_rangeOfCString:(const char*)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)mf_decodeQuotedPrintableForText:(BOOL)arg1 ;
-(id)mf_decodeUuencoded;
-(id)mf_decodeBase64InRange:(NSRange*)arg1 ;
-(id)mf_encodeBase64HeaderData;
-(id)mf_encodeBase64WithoutLineBreaks;
-(id)mf_decodeBase64;
-(id)mf_encodeBase64;
-(id)mf_encodeModifiedBase64;
-(id)mf_decodeModifiedBase64;
-(BOOL)mf_immutable;
-(id)mf_subdataWithRange:(NSRange)arg1 ;
-(id)_cn_MD5Hash;
-(id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned long long)arg1 ;
-(id)_cn_decodeBase64;
-(id)_cn_decodeBase64IgnoringWhitespace;
-(id)sb_hexadecimalEncodedString;
-(id)abDecodedUTF7;
-(id)abStringAtRange:(NSRange)arg1 inEncoding:(unsigned long long)arg2 ;
-(BOOL)abIsUTF16EntourageVCard;
-(id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1 ;
-(id)abDecodeVCardBase64;
-(id)_FTDecompressData;
-(id)_FTStringFromBaseData;
-(id)_FTCopyGzippedData;
-(id)_FTOptionallyDecompressData;
-(id)subdataWithRangeNoCopy:(NSRange)arg1 ;
-(NSData *)SHA1Data;
-(NSString *)SHA1HexString;
-(id)__imHexStringOfBytes:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(id)__imHexString;
-(BOOL)_web_isCaseInsensitiveEqualToCString:(const char*)arg1 ;
-(id)_webkit_parseRFC822HeaderFields;
-(BOOL)_web_startsWithBlankLine;
-(long long)_web_locationAfterFirstBlankLine;
-(id)_webkit_guessedMIMETypeForXML;
-(id)_webkit_guessedMIMEType;
-(id)MCHexString;
-(id)MCBase64String;
-(id)MCInitWithBase64String:(id)arg1 ;
-(id)MCSHA1Hash;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(void*)bs_bytesForMIG;
-(unsigned)bs_lengthForMIG;
-(id)_CUTDecompressData;
-(id)_CUTStringFromBaseData;
-(id)_CUTOptionallyDecompressData;
-(id)_CUTCopyGzippedData;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_guessedMIMETypeForXML;
-(id)_web_guessedMIMEType;
-(id)_web_guessedMIMETypeForExtension:(id)arg1 ;
-(id)_web_parseRFC822HeaderFields;
-(id)_replaceCString:(const char*)arg1 withCString:(const char*)arg2 ;
-(BOOL)isNSData__;
-(id)replacementObjectForCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(BOOL)_isDispatchData;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_canReplaceWithDispatchDataForXPCCoder;
-(BOOL)_isCompactAndReturnBytes:(const void*)arg1 ;
-(BOOL)_isCompact;
-(BOOL)_copyWillRetain;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)_decodeBase64EncodedCharacterBuffer:(const char*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char*)arg4 bufferLength:(unsigned long long)arg5 state:(SCD_Struct_NS15*)arg6 ;
-(id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_base64EncodingAsString:(BOOL)arg1 withOptions:(unsigned long long)arg2 ;
-(id)_asciiDescription;
-(BOOL)_allowsDirectEncoding;
-(void)getBytes:(void*)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 error:(id*)arg2 ;
-(id)_createDispatchData;
-(id)base64EncodedDataWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64Encoding:(id)arg1 ;
-(id)base64Encoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)length;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)base64EncodedStringWithOptions:(unsigned long long)arg1 ;
-(id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(BOOL)isEqualToData:(id)arg1 ;
-(void)enumerateByteRangesUsingBlock:(/*^block*/id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_isSafeResumeDataForBackgroundDownload;
@end

