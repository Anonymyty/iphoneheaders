/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, ANNotificationAction, NSDictionary;

@interface ANAccountNotification : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _accountTypeID;
	NSString* _title;
	NSString* _message;
	NSDate* _date;
	NSString* _activateButtonTitle;
	NSString* _dismissButtonTitle;
	ANNotificationAction* _activateAction;
	ANNotificationAction* _dismissAction;
	ANNotificationAction* _clearAction;
	NSDictionary* _userInfo;
	NSString* _eventIdentifier;
	NSString* _callbackMachService;

}

@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * accountTypeID;                         //@synthesize accountTypeID=_accountTypeID - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * activateButtonTitle;                       //@synthesize activateButtonTitle=_activateButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * dismissButtonTitle;                        //@synthesize dismissButtonTitle=_dismissButtonTitle - In the implementation block
@property (nonatomic,retain) ANNotificationAction * activateAction;              //@synthesize activateAction=_activateAction - In the implementation block
@property (nonatomic,retain) ANNotificationAction * dismissAction;               //@synthesize dismissAction=_dismissAction - In the implementation block
@property (nonatomic,retain) ANNotificationAction * clearAction;                 //@synthesize clearAction=_clearAction - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * eventIdentifier;                           //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy) NSString * callbackMachService;                       //@synthesize callbackMachService=_callbackMachService - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDate *)date;
-(NSDictionary *)userInfo;
-(NSString *)message;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(ANNotificationAction *)dismissAction;
-(void)setDismissAction:(ANNotificationAction *)arg1 ;
-(NSString *)eventIdentifier;
-(ANNotificationAction *)activateAction;
-(ANNotificationAction *)clearAction;
-(void)setClearAction:(ANNotificationAction *)arg1 ;
-(NSString *)dismissButtonTitle;
-(void)setDismissButtonTitle:(NSString *)arg1 ;
-(NSString *)accountTypeID;
-(NSString *)activateButtonTitle;
-(void)setActivateButtonTitle:(NSString *)arg1 ;
-(NSString *)callbackMachService;
-(id)initWithManagedObject:(id)arg1 ;
-(id)initForAccountWithType:(id)arg1 ;
-(void)setEventIdentifier:(NSString *)arg1 ;
-(void)setCallbackMachService:(NSString *)arg1 ;
-(void)setActivateAction:(ANNotificationAction *)arg1 ;
@end
