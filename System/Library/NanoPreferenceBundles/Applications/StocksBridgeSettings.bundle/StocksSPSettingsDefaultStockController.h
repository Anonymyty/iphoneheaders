/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/StocksBridgeSettings.bundle/StocksBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class StocksWatchPreferences;

@interface StocksSPSettingsDefaultStockController : PSListController {

	long long _selectedRow;
	StocksWatchPreferences* _watchPreferences;

}

@property (nonatomic,retain) StocksWatchPreferences * watchPreferences;              //@synthesize watchPreferences=_watchPreferences - In the implementation block
+(void)wakeExtensionForWatchApp;
+(void)launchStocksApp;
+(id)stocksList;
-(void)setWatchPreferences:(StocksWatchPreferences *)arg1 ;
-(void)_setDefaultStockSymbol:(id)arg1 ;
-(StocksWatchPreferences *)watchPreferences;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

