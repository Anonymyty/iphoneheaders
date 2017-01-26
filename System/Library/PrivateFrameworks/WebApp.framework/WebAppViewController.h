/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebApp/WebApp-Structs.h>
#import <UIKit/UIViewController.h>

@class WebAppController;

@interface WebAppViewController : UIViewController {

	BOOL _setupRootViewColor;
	unsigned long long _statusBarStyle;
	WebAppController* _webAppController;

}

@property (assign,nonatomic) unsigned long long statusBarStyle;                       //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic,__weak) WebAppController * webAppController;              //@synthesize webAppController=_webAppController - In the implementation block
-(unsigned long long)statusBarStyle;
-(long long)preferredStatusBarStyle;
-(void)setStatusBarStyle:(unsigned long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(WebAppController *)webAppController;
-(void)setWebAppController:(WebAppController *)arg1 ;
@end
