/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <Applications/AAPSyncMetaDataItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, AAPSyncAnchor;

@interface AAPSyncMetaDataItemDelete : NSObject <AAPSyncMetaDataItem, NSCoding> {

	NSString* _appId;
	AAPSyncAnchor* _anchor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appId;                    //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncAnchor * anchor;              //@synthesize anchor=_anchor - In the implementation block
-(id)scrapeAppInfo;
-(BOOL)isMetaDataItemDelete;
-(id)initWithAppId:(id)arg1 anchor:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(AAPSyncAnchor *)anchor;
-(void)_validate;
-(NSString *)appId;
@end

