/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:35:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UsageSettings/UsageQuotaRequest.h>

@class NSArray;

@interface QuotaAppDetailsRequest : UsageQuotaRequest {

	NSArray* _bundleIds;
	NSArray* _bundleIDs;

}

@property (nonatomic,retain) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 bundleIDs:(id)arg3 quotaInfo:(id)arg4 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)urlRequest;
@end
