/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBLockScreenPluginTransitionContext;

@interface SBLockScreenPluginTransition : NSObject {

	SBLockScreenPluginTransitionContext* _context;

}

@property (nonatomic,readonly) SBLockScreenPluginTransitionContext * context;              //@synthesize context=_context - In the implementation block
-(void)_removeFromView;
-(void)_addToView;
-(void)_removeViewFromHierarchy:(id)arg1 ;
-(SBLockScreenPluginTransitionContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)beginTransition;
@end
