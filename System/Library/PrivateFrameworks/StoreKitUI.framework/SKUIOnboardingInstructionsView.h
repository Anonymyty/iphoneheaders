/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray;

@interface SKUIOnboardingInstructionsView : UIView {

	UIEdgeInsets _contentInset;
	long long _contentPosition;
	UILabel* _explanationLabel;
	NSMutableArray* _labelsStack;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                 //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) UILabel * explanationLabel;              //@synthesize explanationLabel=_explanationLabel - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) long long contentPosition;                 //@synthesize contentPosition=_contentPosition - In the implementation block
+(id)titleAttributedStringWithString:(id)arg1 ;
+(id)explanationAttributedStringWithString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)explanationLabel;
-(void)setContentPosition:(long long)arg1 ;
-(void)pushLabelState;
-(void)popLabelState;
-(id)_newExplanationLabel;
-(void)setContentPosition:(long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(long long)contentPosition;
-(id)_newTitleLabel;
@end

