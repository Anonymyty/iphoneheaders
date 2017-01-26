/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding> {

	BOOL _admin;
	NSDate* _dateUpdated;

}

@property (nonatomic,readonly) NSDate * dateUpdated;                   //@synthesize dateUpdated=_dateUpdated - In the implementation block
@property (getter=isAdmin,nonatomic,readonly) BOOL admin;              //@synthesize admin=_admin - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAdmin;
-(id)initWithAdminStatus:(BOOL)arg1 dateUpdated:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)dateUpdated;
@end
