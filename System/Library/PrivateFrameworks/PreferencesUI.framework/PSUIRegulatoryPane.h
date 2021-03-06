/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UIScrollView, UIImageView;

@interface PSUIRegulatoryPane : PSEditingPane {

	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldInsetContent;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
@end

