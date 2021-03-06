/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreItemLibraryImportElement.h>

@class SSLookupItem, NSDictionary;

@interface MPStoreItemLibraryImportLookupElement : MPStoreItemLibraryImportElement {

	SSLookupItem* _storeItem;
	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
-(id)initWithLookupDictionary:(id)arg1 additionalTrackMetadata:(id)arg2 ;
-(id)storeItem;
-(NSDictionary *)lookupDictionary;
@end

