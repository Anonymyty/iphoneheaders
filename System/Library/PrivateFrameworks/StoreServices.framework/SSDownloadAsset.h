/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSURLRequest, NSArray, NSString;

@interface SSDownloadAsset : SSEntity {

	long long _assetType;
	SSURLRequestProperties* _localProperties;

}

@property (retain,readonly) NSURLRequest * URLRequest; 
@property (readonly) NSArray * sinfs; 
@property (readonly) long long fileSize; 
@property (readonly) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) SSURLRequestProperties * URLRequestProperties; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(long long)assetType;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
-(void)dealloc;
-(BOOL)isExternal;
-(long long)fileSize;
-(id)copyXPCEncoding;
-(long long)bytesDownloaded;
-(SSURLRequestProperties *)URLRequestProperties;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(NSURLRequest *)URLRequest;
-(NSArray *)sinfs;
-(long long)bytesUploaded;
@end

