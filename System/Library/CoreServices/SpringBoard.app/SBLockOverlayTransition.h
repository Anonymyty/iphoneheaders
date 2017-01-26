/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : NSObject {

	SBLockOverlayContext* _from;
	SBLockOverlayContext* _to;
	SBLockScreenViewController* _lockScreenVC;

}
+(id)underlayRequesterNameForContext:(id)arg1 ;
-(id)initFromOverlay:(id)arg1 toOverlay:(id)arg2 inside:(id)arg3 ;
-(void)performTransitionWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideLockContent;
@end
