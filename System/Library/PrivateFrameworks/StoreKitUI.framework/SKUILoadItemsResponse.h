/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject {

	NSDictionary* _loadedItems;
	NSSet* _invalidItemIdentifiers;

}

@property (nonatomic,copy) NSDictionary * loadedItems;                  //@synthesize loadedItems=_loadedItems - In the implementation block
@property (nonatomic,copy) NSSet * invalidItemIdentifiers;              //@synthesize invalidItemIdentifiers=_invalidItemIdentifiers - In the implementation block
-(void)setInvalidItemIdentifiers:(NSSet *)arg1 ;
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(NSDictionary *)loadedItems;
-(NSSet *)invalidItemIdentifiers;
@end
