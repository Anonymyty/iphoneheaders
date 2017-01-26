/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:26:54 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TILexiconDataHandler : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(BOOL)validateBundlePath:(id)arg1 ;
-(void)finishRequestWithEntries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
@end
