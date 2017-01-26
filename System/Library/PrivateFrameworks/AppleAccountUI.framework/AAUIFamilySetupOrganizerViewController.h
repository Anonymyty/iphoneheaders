/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIConfirmIdentityViewController.h>
#import <libobjc.A.dylib/AAUIFamilySetupPage.h>

@protocol AAUIFamilySetupPageDelegate;
@class NSString;

@interface AAUIFamilySetupOrganizerViewController : AAUIConfirmIdentityViewController <AAUIFamilySetupPage> {

	id<AAUIFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AAUIFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AAUIFamilySetupPageDelegate>)arg1 ;
-(id<AAUIFamilySetupPageDelegate>)delegate;
-(void)viewDidLoad;
-(id)pageTitle;
-(id)instructions;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(BOOL)shouldShowInviteeInstructions;
-(id)_createCancelButton;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end
