/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity <NSCopying> {

	NSArray* _assets;
	SSDownloadPolicy* _downloadPolicy;

}

@property (nonatomic,copy) NSArray * assets;                               //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) SSDownloadPolicy * downloadPolicy;              //@synthesize downloadPolicy=_downloadPolicy - In the implementation block
+(Class)databaseEntityClass;
-(id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2 ;
-(id)anyAssetForAssetType:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(id)initWithExternalManifestDictionary:(id)arg1 ;
-(id)initWithClientXPCDownload:(id)arg1 ;
-(BOOL)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAssetsWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setAssetsWithExternalThinnedAssets:(id)arg1 error:(id*)arg2 ;
-(id)_copyValidAssetsWithExternalAssets:(id)arg1 validateVariants:(BOOL)arg2 ;
-(id)assetForAssetIdentifier:(long long)arg1 ;
-(void)removeAssetsWithAssetType:(id)arg1 ;
-(void)unionNetworkConstraints:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(id)initWithStoreDownload:(id)arg1 ;
@end

