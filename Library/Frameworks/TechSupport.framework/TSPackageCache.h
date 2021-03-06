/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Frameworks/TechSupport.framework/TechSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSPackageCache : NSObject {

	NSMutableDictionary* filepathBasedCache_;
	NSMutableDictionary* identifierBasedCache_;

}
+(id)sharedCache;
-(id)packageWithIdentifier:(id)arg1 ;
-(id)packageForFile:(id)arg1 ;
-(void)cachePackage:(id)arg1 forFile:(id)arg2 ;
-(void)cachePackage:(id)arg1 forIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)didReceiveMemoryWarning;
@end

