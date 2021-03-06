/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:13 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKInternalRepresentation.h>

@class NSString, NSSet;

@interface GKCompatibilityEntryInternal : GKInternalRepresentation {

	NSString* _bundleID;
	NSSet* _versions;

}

@property (nonatomic,retain) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSSet * versions;                 //@synthesize versions=_versions - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSSet *)versions;
-(void)setVersions:(NSSet *)arg1 ;
@end

