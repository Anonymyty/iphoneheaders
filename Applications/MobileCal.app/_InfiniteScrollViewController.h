/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol _InfiniteScrollViewControllerDelegate;
@interface _InfiniteScrollViewController : UIViewController {

	id<_InfiniteScrollViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_InfiniteScrollViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_InfiniteScrollViewControllerDelegate>)arg1 ;
-(id<_InfiniteScrollViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
@end

