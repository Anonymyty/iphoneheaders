/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPPackage.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUTemporaryDirectory, NSMutableDictionary, TSUZipArchive;

@interface TSPFilePackage : TSPPackage {

	NSObject*<OS_dispatch_queue> _bookmarkDataQueue;
	TSUTemporaryDirectory* _dataDirectory;
	NSMutableDictionary* _dataURLMap;
	TSUZipArchive* _componentZipArchive;

}
+(BOOL)isValidPackageAtURL:(id)arg1 ;
+(id)zipArchiveURLFromPackageURL:(id)arg1 ;
+(unsigned long long)zipArchiveOptions;
+(BOOL)isValidPackageAtZipArchive:(id)arg1 ;
-(long long)packageType;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3 ;
-(id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2 ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg1 ;
-(BOOL)hasDataAtRelativePath:(id)arg1 ;
-(id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6 ;
-(id)componentZipArchive;
-(BOOL)didReloadZipArchive:(id)arg1 error:(id*)arg2 ;
-(id)bookmarkDataForDataStorage:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)bookmarkDataNeedsWriteForDataStorage:(id)arg1 options:(unsigned long long)arg2 ;
@end
