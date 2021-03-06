/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:53 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol SLTwitterAccountCreationDelegate;
@class PSSpecifier, NSString;

@interface SLTwitterAccountCreationController : ACUIViewController {

	BOOL _geoEnabled;
	BOOL _findByEmail;
	PSSpecifier* _signUpSpecifier;
	PSSpecifier* _legalSpecifier;
	id<SLTwitterAccountCreationDelegate> _delegate;
	NSString* _fullname;
	NSString* _username;
	NSString* _email;
	NSString* _password;
	NSString* _verify;

}

@property (assign,nonatomic,__weak) id<SLTwitterAccountCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * fullname;                                                 //@synthesize fullname=_fullname - In the implementation block
@property (nonatomic,copy) NSString * username;                                                 //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * email;                                                    //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * password;                                                 //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * verify;                                                   //@synthesize verify=_verify - In the implementation block
+(id)_accountCreationCredential;
-(void)setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_viewPrivacyPolicyLinkTapped:(id)arg1 ;
-(void)_presentInvalidEmailAddress;
-(void)_presentPasswordTooShort;
-(void)setFindByEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(id)passwordWithSpecifier:(id)arg1 ;
-(void)setEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_viewTermsOfServiceLinkTapped:(id)arg1 ;
-(void)signUpButtonClicked:(id)arg1 ;
-(void)setFullName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentPasswordVerifyDoNotMatch;
-(void)setVerify:(NSString *)arg1 ;
-(id)localizedTitleForErrorEntry:(id)arg1 ;
-(void)_presentResponseErrors:(id)arg1 ;
-(id)findByEmailWithSpecifier:(id)arg1 ;
-(id)fullNameWithSpecifier:(id)arg1 ;
-(void)setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)usernameWithSpecifier:(id)arg1 ;
-(id)verifyWithSpecifier:(id)arg1 ;
-(id)locationWithSpecifier:(id)arg1 ;
-(void)_createAccount;
-(void)setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)_validateValues;
-(BOOL)_haveEnoughValuesForValidation;
-(void)setLocation:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_presentErrorCreatingAccount;
-(id)emailWithSpecifier:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDelegate:(id<SLTwitterAccountCreationDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SLTwitterAccountCreationDelegate>)delegate;
-(void)viewDidLoad;
-(void)setEmail:(NSString *)arg1 ;
-(void)returnPressedAtEnd;
-(NSString *)email;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)cancelButtonClicked:(id)arg1 ;
-(NSString *)fullname;
-(void)setFullname:(NSString *)arg1 ;
-(void)_updateDoneButton;
-(id)specifiers;
-(void)propertyValueChanged:(id)arg1 ;
-(void)updateNavButtons;
-(NSString *)verify;
-(id)currentLanguage;
@end

