/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint;

@interface SearchUIIconViewContainer : UIView {

	NSArray* _iconViews;
	NSLayoutConstraint* _trailingConstraint;
	NSArray* _spacerLayoutGuides;

}

@property (retain) NSArray * iconViews;                                  //@synthesize iconViews=_iconViews - In the implementation block
@property (retain) NSLayoutConstraint * trailingConstraint;              //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
@property (retain) NSArray * spacerLayoutGuides;                         //@synthesize spacerLayoutGuides=_spacerLayoutGuides - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
+(unsigned long long)maximumNumberOfColumns;
+(unsigned long long)numberOfColumnsForLandscape;
+(unsigned long long)numberOfColumnsForPortrait;
-(id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2 ;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setIconViews:(NSArray *)arg1 ;
-(void)setSpacerLayoutGuides:(NSArray *)arg1 ;
-(NSArray *)iconViews;
-(NSLayoutConstraint *)trailingConstraint;
-(NSArray *)spacerLayoutGuides;
@end

