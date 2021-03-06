/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SiriPhoneEmergencyCallView : UIView {

	NSString* _countdownText;
	UILabel* _countdownLabel;

}

@property (nonatomic,copy) NSString * countdownText;                  //@synthesize countdownText=_countdownText - In the implementation block
@property (nonatomic,readonly) UILabel * countdownLabel;              //@synthesize countdownLabel=_countdownLabel - In the implementation block
-(NSString *)countdownText;
-(void)setCountdownText:(NSString *)arg1 ;
-(UILabel *)countdownLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

