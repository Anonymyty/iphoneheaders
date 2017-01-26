/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <libobjc.A.dylib/CRCodeRedeemerControllerDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemCameraViewDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemCameraViewControllerDelegate.h>

@protocol SKUIRedeemCameraViewControllerDelegate;
@class CRCodeRedeemerController, UIBarButtonItem, NSString, SKUIRedeem;

@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SKUIRedeemCameraViewDelegate, SKUIRedeemCameraViewControllerDelegate> {

	BOOL _alreadyPushed;
	CRCodeRedeemerController* _camera;
	long long _category;
	UIBarButtonItem* _redeemButton;
	UIBarButtonItem* _flipButton;
	NSString* _initialCode;
	SKUIRedeem* _successfulRedeem;
	BOOL _fullscreen;
	id<SKUIRedeemCameraViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) long long category;                                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                                                    //@synthesize initialCode=_initialCode - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIRedeemCameraViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SKUIRedeemCameraViewControllerDelegate>)delegate;
-(long long)category;
-(BOOL)_enabled;
-(void)loadView;
-(id)contentScrollView;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)_setEnabled:(BOOL)arg1 ;
-(NSString *)initialCode;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)_redeemAction:(id)arg1 ;
-(void)_flipAction:(id)arg1 ;
-(void)SKUIRedeemPreflightImagesDidLoad:(id)arg1 ;
-(void)_redeemDidFinish:(id)arg1 error:(id)arg2 ;
-(id)initWithRedeemCategoryFullscreen:(long long)arg1 ;
-(void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2 ;
-(void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2 ;
-(void)codeRedeemerControllerDidCancel:(id)arg1 ;
-(void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2 ;
-(void)codeRedeemerControllerDidDisplayMessage:(id)arg1 ;
-(id)redeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2 ;
-(void)SKUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2 ;
-(void)cancelRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)startRedeemerViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)presentFullScreenCameraViewForSKUIRedeemCameraView:(id)arg1 ;
-(void)showITunesPassLearnMoreForSKUIRedeemCameraView:(id)arg1 ;
-(void)_cancelAction:(id)arg1 ;
@end
