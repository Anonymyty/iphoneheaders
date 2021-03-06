/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol OS_dispatch_source;
@class MusicMatchLoadingView, NSObject, NSString;

@interface MusicMatchLoadingViewController : UIViewController {

	MusicMatchLoadingView* _matchLoadingView;
	NSObject*<OS_dispatch_source> _updateTimerSource;
	NSString* _loadingTitle;

}

@property (nonatomic,retain) NSString * loadingTitle;              //@synthesize loadingTitle=_loadingTitle - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(void)_updateCloudProgressAnimated:(BOOL)arg1 ;
-(NSString *)loadingTitle;
@end

