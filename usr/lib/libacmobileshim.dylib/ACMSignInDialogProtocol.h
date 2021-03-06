/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:17:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMSignInDialogProtocol <NSObject>
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@required
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<ACMSignInDialogDelegate>)delegate;
-(void)setPasswordString:(id)arg1;
-(NSString *)passwordString;
-(NSString *)requestedUserName;
-(void)disableControls:(BOOL)arg1;
-(void)setRequestedUserName:(id)arg1;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(NSString *)userNameString;

@end

