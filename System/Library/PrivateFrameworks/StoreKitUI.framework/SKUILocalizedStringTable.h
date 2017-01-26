/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSDictionary, NSString;

@interface SKUILocalizedStringTable : NSObject {

	NSBundle* _bundle;
	NSDictionary* _strings;
	NSString* _tableName;

}

@property (nonatomic,readonly) NSBundle * bundle;                 //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(NSBundle *)bundle;
-(NSString *)tableName;
-(id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3 ;
-(id)_legacyLanguageNameForLanguageCode:(id)arg1 ;
@end
