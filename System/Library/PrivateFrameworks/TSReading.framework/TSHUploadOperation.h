/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSHOperation.h>

@class NSArray, NSMutableArray, NSURL, NSMutableDictionary, NSNumber, TSURetainedPointerKeyDictionary;

@interface TSHUploadOperation : TSHOperation {

	NSArray* mExceptPaths;
	NSMutableArray* mUploadedPaths;
	NSURL* mSourceURL;
	NSMutableDictionary* mFileSizes;
	NSNumber* mSizeOfIncludedFiles;
	NSNumber* mSizeOfUploadedFiles;
	NSNumber* mSizeOfUploadingFiles;
	TSURetainedPointerKeyDictionary* mSubpathsForRequests;
	TSURetainedPointerKeyDictionary* mTransmittedBytesForRequests;
	BOOL mBytesSentTwice;

}
-(void)populateFileSizes:(id)arg1 ;
-(BOOL)shouldUploadPath:(id)arg1 ;
-(id)makeCollectionAtPath:(id)arg1 error:(id*)arg2 ;
-(id)uploadFileAtPath:(id)arg1 error:(id*)arg2 ;
-(id)dummyPutAtPath:(id)arg1 ;
-(BOOL)uploadSubpath:(id)arg1 after:(id)arg2 error:(id*)arg3 ;
-(BOOL)uploadResource:(id)arg1 after:(id)arg2 error:(id*)arg3 ;
-(id)propFindAtPath:(id)arg1 ;
-(id)remoteURLForSourcePath:(id)arg1 ;
-(void)uploadResources;
-(void)start:(id)arg1 notifyWhenFinished:(id)arg2 ;
-(void)requestQueue:(id)arg1 didCompleteRequest:(id)arg2 ;
-(void)requestQueue:(id)arg1 willStartRequest:(id)arg2 ;
-(id)initWithURL:(id)arg1 source:(id)arg2 user:(id)arg3 password:(id)arg4 persistence:(unsigned long long)arg5 exceptPaths:(id)arg6 delegate:(id)arg7 ;
-(id)initWithAccount:(id)arg1 andPath:(id)arg2 source:(id)arg3 exceptPaths:(id)arg4 delegate:(id)arg5 ;
-(id)sizeOfIncludedFiles;
-(id)sizeOfUploadedFiles;
-(id)sizeOfUploadingFiles;
-(unsigned long long)bytesTransmittedOfUploadingFiles;
-(void)dealloc;
-(id)description;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)sourceURL;
@end
