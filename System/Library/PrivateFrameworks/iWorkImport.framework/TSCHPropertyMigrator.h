/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSPropertySet, TSUIntToIntDictionary, TSUIntegerKeyDictionary;

@interface TSCHPropertyMigrator : NSObject {

	TSSPropertySet* mPropertiesToForce;
	TSUIntToIntDictionary* mShouldForceFlags;
	TSUIntegerKeyDictionary* mValuesToForce;

}
-(void)visitExistingSeries:(id)arg1 ;
-(void)migrateToSeries:(id)arg1 ;
-(void)dealloc;
-(id)initWithProperties:(id)arg1 ;
@end

