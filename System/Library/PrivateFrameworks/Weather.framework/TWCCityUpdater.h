/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/TWCUpdater.h>

@class NSArray, NSMutableArray;

@interface TWCCityUpdater : TWCUpdater {

	/*^block*/id _weatherUpdateCompletion;
	NSArray* _requestedCities;
	NSMutableArray* _parsedCities;

}

@property (nonatomic,retain) NSArray * requestedCities;                  //@synthesize requestedCities=_requestedCities - In the implementation block
@property (nonatomic,retain) NSMutableArray * parsedCities;              //@synthesize parsedCities=_parsedCities - In the implementation block
+(id)sharedCityUpdater;
+(void)clearSharedCityUpdater;
-(void)handleCompletionForCity:(id)arg1 withUpdateDetail:(unsigned long long)arg2 ;
-(void)_failed:(unsigned long long)arg1 ;
-(void)updateWeatherForCity:(id)arg1 ;
-(void)updateWeatherForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)requestedCities;
-(void)setRequestedCities:(NSArray *)arg1 ;
-(NSMutableArray *)parsedCities;
-(void)setParsedCities:(NSMutableArray *)arg1 ;
-(id)aggregateDictionaryDomain;
@end

