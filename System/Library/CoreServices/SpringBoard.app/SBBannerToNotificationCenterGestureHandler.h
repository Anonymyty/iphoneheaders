/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBannerGestureHandler.h>

@interface SBBannerToNotificationCenterGestureHandler : SBBannerGestureHandler {

	BOOL _canPullDown;
	BOOL _didPreparePullDown;
	CGSize _rootSize;
	CGSize _pullDownSize;
	CGRect _pullDownTargetRect;
	double _bannerHeight;
	BOOL _bannerHidden;
	BOOL _shouldObscure;

}
-(void)_updateWithDisplacement:(double)arg1 velocity:(double)arg2 ;
-(BOOL)handleGestureType:(long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 displacement:(double)arg4 velocity:(double)arg5 ;
@end
