/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMagazineProducer.opplugin/OpusMagazineProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface OKAutoLayoutFreqController : NSObject {

	NSMutableArray* _pages;
	long long _counts[6];
	NSMutableArray* _pageFrequency;
	NSMutableDictionary* _layoutsByResolution;

}
-(id)_freqOrderFromHightToLow;
-(id)bestLayoutByFreqOfAnyUpsFromLayouts:(id)arg1 ;
-(id)bestLayoutByFreqOfSameUpFromLayouts:(id)arg1 forResolution:(id)arg2 ;
-(float)_freqOfUp:(id)arg1 ;
-(void)printStatistics;
-(BOOL)_isLayout:(id)arg1 usedInLast:(long long)arg2 ;
-(void)addOnePageLayout:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

