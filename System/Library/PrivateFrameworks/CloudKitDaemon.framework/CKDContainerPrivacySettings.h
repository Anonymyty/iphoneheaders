/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject {

	CKContainerID* _containerID;
	NSSet* _applicationBundleIDs;
	long long _discoverable;

}

@property (nonatomic,copy) CKContainerID * containerID;               //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSSet * applicationBundleIDs;              //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) long long discoverable;                  //@synthesize discoverable=_discoverable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(CKContainerID *)containerID;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(NSSet *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSSet *)arg1 ;
@end
