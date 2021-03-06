/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:27:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface TSKCenterTilingImageView : UIView {

	UIImage* mLeftCapImage;
	UIImage* mCenterTileImage;
	UIImage* mRightCapImage;

}

@property (nonatomic,retain) UIImage * leftCapImage; 
@property (nonatomic,retain) UIImage * centerTileImage; 
@property (nonatomic,retain) UIImage * rightCapImage; 
-(void)setLeftCapImage:(UIImage *)arg1 ;
-(void)setCenterTileImage:(UIImage *)arg1 ;
-(void)setRightCapImage:(UIImage *)arg1 ;
-(UIImage *)leftCapImage;
-(UIImage *)centerTileImage;
-(UIImage *)rightCapImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
@end

