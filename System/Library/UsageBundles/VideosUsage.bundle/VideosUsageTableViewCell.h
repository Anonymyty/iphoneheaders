/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:05:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, NSLayoutConstraint, VideosUsageEntityItem, NSString;

@interface VideosUsageTableViewCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UILabel* _sizeLabel;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	VideosUsageEntityItem* _item;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic,__weak) VideosUsageEntityItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
-(void)configureForUsageItem:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(VideosUsageEntityItem *)item;
-(NSString *)title;
-(void)prepareForReuse;
-(void)updateConstraints;
-(UIImageView *)imageView;
-(void)setItem:(VideosUsageEntityItem *)arg1 ;
@end
