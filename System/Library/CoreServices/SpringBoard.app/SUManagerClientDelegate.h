/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUManagerClientDelegate <NSObject>
@optional
-(void)client:(id)arg1 scanRequestDidStartForOptions:(id)arg2;
-(void)client:(id)arg1 scanRequestDidFinishForOptions:(id)arg2 update:(id)arg3 error:(id)arg4;
-(void)client:(id)arg1 scanDidCompleteWithNewUpdateAvailable:(id)arg2 error:(id)arg3;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2;
-(void)client:(id)arg1 downloadDidStart:(id)arg2;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2;
-(void)client:(id)arg1 installDidStart:(id)arg2;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3;
-(void)client:(id)arg1 installDidFinish:(id)arg2;

@end

