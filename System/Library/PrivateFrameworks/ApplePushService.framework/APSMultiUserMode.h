/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APSMultiUserMode : NSObject {

	BOOL _isMultiUser;
	BOOL _isLoggedInUser;

}

@property (nonatomic,readonly) BOOL isMultiUser;                 //@synthesize isMultiUser=_isMultiUser - In the implementation block
@property (nonatomic,readonly) BOOL isLoggedInUser;              //@synthesize isLoggedInUser=_isLoggedInUser - In the implementation block
+(id)sharedInstance;
+(BOOL)_getMultiUserMode;
+(BOOL)_getIsCurrentlyLoggedIn;
-(id)initWithIsMultiUserMode:(BOOL)arg1 loggedInUser:(BOOL)arg2 ;
-(BOOL)isMultiAndLoggedIn;
-(BOOL)isLoggedInUser;
-(BOOL)isMultiUser;
@end

