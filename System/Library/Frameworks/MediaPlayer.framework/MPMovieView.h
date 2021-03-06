/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MPMovieViewDelegate;
@interface MPMovieView : UIView {

	id<MPMovieViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPMovieViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MPMovieViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id<MPMovieViewDelegate>)delegate;
-(void)willMoveToWindow:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
@end

