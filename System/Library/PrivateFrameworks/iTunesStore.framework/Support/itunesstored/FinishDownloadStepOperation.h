/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:41 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadStepOperation : ISOperation {

	FinishDownloadMemoryEntity* _download;
	NSString* _downloadPhase;
	double _progressFraction;
	/*^block*/id _outputBlock;

}

@property (nonatomic,readonly) FinishDownloadMemoryEntity * download;              //@synthesize download=_download - In the implementation block
@property (copy) NSString * downloadPhase; 
@property (assign) double progressFraction; 
@property (copy) id outputBlock; 
-(void)finishWithDownloadResponse:(id)arg1 ;
-(BOOL)installAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(void)addPurchaseManifestItem;
-(BOOL)rollbackAsset:(id)arg1 error:(id*)arg2 ;
-(void)addPurchaseManifestItemWithLibraryIdentifier:(id)arg1 ;
-(id)_newURLOperationWithAsset:(id)arg1 ;
-(BOOL)moveAsset:(id)arg1 toPath:(inout id*)arg2 installBehavior:(long long)arg3 error:(id*)arg4 ;
-(BOOL)moveFile:(id)arg1 toPath:(inout id*)arg2 installBehavior:(long long)arg3 error:(id*)arg4 ;
-(id)documentsDirectoryPathWithClientIdentifier:(id)arg1 downloadKind:(id)arg2 ;
-(BOOL)downloadAndInstallAsset:(id)arg1 error:(id*)arg2 ;
-(BOOL)downloadAsset:(id)arg1 error:(id*)arg2 ;
-(void)setProgressFraction:(double)arg1 ;
-(BOOL)unzipAsset:(id)arg1 unzippedPath:(id*)arg2 error:(id*)arg3 ;
-(FinishDownloadMemoryEntity *)download;
-(id)initWithDownload:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(NSString *)downloadPhase;
-(void)setDownloadPhase:(NSString *)arg1 ;
-(id)outputBlock;
-(double)progressFraction;
@end

