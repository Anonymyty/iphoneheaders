/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, HKUITodayCirclePulseBackground, CALayer;

@interface HKUITodayCirclePulseView : UIView {

	UIView* _backgroundContainer;
	HKUITodayCirclePulseBackground* _background;
	CALayer* _dayLabel;
	double _circleDiameter;

}

@property (assign,nonatomic) double circleDiameter;              //@synthesize circleDiameter=_circleDiameter - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)circleDiameter;
-(void)_layoutSubviews;
-(void)setCircleDiameter:(double)arg1 ;
-(void)pulse:(/*^block*/id)arg1 ;
-(void)setDayLabelContent:(id)arg1 ;
@end

