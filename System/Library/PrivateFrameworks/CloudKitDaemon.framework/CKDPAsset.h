/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CKDPProtectionInfo, CKDPRecordIdentifier;

@interface CKDPAsset : PBCodable <NSCopying> {

	long long _downloadTokenExpiration;
	long long _downloadURLExpiration;
	long long _size;
	NSString* _contentBaseURL;
	NSData* _data;
	NSString* _derivedContentType;
	NSString* _downloadBaseURL;
	NSData* _downloadRequest;
	NSString* _downloadToken;
	NSData* _header;
	NSString* _owner;
	CKDPProtectionInfo* _protectionInfo;
	CKDPRecordIdentifier* _recordId;
	NSData* _referenceSignature;
	NSString* _requestor;
	NSData* _signature;
	NSString* _uploadReceipt;
	SCD_Struct_CK10 _has;

}

@property (nonatomic,readonly) BOOL hasOwner; 
@property (nonatomic,retain) NSString * owner;                                 //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                               //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) NSData * header;                                  //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) long long size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadToken; 
@property (nonatomic,retain) NSString * downloadToken;                         //@synthesize downloadToken=_downloadToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadRequest; 
@property (nonatomic,retain) NSData * downloadRequest;                         //@synthesize downloadRequest=_downloadRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasDerivedContentType; 
@property (nonatomic,retain) NSString * derivedContentType;                    //@synthesize derivedContentType=_derivedContentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentBaseURL; 
@property (nonatomic,retain) NSString * contentBaseURL;                        //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestor; 
@property (nonatomic,retain) NSString * requestor;                             //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordId;                  //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadReceipt; 
@property (nonatomic,retain) NSString * uploadReceipt;                         //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hasDownloadBaseURL; 
@property (nonatomic,retain) NSString * downloadBaseURL;                       //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadURLExpiration; 
@property (assign,nonatomic) long long downloadURLExpiration;                  //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceSignature; 
@property (nonatomic,retain) NSData * referenceSignature;                      //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadTokenExpiration; 
@property (assign,nonatomic) long long downloadTokenExpiration;                //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
-(long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(NSString *)owner;
-(void)setOwner:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasData;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setDownloadToken:(NSString *)arg1 ;
-(NSString *)downloadToken;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasProtectionInfo;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(NSData *)signature;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(NSData *)referenceSignature;
-(NSString *)uploadReceipt;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(NSString *)downloadBaseURL;
-(long long)downloadURLExpiration;
-(void)setRecordId:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordId;
-(long long)downloadTokenExpiration;
-(NSString *)contentBaseURL;
-(NSString *)requestor;
-(void)setContentBaseURL:(NSString *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(void)setDownloadTokenExpiration:(long long)arg1 ;
-(BOOL)hasOwner;
-(void)setDownloadRequest:(NSData *)arg1 ;
-(void)setDerivedContentType:(NSString *)arg1 ;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(BOOL)hasDownloadToken;
-(BOOL)hasDownloadRequest;
-(BOOL)hasDerivedContentType;
-(BOOL)hasContentBaseURL;
-(BOOL)hasRequestor;
-(BOOL)hasUploadReceipt;
-(BOOL)hasDownloadBaseURL;
-(void)setDownloadURLExpiration:(long long)arg1 ;
-(void)setHasDownloadURLExpiration:(BOOL)arg1 ;
-(BOOL)hasDownloadURLExpiration;
-(BOOL)hasReferenceSignature;
-(void)setHasDownloadTokenExpiration:(BOOL)arg1 ;
-(BOOL)hasDownloadTokenExpiration;
-(NSData *)downloadRequest;
-(NSString *)derivedContentType;
-(CKDPRecordIdentifier *)recordId;
-(void)setHeader:(NSData *)arg1 ;
-(NSData *)header;
-(BOOL)hasHeader;
@end
