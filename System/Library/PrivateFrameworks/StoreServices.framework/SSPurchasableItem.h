/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
+(id)databaseTable;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(id)description;
-(id)datePurchased;
-(long long)pid;
-(long long)storeID;
-(id)propertyValues;
@end

