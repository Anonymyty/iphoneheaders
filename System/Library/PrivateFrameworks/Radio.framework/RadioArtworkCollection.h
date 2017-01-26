/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:52:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface RadioArtworkCollection : NSObject <NSCopying> {

	NSArray* _artworks;

}

@property (nonatomic,readonly) NSArray * artworks;              //@synthesize artworks=_artworks - In the implementation block
-(id)artworkCatalog;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)artworks;
-(id)bestArtworkForPixelSize:(CGSize)arg1 ;
-(id)bestArtworkForPointSize:(CGSize)arg1 ;
-(id)_artworksBySortingArtworks:(id)arg1 ;
-(id)initWithArtworks:(id)arg1 ;
-(id)initWithArtworkVariants:(id)arg1 ;
@end
