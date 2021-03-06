/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ALAssetsLibraryAsset.h>

@class ALAssetsLibrary, PLManagedAsset, PLSidecarFile, NSString, PLPhotoLibrary;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {

	ALAssetsLibrary* _library;
	BOOL _isValid;
	PLManagedAsset* _photo;
	PLSidecarFile* _sidecar;
	NSString* _extension;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) PLSidecarFile * sidecar;                     //@synthesize sidecar=_sidecar - In the implementation block
@property (nonatomic,copy) NSString * extension;                          //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) ALAssetsLibrary * library; 
@property (assign,nonatomic) BOOL isValid;                                //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) PLManagedAsset * photo;                      //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * _photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_fileDescriptorForPersistentURL:(id)arg1 ;
+(int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2 ;
+(void)_clearFileDescriptorQueue;
+(void)_setupFileDescriptorQueue;
-(void)dealloc;
-(BOOL)isValid;
-(NSString *)extension;
-(void)setExtension:(NSString *)arg1 ;
-(BOOL)_isVideo;
-(BOOL)_isImage;
-(void)setPhoto:(PLManagedAsset *)arg1 ;
-(ALAssetsLibrary *)library;
-(void)setLibrary:(ALAssetsLibrary *)arg1 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4 ;
-(PLSidecarFile *)sidecar;
-(void)libraryDidChange;
-(PLPhotoLibrary *)_photoLibrary;
-(void)setSidecar:(PLSidecarFile *)arg1 ;
-(void)set_photoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLManagedAsset *)photo;
-(void)setIsValid:(BOOL)arg1 ;
@end

