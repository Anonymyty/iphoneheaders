/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:21 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIMainScreenAnimationController.h>

@interface SBUIPresentSwitcherAnimationController : SBUIMainScreenAnimationController {

	BOOL _isInteractive;

}
-(id)_getTransitionWindow;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(BOOL)canTransitionWithTranslation;
-(id)initWithTransitionContextProvider:(id)arg1 interactive:(BOOL)arg2 ;
-(void)endTransition:(BOOL)arg1 withSuccess:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_startAnimation;
@end

