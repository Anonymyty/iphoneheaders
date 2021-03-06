/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>

@class _SFJavaScriptDialogTextView, UITextField, NSArray, UIView, UIStackView, _SFJavaScriptDialogView;

@interface _SFJavaScriptDialogContentView : UIView {

	_SFJavaScriptDialogTextView* _messageTextView;
	UITextField* _promptTextField;
	NSArray* _layoutConstraintsWhenPromptIsVisible;
	UIView* _separatorView;
	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	_SFJavaScriptDialogView* _dialogView;

}

@property (assign,nonatomic,__weak) _SFJavaScriptDialogView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setMessageText:(id)arg1 ;
-(void)setPromptText:(id)arg1 ;
-(void)setActionTitles:(id)arg1 ;
-(_SFJavaScriptDialogView *)dialogView;
-(void)setDialogView:(_SFJavaScriptDialogView *)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
@end

