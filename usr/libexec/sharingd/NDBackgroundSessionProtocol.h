/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:28 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDBackgroundSessionProtocol <NSObject>
@required
-(void)invalidateWithReply:(/*^block*/id)arg1;
-(void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 potentialCredentials:(id)arg6 reply:(/*^block*/id)arg7;
-(void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 reply:(/*^block*/id)arg5;
-(void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 options:(id)arg5 identifier:(unsigned long long)arg6 reply:(/*^block*/id)arg7;
-(void)resetStorageWithReply:(/*^block*/id)arg1;
-(void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
-(void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
-(void)resumeTaskWithIdentifier:(unsigned long long)arg1;
-(void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(/*^block*/id)arg2;
-(void)suspendTaskWithIdentifier:(unsigned long long)arg1;
-(void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
-(void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;
-(void)cancelTaskWithIdentifier:(unsigned long long)arg1;

@end
