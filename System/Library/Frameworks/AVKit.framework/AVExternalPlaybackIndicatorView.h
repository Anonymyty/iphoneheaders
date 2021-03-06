/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel;

@interface AVExternalPlaybackIndicatorView : UIView {

	UIImage* _externalPlaybackIndicatorImageLarge;
	UIImage* _externalPlaybackIndicatorImageSmall;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleString:(id)arg1 subtitleString:(id)arg2 ;
@end

