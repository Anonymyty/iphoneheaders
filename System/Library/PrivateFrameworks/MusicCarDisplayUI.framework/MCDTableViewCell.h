/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIImage;

@interface MCDTableViewCell : UITableViewCell {

	UIImageView* _artworkImageView;
	double _originalLeadingInset;

}

@property (nonatomic,retain) UIImage * artworkImage; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
@end
