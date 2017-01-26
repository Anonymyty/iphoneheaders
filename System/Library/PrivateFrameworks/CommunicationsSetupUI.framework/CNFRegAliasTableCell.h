/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface CNFRegAliasTableCell : PSTableCell {

	BOOL _hidesDisclosureButton;
	BOOL _hasSpinner;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) BOOL hasSpinner;                                //@synthesize hasSpinner=_hasSpinner - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(BOOL)usesStandardBackgroundImage;
-(void)setHasSpinner:(BOOL)arg1 ;
-(void)setHidesDisclosureButton:(BOOL)arg1 ;
-(void)_updateIcon;
-(BOOL)hasSpinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
