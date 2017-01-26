/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@protocol SPUISearchTableHeaderViewDelegate;
@class UILabel, UIButton, NSArray;

@interface SPUISearchTableHeaderView : UITableViewHeaderFooterView {

	id<SPUISearchTableHeaderViewDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _moreButton;
	unsigned long long _section;
	NSArray* _moreButtonHiddenConstraints;
	NSArray* _moreButtonVisibleConstraints;

}

@property (assign,nonatomic) id<SPUISearchTableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                                       //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) unsigned long long section;                                  //@synthesize section=_section - In the implementation block
@property (retain) NSArray * moreButtonHiddenConstraints;                                 //@synthesize moreButtonHiddenConstraints=_moreButtonHiddenConstraints - In the implementation block
@property (retain) NSArray * moreButtonVisibleConstraints;                                //@synthesize moreButtonVisibleConstraints=_moreButtonVisibleConstraints - In the implementation block
-(void)setDelegate:(id<SPUISearchTableHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SPUISearchTableHeaderViewDelegate>)delegate;
-(unsigned long long)section;
-(UILabel *)titleLabel;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSection:(unsigned long long)arg1 ;
-(UIButton *)moreButton;
-(void)moreButtonPressed;
-(void)updateWithTitle:(id)arg1 section:(unsigned long long)arg2 isExpanded:(BOOL)arg3 ;
-(void)setMoreButtonVisible:(BOOL)arg1 ;
-(void)setMoreButton:(UIButton *)arg1 ;
-(NSArray *)moreButtonHiddenConstraints;
-(void)setMoreButtonHiddenConstraints:(NSArray *)arg1 ;
-(NSArray *)moreButtonVisibleConstraints;
-(void)setMoreButtonVisibleConstraints:(NSArray *)arg1 ;
@end
