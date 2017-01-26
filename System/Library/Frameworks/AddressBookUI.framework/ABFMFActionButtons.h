/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABFMFActionButtonsDelegate.h>

@class ABUnknownPersonViewController, UIButton, NSString;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {

	ABUnknownPersonViewController* _upvc;
	UIButton* _messageButton;
	UIButton* _facetimeButton;
	UIButton* _callButton;

}

@property (assign,nonatomic) void* displayedPerson; 
@property (nonatomic,readonly) BOOL hasTelephonyCapability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void*)displayedPerson;
-(BOOL)hasTelephonyCapability;
-(void)showFMFMessageButton:(BOOL)arg1 withAction:(id)arg2 ;
-(void)showFMFFacetimeButton:(BOOL)arg1 withAction:(id)arg2 ;
-(void)showFMFCallButton:(BOOL)arg1 withAction:(id)arg2 ;
-(id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3 ;
-(void)setDisplayedPerson:(void*)arg1 ;
@end
