/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, FAFamilyCloudKitProperties, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding> {

	NSArray* _members;
	FAFamilyCloudKitProperties* _cloudKitProperties;
	NSDictionary* __serverResponse;

}

@property (readonly) NSArray * members;                                            //@synthesize members=_members - In the implementation block
@property (readonly) FAFamilyCloudKitProperties * cloudKitProperties;              //@synthesize cloudKitProperties=_cloudKitProperties - In the implementation block
@property (readonly) NSDictionary * _serverResponse;                               //@synthesize _serverResponse=__serverResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServerResponse:(id)arg1 ;
-(FAFamilyCloudKitProperties *)cloudKitProperties;
-(NSDictionary *)_serverResponse;
-(NSArray *)members;
@end
