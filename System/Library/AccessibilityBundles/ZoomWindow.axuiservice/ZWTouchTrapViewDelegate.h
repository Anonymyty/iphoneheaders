/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZWTouchTrapViewDelegate <NSObject>
@required
-(void)touchTrapViewActivated:(id)arg1;
-(BOOL)touchTrapView:(id)arg1 shouldReportSelfInHitTestAtLocation:(CGPoint)arg2;
-(void)touchTrapView:(id)arg1 didTrapTouches:(id)arg2 withEvent:(id)arg3;

@end
