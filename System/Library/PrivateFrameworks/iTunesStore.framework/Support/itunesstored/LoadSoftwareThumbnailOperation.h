/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:22:42 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSURL, ApplicationHandle;

@interface LoadSoftwareThumbnailOperation : ISOperation {

	BOOL _storeDownload;
	NSURL* _thumbnailURL;
	ApplicationHandle* _applicationHandle;

}

@property (getter=isStoreDownload) BOOL storeDownload; 
@property (nonatomic,copy) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
-(void)setApplicationHandle:(ApplicationHandle *)arg1 ;
-(ApplicationHandle *)applicationHandle;
-(BOOL)isStoreDownload;
-(id)initWithApplicationHandle:(id)arg1 thumbnailURL:(id)arg2 ;
-(id)_artworkDataWithError:(id*)arg1 ;
-(void)setStoreDownload:(BOOL)arg1 ;
-(void)run;
@end
