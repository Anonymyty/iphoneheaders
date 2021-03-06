/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, NSDate, UIFont;

@interface DayTwoPartLabel : UIView {

	UILabel* _firstLabel;
	UILabel* _secondLabel;
	UILabel* _entireString;
	UILabel* _overlayLabel;
	NSDate* _date;
	BOOL _useSeparateFormat;
	BOOL _dayNameOnLeft;
	BOOL _showOverlayDate;

}

@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) BOOL showOverlayDate;                              //@synthesize showOverlayDate=_showOverlayDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromBoundsTop; 
-(id)createCopy;
-(double)baselineOffsetFromBoundsTop;
-(void)setShowOverlayDate:(BOOL)arg1 ;
-(void)_resetUI;
-(void)_updateOverlayLabel;
-(void)setDayOfWeekString:(id)arg1 ;
-(void)setDateYearString:(id)arg1 ;
-(void)_copyLabelParametersFrom:(id)arg1 to:(id)arg2 ;
-(id)dayOfWeekString;
-(id)dateYearString;
-(BOOL)showOverlayDate;
-(void)setBackgroundColor:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(NSDate *)date;
-(void)setFont:(UIFont *)arg1 ;
-(void)sizeToFit;
-(UIFont *)font;
-(void)setDate:(NSDate *)arg1 ;
-(void)localeChanged;
-(void)_createSubviews;
@end

