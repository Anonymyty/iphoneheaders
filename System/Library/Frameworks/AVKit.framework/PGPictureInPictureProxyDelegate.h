/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureProxyDelegate <NSObject>
@optional
-(void)pictureInPictureProxyDidStopPictureInPicture:(id)arg1;
-(void)pictureInPictureProxyWillCancelPictureInPicture:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;
-(void)pictureInPictureProxyDidCancelPictureInPicture:(id)arg1;
-(void)pictureInPictureProxyFailedToStartPictureInPicture:(id)arg1 withError:(id)arg2;
-(CGRect*)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxyWillStopPictureInPicture:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;
-(void)pictureInPictureProxyWillStartPictureInPicture:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
-(void)pictureInPictureProxyDidStartPictureInPicture:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
-(void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;
-(void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;

@end

