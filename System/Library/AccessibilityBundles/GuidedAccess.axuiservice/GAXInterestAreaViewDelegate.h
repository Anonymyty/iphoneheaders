/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:23:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXInterestAreaViewDelegate <NSObject>
@optional
-(BOOL)interestAreaView:(id)arg1 shouldDisableSmartLayoutRelativeToEdgesForInterestAreaPathAtIndex:(unsigned long long)arg2;
-(BOOL)interestAreaViewIsAccessibilityElement:(id)arg1;
-(BOOL)canInteractWithInterestAreaView:(id)arg1;
-(void)interestAreaView:(id)arg1 willBeginMovingResizingKnobAtPosition:(unsigned long long)arg2 forInterestAreaPathAtIndex:(unsigned long long)arg3;
-(void)interestAreaView:(id)arg1 willBeginMovingInterestAreaPathAtIndex:(unsigned long long)arg2;
-(void)interestAreaView:(id)arg1 resizingKnobAtPosition:(unsigned long long)arg2 wasMovedToPoint:(CGPoint)arg3 forInterestAreaPathAtIndex:(unsigned long long)arg4 constrainedResizingKnobCenter:(CGPoint*)arg5;
-(void)interestAreaView:(id)arg1 interestAreaPathAtIndex:(unsigned long long)arg2 wasMovedWithTranslation:(CGPoint)arg3;
-(void)interestAreaView:(id)arg1 didFinishMovingResizingKnobAtPosition:(unsigned long long)arg2 forInterestAreaPathAtIndex:(unsigned long long)arg3;
-(void)interestAreaView:(id)arg1 didFinishMovingInterestAreaPathAtIndex:(unsigned long long)arg2;
-(void)interestAreaView:(id)arg1 didActivateCloseButtonForInterestAreaPathAtIndex:(unsigned long long)arg2;
-(unsigned long long)interestAreaView:(id)arg1 visibleKnobPositionsForInterestAreaPathAtIndex:(unsigned long long)arg2;
-(BOOL)interestAreaView:(id)arg1 shouldAddCloseButtonForInterestAreaPathAtIndex:(unsigned long long)arg2;
-(double)scaleForSpecialControlsInInterestAreaView:(id)arg1;

@end

